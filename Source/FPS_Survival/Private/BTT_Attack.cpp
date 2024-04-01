// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_Attack.h"
#include "Enemy_Controller.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyKeys.h"

UBTT_Attack::UBTT_Attack(FObjectInitializer const& a_pObjectInit)
{
	NodeName = TEXT("Attack");
		
}

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& a_pTreeComp, uint8* a_pNodeMem)
{
	AEnemy_Controller* pAIController = Cast<AEnemy_Controller>(a_pTreeComp.GetAIOwner());
	AEnemy* pEnemy = Cast<AEnemy>(pAIController->GetPawn());

	if(AttackMontageFinished(pEnemy))
	{
		bool bCanAttack = pAIController->GetBlackBoard()->GetValueAsBool(EnemyKeys::isPlayerInRange);
		if(bCanAttack)
		{
			//run attack method
			pEnemy->Attack();
		}
	}

	FinishLatentTask(a_pTreeComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}

bool UBTT_Attack::AttackMontageFinished(AEnemy* a_pEnemy)
{
	UAnimInstance* pAnimInstance = a_pEnemy->GetMesh()->GetAnimInstance();

	if(pAnimInstance != nullptr)
	{
		return pAnimInstance->Montage_GetIsStopped(a_pEnemy->m_pAttackMontage);
	}
	return false;
}
