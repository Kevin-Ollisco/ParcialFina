// Fill out your copyright notice in the Description page of Project Settings.


#include "Brik.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

// Sets default values
ABrik::ABrik()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = SM_Brick;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetBoxExtent(FVector(25.0f, 10.0f, 10.0f));

	RootComponent = BoxCollision;


}

// Called when the game starts or when spawned
void ABrik::BeginPlay()
{
	
	Super::BeginPlay();

	
}





void ABrik::DestroyBrick()
{
	this->Destroy();
}

// Called every frame
void ABrik::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABrik::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) {
		ABall* MyBall = Cast<ABall>(OtherActor);

		FVector BallVelocity = MyBall->GetVelocity();
		BallVelocity *= (SpeedModifierOnBounce - 1.0f);

		MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);

	}
	FTimerHandle UnusedHandle;
}



