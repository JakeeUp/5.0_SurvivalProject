// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_SurvivalCharacter.h"

#include "EnhancedInputComponent.h"
#include "FPS_SurvivalProjectile.h"
#include "InputActionValue.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "EnhancedInputSubsystems.h"
#include "FPS_Weapon.h"
#include "NetworkMessage.h"
#include "Engine/LocalPlayer.h"
#include "TP_WeaponComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

//////////////////////////////////////////////////////////////////////////
// AFPS_SurvivalCharacter

AFPS_SurvivalCharacter::AFPS_SurvivalCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	FirstPersonSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	FirstPersonSpringArmComponent->SetupAttachment(FirstPersonCameraComponent);

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonSpringArmComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

}

void AFPS_SurvivalCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	GetMesh1P()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &AFPS_SurvivalCharacter::HandleOnMontageEnd);
	
	EquipWeapon();

	if(m_cPlayerHud != nullptr)
	{
		//add hud
		UUserWidget* HUD = CreateWidget<UUserWidget>(Cast<APlayerController>(GetController()), m_cPlayerHud);
		HUD->AddToViewport(9999);
	}
	
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}
void AFPS_SurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFPS_SurvivalCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFPS_SurvivalCharacter::Look);

		// Reloading
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Triggered,this,&AFPS_SurvivalCharacter::Reload);

		//Shooting
		EnhancedInputComponent->BindAction(MainAction,ETriggerEvent::Triggered,this,&AFPS_SurvivalCharacter::OnPrimaryAction);
	}
	
}

void AFPS_SurvivalCharacter::HandleOnMontageEnd(UAnimMontage* a_pMontage, bool a_bInterrupted)
{
	if(a_pMontage->GetName().Contains("reload")&& !a_bInterrupted)
	{
		if(m_pEquippedWeapon == nullptr)
		{
			return;
		}

		if(totalAmmo >= m_pEquippedWeapon->m_iClipSize)
		{
			totalAmmo -= m_pEquippedWeapon->m_iClipSize;

			int reloadAmt = m_pEquippedWeapon->m_iClipSize - currentAmmo;
			currentAmmo += reloadAmt;
		}
		else
		{
			int reloadAmt = abs(totalAmmo - currentAmmo);
			currentAmmo += reloadAmt;

			totalAmmo = 0;
		}
	}
}


void AFPS_SurvivalCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AFPS_SurvivalCharacter::GetHasRifle()
{
	return bHasRifle;
}

void AFPS_SurvivalCharacter::EquipWeapon()
{
	APlayerController* pController = Cast<APlayerController>(GetController());

	const FRotator pRotation = pController->PlayerCameraManager->GetCameraRotation();
	const FVector pLocation = GetOwner()->GetActorLocation();

	FActorSpawnParameters pSpawnParams;
	pSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AActor* pPistol = GetWorld()->SpawnActor<AFPS_Weapon>(m_cPistol,pLocation,pRotation,pSpawnParams);

	m_pEquippedWeapon = Cast<AFPS_Weapon>(pPistol);

	//ammo
	currentAmmo = m_pEquippedWeapon->m_iClipSize;
	totalAmmo = m_pEquippedWeapon->m_iMaxSize;

	//maybe answer
	UTP_WeaponComponent* pWeapon = m_pEquippedWeapon->m_pWeaponComponent;

	pWeapon->AttachWeapon(this);
}

void AFPS_SurvivalCharacter::TakeDamage(float a_fDamage)
{
	//deal damage
	m_fHealth -= a_fDamage;
	//death handle
	if(m_fHealth <= 0)
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName(GetWorld()->GetName()), true);
	}
}

void AFPS_SurvivalCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AFPS_SurvivalCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AFPS_SurvivalCharacter::Reload()
{
	//check if reload is needed

	if(currentAmmo < m_pEquippedWeapon->m_iClipSize && totalAmmo > 0)
	{
		UAnimInstance* pAnimInstance = GetMesh1P()->GetAnimInstance();
		if(pAnimInstance != nullptr)
		{
			if(m_pReloadMontage != nullptr)
			{
				pAnimInstance->Montage_Play(m_pReloadMontage, 1.f);
			}
		}
	}
	
}

void AFPS_SurvivalCharacter::OnPrimaryAction()
{
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();

	UAnimInstance* pAnimInstance = GetMesh1P()->GetAnimInstance();

	if(pAnimInstance != nullptr)
	{
		if(m_pReloadMontage != nullptr)
		{
			pAnimInstance->Montage_Stop(.2f, m_pReloadMontage);
		}
		if(m_pShootMontage != nullptr)
		{
			pAnimInstance->Montage_Play(m_pShootMontage,1.f);
		}
	}
}



