// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Set the capsule component's size with a specific radius and height.
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	// Set the collision response for the capsule component to EngineTraceChannel1 to overlap with that channel.
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_EngineTraceChannel1, ECR_Overlap);

	// Disable the controller's ability to affect pitch rotation.
	bUseControllerRotationPitch = false;

	// Disable the controller's ability to affect roll rotation.
	bUseControllerRotationRoll = false;

	// Disable the controller's ability to affect yaw rotation.
	bUseControllerRotationYaw = false;

	// this don't allowed Camera to rotate
	SideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Side View Camera"));
	SideViewCamera->bUsePawnControlRotation = false;

	// this allowed the rotate the diration where the Character rotate 
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// Set the Rotation rate
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.f, 0.0f);

	// Set the grivity Scale
	GetCharacterMovement()->GravityScale = 2.f;

	//Set Air Control 
	GetCharacterMovement()->AirControl = 0.8f;

	//set the Velocity for Jumping
	GetCharacterMovement()->JumpZVelocity = 1000.f;

	//set momentom of the Character (if the Character is walking)
	GetCharacterMovement()->GroundFriction = 3.f;

	//set walking speed 
	GetCharacterMovement()->MaxWalkSpeed = 600.f;

	//set Jump momentom 
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	//set the location of the Character
	TempPos = GetActorLocation();
	Zpos = TempPos.Z + 300.f;
}

// Called when the game starts or when spawned
void ARunnerCharacter::BeginPlay()
{
	Super::BeginPlay();
	CanMove = true;
}

// Called every frame
void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TempPos = GetActorLocation();
	TempPos.X -= 850.0f;
	TempPos.Z = Zpos;
	SideViewCamera->SetWorldLocation(TempPos);
}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Bind the "Jump" action to the character's Jump function when the key is pressed (IE_Pressed).
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	// Bind the "Jump" action to the character's StopJumping function when the key is released (IE_Released).
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind the "MoveRight" axis to the character's MoveRight function to control horizontal movement.
	PlayerInputComponent->BindAxis("MoveRight", this, &ARunnerCharacter::MoveRight);
}
void ARunnerCharacter::RestartLevel()
{

}

void ARunnerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& sweepResult)
{

}

void ARunnerCharacter::MoveRight(float value)
{
	if (CanMove)
	{
		//add the movement
		AddMovementInput(FVector(0.f, 1.f, 0.f), value);
	}
}


