// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"


// Sets default values for this component's properties
UCoin::UCoin()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	

	// ...
}


// Called when the game starts
void UCoin::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCoin::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UCoin::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("AAAAAAAAAAAAaa"));
	//if (Cast<APawn_Enviroment>(OtherActor) != nullptr)
	//{
		//Destroy();
	//}
}
