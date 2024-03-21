// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalManager.generated.h"

/**
 * 
 */
UCLASS()
class FPS_SURVIVAL_API UGlobalManager : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int m_iPoints = 0;
	
};
