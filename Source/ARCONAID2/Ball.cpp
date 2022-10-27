// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"

#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"



// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// creamos lla malla de ball
	SM_Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	RootComponent = SM_Ball;
	// Activamos la  colicion 
	SM_Ball->SetSimulatePhysics(true);
	// desactivamos la gravedad
	SM_Ball->SetEnableGravity(false);
	// planos 
	SM_Ball->SetConstraintMode(EDOFMode::XZPlane);
	//le damos nombre ala colicion 
	SM_Ball->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Ball->SetCollisionProfileName(TEXT("PhysicsActor"));
	// creamos moviminetos 
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement "));

	ProjectileMovement->bShouldBounce = true;
	ProjectileMovement->Bounciness = 1.1f;
	ProjectileMovement->Friction = 0.0f;
	ProjectileMovement->Velocity.X = 10.0f;


}

void ABall::Launch()
{
	// le damos damos la obcion lamzar 
	if (!BallLaunched) {
		SM_Ball->AddImpulse(FVector(140.0f, 0.0f, 130.0f), FName(), true);
		BallLaunched = true;
	}
}

void ABall::lanzaIs()
{
	if (!BallLaunched) {
		SM_Ball->AddImpulse(FVector(-140.0f, 0.0f, 130.0f), FName(), true);
		BallLaunched = true;
	}
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UStaticMeshComponent* ABall::GetBall()
{
	//nos retornara el ball
	return SM_Ball;
}

