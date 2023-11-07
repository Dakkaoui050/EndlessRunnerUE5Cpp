// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnLevel.h"
#include "Baselvl.h"
#include "Engine.h"
#include "Components/BoxComponent.h"

// Sets default values
ASpawnLevel::ASpawnLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnLevel::BeginPlay()
{
	Super::BeginPlay();
	Spawnlevel(true);
	Spawnlevel(false);
	Spawnlevel(false);
	Spawnlevel(false);

}

// Called every frame
void ASpawnLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnLevel::Spawnlevel(bool IsFirst)
{
	// Set the initial spawn location and rotation
	spawnLocation = FVector(0.f, 1000.f, 0.f);
	SpawnRotation = FRotator(0.f, 90.f, 0.f);

	// If it's not the first level spawn, calculate the spawn location based on the previous level
	if (!IsFirst)
	{
		ABaselvl* LastLevel = levelList.Last();

		spawnLocation = LastLevel->GetSpawnLocation()->GetComponentTransform().GetTranslation();
	}
	// Generate a random level number between 1 and 9
	RandomLevel = FMath::RandRange(1, 9);
	ABaselvl* NewLvl = nullptr;

	// Spawn the corresponding level based on the random number
	if (RandomLevel == 1)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level1, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if(RandomLevel == 2)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level2, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 3)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level3, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 4)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level4, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 5)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level5, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 6)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level6, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 7)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level7, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 8)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level8, spawnLocation, SpawnRotation, spawnInfo);
	}
	else if (RandomLevel == 9)
	{
		NewLvl = GetWorld()->SpawnActor<ABaselvl>(level9, spawnLocation, SpawnRotation, spawnInfo);
	}

	// If a new level is successfully spawned, attach an overlap event listener
	if (!NewLvl==null)
	{
		if (NewLvl->GetTrigger())
		{
			NewLvl->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &ASpawnLevel::OnOverlapBegin);
		}
	}

	// Add the newly spawned level to the levelList array
	levelList.Add(NewLvl);

	// Check if the number of elements in levelList is greater than 5
	if (levelList.Num() > 5)
	{
		// If there are more than 5 elements, remove the first element
		levelList.RemoveAt(0);
	}

}

void ASpawnLevel::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& sweepResult)
{
	// Spawn the next level when an overlap occurs
	Spawnlevel(false);


}

