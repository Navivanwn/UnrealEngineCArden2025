// Fill out your copyright notice in the Description page of Project Settings.


#include "AIC_NPC.h"
#include "C_NPC.h"

AAIC_NPC::AAIC_NPC(FObjectInitializer const& FObjectInitializer)
{
	
}

void AAIC_NPC::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (AC_NPC* const NPC = Cast<AC_NPC>(InPawn))
	{
		if (UBehaviorTree* const Tree = NPC->GetBehaviorTree())
		{
			UBlackboardComponent* blackboard;
			UseBlackboard(Tree->BlackboardAsset, blackboard);
			Blackboard = blackboard;
			RunBehaviorTree(Tree);
		}
	}
}
	
