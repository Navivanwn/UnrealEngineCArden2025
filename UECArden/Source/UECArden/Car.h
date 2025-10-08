// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Vehicle.h"
#include "Car.generated.h"

UENUM()
enum class ECarBrand
{
	Toyota UMETA(DisplayName = "Toyota"),
	Ford UMETA(DisplayName = "Ford"),
	Honda UMETA(DisplayName = "Honda"),
	Chevrolet UMETA(DisplayName = "Chevrolet"),
	BMW UMETA(DisplayName = "BMW"),
	Audi UMETA(DisplayName = "Audi"),
	Mercedes UMETA(DisplayName = "Mercedes"),
	VolksWagen UMETA(DisplayName = "VolksWagen"),
	Nissan UMETA(DisplayName = "Nissan"),
};

/**
 * 
 */
UCLASS()
class UECARDEN_API ACar : public AVehicle
{
	GENERATED_BODY()

public:
	ACar();

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;
	virtual void Move() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	ECarBrand CarBrand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString CarModel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString LicensePlate;
};
