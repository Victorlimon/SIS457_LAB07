// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"
UCLASS()

class ARCANOID_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

protected:

	FString NombreCapsula;
	FString TipoCapsula;
	FString TipoEfecto;
	FString TipoDuracion;
	float TiempoDuracion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Capsula;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void Generar();
	void Cargar();
	void Desplegar();
	void Destruir();
	FString ObtenerNombreCapsula();

};
