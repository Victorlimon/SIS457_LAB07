// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreadorCapsula.h"
#include "CreadorCapsulaPoder.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACreadorCapsulaPoder : public ACreadorCapsula
{
	GENERATED_BODY()
	
public:
	//Fabricar la Capsula seleccionada
	virtual ACapsula* FabricarCapsula(FString CapsulaSKU) override;

};
