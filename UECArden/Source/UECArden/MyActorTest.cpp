// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"

// Sets default values
AMyActorTest::AMyActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 25;
	esInstructor = true;
	nombre = "Roberto Charreton";
}

// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	AMyActorTest::DemonstrateFundamentals();
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorTest::DemonstrateFundamentals()
{
	//Operadores aritmeticos
	int32 sum = edad + 30;
	float product = MyFloatVariable * 2.5f;

	//Estructuras de control
	if (esInstructor)
	{
		//Imprime en consola
		UE_LOG(LogTemp, Warning, TEXT("%s es el insturctor y tiene %d años"), *nombre, edad);
		//Imprime en pantalla / viewport
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
			FString::Printf(TEXT("%s es el instructor y tiene %d años"), *nombre, edad));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s no es el instructor y tiene %d años"), *nombre, edad);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
			FString::Printf(TEXT("%s no es el instructor y tiene %d años"), *nombre, edad));
	}

	//Bucles o Ciclos
	for (int32 i = 0; i < 5; i++)
	{
		FString DEbugMessage = FString::Printf(TEXT("loop iteration %d"),i);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor:: Green, DEbugMessage);
	}

	//Bucle While
	int count = 0;
	while (count < 3)
	{
		FString WhileMessage = FString::Printf(TEXT(" while loop iteration %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor:: Cyan, WhileMessage);
		count++;
	}
}

