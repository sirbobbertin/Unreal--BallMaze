// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn_Enviroment.h"

// Sets default values
APawn_Enviroment::APawn_Enviroment()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);
	

}

// Called when the game starts or when spawned
void APawn_Enviroment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawn_Enviroment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawn_Enviroment::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("RotRightLeft", this, &APawn_Enviroment::RotRightLeft);

}

void APawn_Enviroment::RotRightLeft(float value)
{
	//FVector forceToAdd = FVector(0, 1, 0)*moveSpeed*value;
	FRotator forceToAdd = FRotator(1.0f, 0.0f, 0.0f) * moveSpeed * value;
	
	Mesh->AddLocalRotation(forceToAdd);
	
	//Cast<ACoinTest2>(Mesh)->AddLocalRotation(forceToAdd);
	//Mesh->AddLocalRotation
}

