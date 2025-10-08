// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vehicle.generated.h"

UCLASS()
class UECARDEN_API AVehicle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:
	UFUNCTION(BlueprintCallable, Category = "Vehicle")
	virtual void Move();
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	float Fuel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	FString VehicleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	int32 Wheels;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	bool isElectric;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	FColor VehicleColor;
};
