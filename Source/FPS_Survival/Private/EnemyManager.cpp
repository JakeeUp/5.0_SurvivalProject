// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"

#include "Enemy.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyManager::AEnemyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyManager::SpawnFirstWave()
{
	if(m_pEnemies.Num() > 0)
	{
		int spawnCount = 0;

		for(int i = 0; i < m_pEnemies.Num(); i++)
		{
			if(spawnCount == m_iFirstWaveSpawnCount)
			{
				break;
			}

			AEnemy* pEnemy = Cast<AEnemy>(m_pEnemies[i]);

			pEnemy->SetActorEnableCollision(false);
			pEnemy->TeleportTo(m_pSpawnLocations[FMath::RandRange(0, m_pSpawnLocations.Num() - 1)], pEnemy->GetActorRotation());
			pEnemy->SetActorEnableCollision(true);

			pEnemy->m_bInCombat = true;

			spawnCount++;
		}
	}
}

void AEnemyManager::UpdateWaveParameters()
{
	//update wave count and kills
	m_iCurrentWave += 1;
	m_iWaveKills = 0;

	//update wave size and arena max
	m_iCurrentWaveSize += 4;
	m_iMaxEnemiesInArea += 2;

	if(m_iMaxEnemiesInArea >= m_pEnemies.Num())
	{
		m_iMaxEnemiesInArea = m_pEnemies.Num() - 2;
	}

	//update max and min walk speeds per round
	m_fGlobalMaxWalkSpeed += 100.0f;
	if(m_fGlobalMaxWalkSpeed > 400.0f)
	{
		m_fGlobalMaxWalkSpeed = 400.0f;
	}

	m_fGlobalMinWalkSpeed += 50.0f;
	if(m_fGlobalMinWalkSpeed > 350.0f)
	{
		m_fGlobalMinWalkSpeed = 350.0f;
	}
}

void AEnemyManager::StartNextWave()
{
	//init spawn count tracker
	int spawnCount = 0;
	for(int i = 0; i < m_pEnemies.Num(); i++)
	{
		//break loop if max enmies have been reached
		if(spawnCount == m_iMaxEnemiesInArea || spawnCount == m_iCurrentWaveSize)
		{
			break;
		}

		//cast to enemy
		AEnemy* pEnemy = Cast<AEnemy>(m_pEnemies[i]);

		if(!pEnemy->m_bInCombat)
		{
			pEnemy->SetActorEnableCollision(false);
			pEnemy->TeleportTo(m_pSpawnLocations[FMath::RandRange(0, m_pSpawnLocations.Num() - 1)], pEnemy->GetActorRotation());
			pEnemy->SetActorEnableCollision(true);

			pEnemy->m_bInCombat = true;

			spawnCount++;
		}
	}

	ModifyWaveSpeeds();
}

void AEnemyManager::SpawnMoreEnemies()
{
	//check if enemy kills are needed for wave complete

	int neededKills = m_iCurrentWaveSize - m_iWaveKills;
	if(neededKills > 0)
	{
		if(GetAllEnemiesInCombat().Num() < neededKills)
		{
			//check if arena isnt full
			if(GetAllEnemiesInCombat().Num() < m_iMaxEnemiesInArea)
			{
				//go through enemis
				for(int i = 0; i< m_pEnemies.Num(); i++)
				{
					//cast to enemy
					AEnemy* pEnemy = Cast<AEnemy>(m_pEnemies[i]);

					if(!pEnemy->m_bInCombat)
					{
						//disable collision temp in case enemies try to spawn on top of each other
						pEnemy->SetActorEnableCollision(false);
						pEnemy->TeleportTo(m_pSpawnLocations[FMath::RandRange(0, m_pSpawnLocations.Num() - 1)], pEnemy->GetActorRotation());
						pEnemy->SetActorEnableCollision(true);
						//combat status
						pEnemy->m_bInCombat = true;
						break;

					}
				}
			}
		}
	}
}

TArray<AActor*> AEnemyManager::GetAllEnemiesInCombat()
{
	//iterate thorugh all enemies and add to another list all enmeis in combat

	TArray<AActor*> pEnemiesInCombat = TArray<AActor*>();
	for(AActor* actor : m_pEnemies)
	{
		//cast to enemy
		AEnemy* pEnemy = Cast<AEnemy>(actor);

		//add to list if in combat

		if(pEnemy->m_bInCombat)
		{
			pEnemiesInCombat.Add(actor);
		}
	}
	
	return pEnemiesInCombat;
}

void AEnemyManager::ModifyWaveSpeeds()
{
	// go through enmeies
	for(int i = 0; i < m_pEnemies.Num(); i++)
	{
		AEnemy* pEnemy = Cast<AEnemy>(m_pEnemies[i]);

		pEnemy->GetCharacterMovement()->MaxWalkSpeed = FMath::RandRange(m_fGlobalMinWalkSpeed, m_fGlobalMaxWalkSpeed);
	}
}

// Called when the game starts or when spawned
void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy::StaticClass(), m_pEnemies);

	FTimerHandle pTimerHandle;

	GetWorld()->GetTimerManager().SetTimer(pTimerHandle, [&]()
	{
		SpawnFirstWave();

		ModifyWaveSpeeds();

		
	},3,false);

	//init wave size
	m_iCurrentWaveSize = m_iFirstWaveSpawnCount;
}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

