// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include"Brik.h"

// Sets default values
APaddle::APaddle(){
	 
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//creamos una malla  
	SM_Paddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Paddle"));
	RootComponent = SM_Paddle;
	// establesemos la gravedad 
	SM_Paddle->SetEnableGravity(false);
	// ponemos planos para que se meuva paddle
	SM_Paddle->SetConstraintMode(EDOFMode::XZPlane);
	// creamos colicion 
	SM_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Paddle->SetCollisionProfileName(TEXT("PhisicActor"));
	//creamos la funcion para mover 
	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));


	


}



// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void APaddle::MoveHorizontal(float AxisValue)
{

	AddMovementInput(FVector(AxisValue, 0.0f, 0.0), 1.0f, false);
}

void APaddle::MoveVertical(float AxisValue)
{

	AddMovementInput(FVector(0.0f, 0.0f, AxisValue),5.0f, false);
}

