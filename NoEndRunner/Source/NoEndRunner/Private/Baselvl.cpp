// Fill out your copyright notice in the Description page of Project Settings.


#include "Baselvl.h"
#include "Components/BoxComponent.h"

// Sets default values
ABaselvl::ABaselvl()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaselvl::BeginPlay()
{
	Super::BeginPlay();

	if (Trigger != nullptr)
	{
		Trigger->bHiddenInGame = true;
	}
	
}

// Called every frame
void ABaselvl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UBoxComponent* ABaselvl::GetTrigger()
{
	return Trigger;
}

UBoxComponent* ABaselvl::GetSpawnLocation()
{
	return Spawnlocation;
}

