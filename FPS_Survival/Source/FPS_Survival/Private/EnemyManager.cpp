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
}

void AEnemyManager::StartNextWave()
{
}

void AEnemyManager::SpawnMoreEnemies()
{
}

TArray<AActor*> AEnemyManager::GetAllEnemiesInCombat()
{
	return TArray<AActor*>();
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
	
	
}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

