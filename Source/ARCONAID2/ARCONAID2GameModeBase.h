// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include"Pila.h"
#include "Brik.h" 
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ARCONAID2GameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class ARCONAID2_API AARCONAID2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AARCONAID2GameModeBase();
private:
	virtual void BeginPlay() override;


};
