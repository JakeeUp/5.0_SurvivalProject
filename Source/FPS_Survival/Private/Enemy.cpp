// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "Kismet/GameplayStatics.h"

#include "FPS_Survival/FPS_SurvivalCharacter.h"

#include "GlobalManager.h"
// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &AEnemy::HandleOnMontageEnded);

	m_vWorldSpawnLocation = GetActorLocation();

	// get ref to manager
	m_pEnemyManager = Cast<AEnemyManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyManager::StaticClass()));
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::Attack()
{
	UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
	if(pAnimInstance != nullptr)
	{
		if(m_pAttackMontage != nullptr)
		{
			pAnimInstance->Montage_Play(m_pAttackMontage);

			AFPS_SurvivalCharacter* pPlayer = Cast<AFPS_SurvivalCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
			pPlayer->p_TakeDamage(10.f);

			//attack sounds
			if(m_pAttackSounds.Num()>0)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(),m_pAttackSounds[FMath::RandRange(0,m_pDeathSounds.Num()-1)], GetActorLocation());
			}
		}
	}
}

void AEnemy::e_TakeDamage(float a_fDamage)
{
	//check if dead
	UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
	if(pAnimInstance != nullptr)
	{
		if(pAnimInstance->Montage_IsPlaying(m_pDeathMontage))
		{
			return;
		}
	}

	//play damage sound
	if(m_pEnemyDamageSounds != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),m_pEnemyDamageSounds,GetActorLocation());
	}

	//damage
	m_fHealth -= a_fDamage;

	if(m_fHealth <= 0)
	{
		Die();
	}
}

void AEnemy::Die()
{
	if(m_pDeathSounds.Num() > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),m_pDeathSounds[FMath::RandRange(0,m_pDeathSounds.Num()-1)], GetActorLocation());
	}

	UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
	if(pAnimInstance != nullptr)
	{
		if(m_pDeathMontage != nullptr)
		{
			pAnimInstance->Montage_Play(m_pDeathMontage);
		}
	}
}

void AEnemy::Reset()
{
	//TODO

	//tp enemy back to spawn
	TeleportTo(m_vWorldSpawnLocation,GetActorRotation());

	m_fHealth = 30.0f;
	m_bInCombat = false;

	
}

void AEnemy::HandleOnMontageEnded(UAnimMontage* a_pMontage, bool a_bInterrupted)
{
	//CHECK DEAHT MONTAGE
	//animation notify for the death
	//figure out other way other than looking for a string
	
	if(a_pMontage->GetName().Contains("Death"))
	{
		Reset();
		//add points
		//move add points to where enemy health is at 0
		Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->m_iPoints += 100; //gameinstance problem for multiple players

		//update manager
		m_pEnemyManager->m_iWaveKills++;

		if(m_pEnemyManager->m_iWaveKills >= m_pEnemyManager->m_iCurrentWaveSize)
		{
			//begin next wave and update params
			m_pEnemyManager->UpdateWaveParameters();
			m_pEnemyManager->StartNextWave();
		}
		else
		{
			//try to spawn more enemies
			m_pEnemyManager->SpawnMoreEnemies();
			
		}
	}
}

