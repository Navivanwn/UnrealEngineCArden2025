// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TransformModifierActor.generated.h"

UCLASS()
class UECARDEN_API ATransformModifierActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATransformModifierActor();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Transform")
	void ModifyTargetTransform(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Transform")
	void MoveToNextPosition();

	UFUNCTION(BlueprintCallable, Category = "Transform")
	void ChangeMaterial(UMaterialInterface* NewMaterial);

	void DrawDSphere() const; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	AActor* TargetActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	UMaterialInterface* DefaultMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	UStaticMeshComponent* MeshComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")\
	FTransform NewTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")\
	TArray<FVector> Positions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")\
	TArray<UMaterialInterface*> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")\
	int32 CurrentPositionIndex;
	
};
