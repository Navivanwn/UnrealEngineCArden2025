// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformModifierActor.h"

// Sets default values
ATransformModifierActor::ATransformModifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

void ATransformModifierActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	DrawDSphere();
}


// Called when the game starts or when spawned
void ATransformModifierActor::BeginPlay()
{
	Super::BeginPlay();
	if (TargetActor)
	{
		NewTransform = TargetActor->GetActorTransform();
	}
	else
	{
		TargetActor = nullptr;

		if (Positions.Num() > 0)
		{
			MoveToNextPosition();
		}
	}
}

// Called every frame
void ATransformModifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ModifyTargetTransform(DeltaTime);
	
}

void ATransformModifierActor::ModifyTargetTransform(float DeltaTime)
{
	///if (TargetActor)
	///{
	///	TargetActor->SetActorTransform(NewTransform);
	///}

	if (Positions.Num() == 0)
	{
		return;
	}
	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];

	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime;

	TargetActor->SetActorLocation(NewPosition);

	if (FVector::Dist(NewPosition, TargetPosition) < 10.0f)
	{
		CurrentPositionIndex++;

		if (CurrentPositionIndex >= Positions.Num())
		{
			CurrentPositionIndex = 0;
		}
	} 
}

void ATransformModifierActor::MoveToNextPosition()
{
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex))
	{
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
		ChangeMaterial(Materials);
	}
}

void ATransformModifierActor::ChangeMaterial(TArray<UMaterialInterface*> NewMaterial)
{
	if (NewMaterial[0] && MeshComponent)
	{
		MeshComponent->SetMaterial(0, NewMaterial[0]);
	}
}

void ATransformModifierActor::DrawDSphere() const
{
	for (const FVector& Position : Positions)
	{
		DrawDebugSphere(
			GetWorld(),
			Position,
			25.0f,
			12,
			FColor::Red,
			false,
			-1.0f,
			0,
			2.0f
			);
	}
}
