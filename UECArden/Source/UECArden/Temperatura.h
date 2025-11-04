// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperatura.generated.h"

UCLASS()
class UECARDEN_API ATemperatura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperatura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Metodo para obtener temperatura en Farenheit
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
	float GetTemperatureFarenheit() const;

	UFUNCTION(BlueprintPure, Category = "Temperatura")
	static float CalculateTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintPure, Category = "Temperatura")
	static float ConvertKelvinToCelcius(float Kelvin);

	UFUNCTION(BlueprintPure, Category = "Temperatura")
	static float CalculateAverageTemperature(float Temp1, float Temp2);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Temperatura")
	void OnCheckTemperature(float CurrentTemperature);
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperatura")
	float TemperatureCelcius;
};
