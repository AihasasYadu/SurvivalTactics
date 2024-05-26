// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Weapons/Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	runningTime += DeltaTime;
	float deltaZ = amplitude * FMath::Sin (runningTime * timeConstant);

	AddActorWorldOffset (FVector (0.0f, 0.0f, deltaZ));
}

