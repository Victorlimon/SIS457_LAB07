// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaPoder.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACapsulaPoder : public ACapsula
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//Generar la Capsula
	virtual void Generar() override;

};
