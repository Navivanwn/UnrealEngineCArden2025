// Fill out your copyright notice in the Description page of Project Settings.


#include "C_NPC.h"

// Sets default values
AC_NPC::AC_NPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_NPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_NPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

