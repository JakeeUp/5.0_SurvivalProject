// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPS_Survival/FPS_SurvivalCharacter.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "HealthStation.generated.h"

UCLASS()
class FPS_SURVIVAL_API AHealthStation : public AActor
{
	GENERATED_BODY()
	//Ammo Station Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* m_pHealthMesh;

	//Trigger Capsule Collider
	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	UCapsuleComponent* M_PHealthCapsuleComponent;
public:	
	// Sets default values for this actor's properties
	AHealthStation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//BEGIN OVERLAP EVENT HANDLER
	UFUNCTION()
	void OnCapsuleBeginOverlap(UPrimitiveComponent* a_pOverlappedComponent, AActor* a_pOtherActor, UPrimitiveComponent* a_pOtherComp, int32 a_iOtherBodyIndex, bool a_bFromSweep, const FHitResult& a_pSweepResult);

	//endOverlap event handler
	UFUNCTION()
	void OnCapsuleEndOverlap(UPrimitiveComponent* a_pOverlappedComponent, AActor* a_pOtherActor, UPrimitiveComponent* a_pOtherComp, int32 a_iOtherBodyIndex);

};
