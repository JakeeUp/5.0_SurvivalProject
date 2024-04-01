// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "TP_WeaponComponent.generated.h"

class AFPS_SurvivalCharacter;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_SURVIVAL_API UTP_WeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AFPS_SurvivalProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Sound")
	USoundBase* m_wFireSound;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Sound")
	USoundBase* m_wEmptySound;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Sound")
	TArray<USoundBase*> m_wEnvironmentalSounds;

	//Muzzle Offset
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Gameplay")
	FVector m_wMuzzleOffset = FVector(100.f,0,10.f);

	//muzzle flash
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "SFX")
	UNiagaraSystem* m_wMuzzleFlash;
	


	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* FireMappingContext;

	/** Fire Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* FireAction;

	/** Sets default values for this component's properties */
	UTP_WeaponComponent();

	/** Attaches the actor to a FirstPersonCharacter */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void AttachWeapon(AFPS_SurvivalCharacter* TargetCharacter);

	/** Make the weapon Fire a Projectile */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Fire();



protected:
	/** Ends gameplay for this component. */
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
		

private:
	/** The Character holding this weapon*/
	AFPS_SurvivalCharacter* Character;
};
