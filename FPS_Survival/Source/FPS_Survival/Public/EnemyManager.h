// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

UCLASS()
class FPS_SURVIVAL_API AEnemyManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyManager();

	//container
	TArray<AActor*> m_pEnemies;

	//config field
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	TArray<FVector> m_pSpawnLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	int m_iFirstWaveSpawnCount = 5;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Management")
	int m_iCurrentWave = 1;

	//count and kill tracking
	int m_iCurrentWaveSize;
	int m_iWaveKills = 0;

	//spawning and updating enemies
	void SpawnFirstWave();
	void UpdateWaveParameters();
	void StartNextWave();
	void SpawnMoreEnemies();
	TArray<AActor*> GetAllEnemiesInCombat();
	void ModifyWaveSpeeds();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
		//min and max wave speeds
	float m_fGlobalMaxWalkSpeed = 120.f;
	float m_fGlobalMinWalkSpeed = 70.0f;

	//cap for enemies in area
	int m_iMaxEnemiesInArea = 5;

};
