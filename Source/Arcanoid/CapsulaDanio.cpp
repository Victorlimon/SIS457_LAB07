// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaDanio.h"

void ACapsulaDanio::BeginPlay()
{

	Super::BeginPlay();

	NombreCapsula = "Capsula Danio";
	TipoCapsula = "Capsula de Danio";
	TipoEfecto = "Aumenta el daño de la pelota";
	TipoDuracion = "5 segundos despues de adquirir la Capsula";
	TiempoDuracion = 5.0f;
}

void ACapsulaDanio::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Creando capsula de Danio"));
}
