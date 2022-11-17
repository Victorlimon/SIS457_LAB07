// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcanoidGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AArcanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AArcanoidGameModeBase();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
