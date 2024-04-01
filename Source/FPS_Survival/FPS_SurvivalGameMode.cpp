// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_SurvivalGameMode.h"
#include "FPS_SurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_SurvivalGameMode::AFPS_SurvivalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
