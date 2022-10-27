// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include"Pila.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brik.generated.h"

class UBoxComponent;


UCLASS()
class ARCONAID2_API ABrik : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ABrik();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Brick;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* BoxCollision;
	float SpeedModifierOnBounce = 1.01f;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);

	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void DestroyBrick();

};
