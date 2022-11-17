// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaPoder.h"

void ACapsulaPoder::BeginPlay()
{

	Super::BeginPlay();

	NombreCapsula = "Capsula Poder ";
	TipoCapsula = "Capsula de Poder";
	TipoEfecto = "Aumentar la velocidad del Paddle y aumento de velocidad de rebote";
	TipoDuracion = "8 segundos despues de adquirir la Capsula";
	TiempoDuracion = 8.0f;
}

void ACapsulaPoder::Generar()
{
	//Registrar el tipo de Capsula
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Creando capsula de Poder"));
}
