// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Ball.h"
//#include "Containers/UnrealString.h"


// Sets default values
APlayer_Ball::APlayer_Ball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>("Trigger Capsule");

	RootComponent = Mesh;
	TriggerCapsule->SetupAttachment(RootComponent);
	
	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &APlayer_Ball::OnOverlapBegin);

}

// Called when the game starts or when spawned
void APlayer_Ball::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Ball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayer_Ball::OnOverlapBegin(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult & SweepResult)
{
	
	//Score += 1; APlayer_Ball::ScoreTest(Score);
	if (Cast<ACoinTest2>(OtherActor) != nullptr)
	{
		
		
		//String ScoretoText = Score1 + "n";
		Score1 += 1;
		//FString Text = Score1+"";
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::Printf(TEXT("Score: %i"), Score1));
		//GEngine->AddOnScreenDebugMessage()
		if(Score1 ==7)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::Printf(TEXT("You Won")));

		OtherActor -> Destroy();
		///this->CallFunction(Score,nullptr,APlayer_Ball::ScoreTest(Score));
	}
}



