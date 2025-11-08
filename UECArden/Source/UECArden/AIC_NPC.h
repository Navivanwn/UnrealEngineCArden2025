// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIC_NPC.generated.h"

/**
 * 
 */
UCLASS()
class UECARDEN_API AAIC_NPC : public AAIController
{
	GENERATED_BODY()

public:
	explicit AAIC_NPC(FObjectInitializer const & FObjectInitializer);

protected:
	virtual void OnPossess(APawn* InPawn) override;
};
