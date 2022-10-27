// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Pila.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"


class UFloatingPawnMovement;
UCLASS()
class ARCONAID2_API APaddle : public APawn
{
	GENERATED_BODY()
protected:
	 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Paddle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;


public:
	// Sets default values for this pawn's properties
	APaddle();
	


	virtual void MoveHorizontal(float AxisValue);
	virtual void MoveVertical(float  AxisValue);

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};


