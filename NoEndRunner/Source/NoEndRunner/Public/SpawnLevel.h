// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnLevel.generated.h"

class ABaselvl;// Include necessary headers and define class AbaseLevel

UCLASS()
class NOENDRUNNER_API ASpawnLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ASpawnLevel();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
public:
	// Declare a function to spawn a level
	UFUNCTION()
	void Spawnlevel(bool IsFirst);

	// Declare a function to handle overlap events
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool BFromSweep, const FHitResult& sweepResult);

protected:
	// Declare a pointer to a player character (APawn)
	APawn* player;

	// Declare properties for different level classes using TSubclassOf
	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level1;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level2;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level3;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level4;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level5;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level6;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level7;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level8;

	UPROPERTY(EditAnyWhere)
	TSubclassOf<ABaselvl> level9;

	// Store the level classes in an array
	TArray<ABaselvl*> levelList;

public:

	// Declare an integer to store the randomly selected level
	int RandomLevel;

	// Declare vectors and parameters for level spawning
	FVector spawnLocation = FVector();
	FRotator SpawnRotation = FRotator();
	FActorSpawnParameters spawnInfo = FActorSpawnParameters();
};
