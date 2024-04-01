// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_FindPlayerLocation.h"
#include "BehaviorTree//BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Enemy_Controller.h"
#include "EnemyKeys.h"
#include "Kismet/GameplayStatics.h"

UBTT_FindPlayerLocation::UBTT_FindPlayerLocation(FObjectInitializer const& a_pObectInit)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UBTT_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& a_pTreeComponent, uint8* a_pNodeMem)
{
	auto const pAIController =Cast<AEnemy_Controller>(a_pTreeComponent.GetAIOwner());

	UNavigationSystemV1* pNavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	APlayerController* pPlayerController = UGameplayStatics::GetPlayerController(GetWorld(),0);
	APawn* pPlayer = pPlayerController->GetPawn();

	if(pNavSystem)
	{
		
		pAIController->GetBlackBoard()->SetValueAsVector(EnemyKeys::targetLocation, pPlayer->GetActorLocation());
	}

	FinishLatentTask(a_pTreeComponent, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
