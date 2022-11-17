// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.h"
#include "CreadorCapsula.generated.h"
UCLASS()
class ARCANOID_API ACreadorCapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreadorCapsula();

	//Crear Capsula y devolverla. Es puramente virtual, por lo que no necesita una implementación en esta clase
	virtual ACapsula* FabricarCapsula(FString CapsulaSKU) PURE_VIRTUAL(ACreadorCapsula::FabricarCapsula, return nullptr;);

	//Ordena, elabora y devuelve una Capsula de una categoría específica
	ACapsula* GetCapsula(FString CapsulaSKU);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
