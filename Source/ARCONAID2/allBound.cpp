// Fill out your copyright notice in the Description page of Project Settings.


#include "allBound.h"

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaddlePlayerController.h"



// Sets default values
AallBound::AallBound()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box collision"));


}

// Called when the game starts or when spawned
void AallBound::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AallBound::OnOverlapBegin);

	PlayerControllerREF = Cast<APaddlePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	
}


void AallBound::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) {
		OtherActor->Destroy();

		PlayerControllerREF->SpawnNewBall();
	}

}

// Called every frame
void AallBound::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

