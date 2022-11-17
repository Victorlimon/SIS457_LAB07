// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreadorCapsula.h"
#include "CreadorCapsulaDanio.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACreadorCapsulaDanio : public ACreadorCapsula
{
	GENERATED_BODY()
private:
	float PosX;
	float PosY;
	float PosZ;
public:

	ACreadorCapsulaDanio();

	//Fabricar la Capsula seleccionada
	virtual ACapsula* FabricarCapsula(FString CapsulaSKU) override;

};
