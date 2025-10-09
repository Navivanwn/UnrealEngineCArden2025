// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformActor.generated.h"

UCLASS()
class UECARDEN_API APlatformActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Platform Functions")
	void ChangeMaterial(UMaterialInterface* NewMaterial);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
					    AActor* OtherActor,
					    UPrimitiveComponent* OtherComp,
					    int32 OtherBodyIndex,
					    bool bFromSweep,
					    const FHitResult& SweepResult);

	//Components
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComponent;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="PlatformSettings")
	UStaticMeshComponent* MeshComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="PlatformSettings")
	UMaterialInterface* DefaultMaterial;

	//Variables
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="PlatformSettings")
	float MovementSpeed;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="PlatformSettings")
	float MovementAmplitude;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="PlatformSettings")
	FVector InitialLocation;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="PlatformSettings")
	bool bIsMovingRight;
	

};
