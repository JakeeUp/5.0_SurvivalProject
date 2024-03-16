// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_ChasePlayer.h"
#include "BehaviorTree//BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Enemy_Controller.h"
#include "EnemyKeys.h"
#include "Kismet/GameplayStatics.h"

UBTT_ChasePlayer::UBTT_ChasePlayer(FObjectInitializer const& a_pObectInit)
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UBTT_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& a_pTreeComponent, uint8* a_pNodeMem)
{
	auto const pAIController =Cast<AEnemy_Controller>(a_pTreeComponent.GetAIOwner());

	UNavigationSystemV1* pNavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	

	if(pNavSystem)
	{
		//get loc of player
		FVector pLocation = pAIController->GetBlackBoard()->GetValueAsVector(EnemyKeys::targetLocation);

		//move to player
		pAIController->MoveToLocation(pLocation);
		
	}

	FinishLatentTask(a_pTreeComponent, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
