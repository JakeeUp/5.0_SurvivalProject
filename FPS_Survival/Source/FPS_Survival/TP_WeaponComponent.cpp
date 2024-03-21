// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "FPS_SurvivalCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "AI/NavigationSystemBase.h"
#include "Components/SceneComponent.h"
#include "Enemy.h"
#include "GlobalManager.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
}


void UTP_WeaponComponent::Fire()
{
	if(Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	if(Character->currentAmmo <= 0)
	{
		return;
	}

	
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(m_wMuzzleOffset);
	
			FCollisionQueryParams queryParams;
			queryParams.AddIgnoredActor(PlayerController->GetPawn());

			FHitResult outHit;

			World->LineTraceSingleByChannel(outHit, SpawnLocation,SpawnLocation + (SpawnRotation.Vector()* 3000), ECollisionChannel::ECC_Pawn, queryParams);
			DrawDebugLine(World, SpawnLocation, SpawnLocation + (SpawnRotation.Vector()* 3000), FColor::Red,false, 5.f,5,5.f);

			//cast hit to enemy
			AEnemy* pEnemy = Cast<AEnemy>(outHit.GetActor());
			if(pEnemy)
			{
				pEnemy->e_TakeDamage(10.0f);
				Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->m_iPoints += 10;
			}
			else //play enviro sounds
			{
				if(m_wEnvironmentalSounds.Num() > 0)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_wEnvironmentalSounds[FMath::RandRange(0,m_wEnvironmentalSounds.Num()-1)], Character->GetActorLocation());
				}
			}

			Character->currentAmmo = Character->currentAmmo - 1;

			
		}
	
	// Try and play the sound if specified
	if (m_wFireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, m_wFireSound, Character->GetActorLocation());
	}

	if(m_wMuzzleFlash != nullptr)
	{
		APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();

		const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(m_wMuzzleOffset);

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), m_wMuzzleFlash, SpawnLocation, SpawnRotation);
	}
	
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Character == nullptr)
	{
		return;
	}

	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(FireMappingContext);
		}
	}
}



void UTP_WeaponComponent::AttachWeapon(AFPS_SurvivalCharacter* TargetCharacter)
{
	Character = TargetCharacter;

	// Check that the character is valid, and has no rifle yet
	if (Character == nullptr || Character->GetHasRifle())
	{
		return;
	}

	// Attach the weapon to the First Person Character
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	GetOwner()->AttachToComponent(Character->GetMesh1P(),AttachmentRules, FName(TEXT("WeaponSocket")));
	
	
	// switch bHasRifle so the animation blueprint can switch to another animation set
	Character->SetHasRifle(true);

	// Set up action bindings
	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
			Subsystem->AddMappingContext(FireMappingContext, 1);
		}

		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::Fire);
		}
	}
}

