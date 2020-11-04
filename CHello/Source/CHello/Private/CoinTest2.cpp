// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinTest2.h"

// Sets default values
ACoinTest2::ACoinTest2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	TriggerSphere = CreateDefaultSubobject<USphereComponent>("Trigger Sphere");
	RootComponent = Mesh;
	Mesh->SetSimulatePhysics(true);
	TriggerSphere->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ACoinTest2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoinTest2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ACoinTest2::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
//{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("AAAAAAAAAAAAaa"));
	//if (Cast<APawn_Enviroment>(OtherComp) != nullptr)
	///{
	//	Destroy();
	//}
//}
