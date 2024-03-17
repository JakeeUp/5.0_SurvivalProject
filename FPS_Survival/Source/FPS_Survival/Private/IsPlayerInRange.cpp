// Fill out your copyright notice in the Description page of Project Settings.


#include "IsPlayerInRange.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy_Controller.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyKeys.h"


UIsPlayerInRange::UIsPlayerInRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player In Range");
}

void UIsPlayerInRange::OnBecomeRelevant(UBehaviorTreeComponent& a_pTreeComp, uint8* a_pNodeMem)
{
	Super::OnBecomeRelevant(a_pTreeComp, a_pNodeMem);

	AEnemy_Controller* pAIController = Cast<AEnemy_Controller>(a_pTreeComp.GetAIOwner());
	APawn* pEnemy = pAIController->GetPawn();

	APlayerController* pPlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	pAIController->GetBlackBoard()->SetValueAsBool(EnemyKeys::isPlayerInRange, pEnemy->GetDistanceTo(pPlayerController->GetPawn()) <= m_fRange);
}
