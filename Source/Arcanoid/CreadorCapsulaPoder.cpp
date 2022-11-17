// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorCapsulaPoder.h"
#include "CapsulaPoder.h"
#include "CapsulaDanio.h"

ACapsula* ACreadorCapsulaPoder::FabricarCapsula(FString CapsulaSKU)
{

	FVector SpawnP(-80.0f, 0.0f, 200.0f);
	FVector Restador(0.0f, 0.0f, 25.0f);

	FRotator Rotacion(30.0f, 35.0f, 40.0f);


	if (CapsulaSKU.Equals("Poder"))
	{
		return GetWorld()->SpawnActor <ACapsulaPoder>(ACapsulaPoder::StaticClass(), SpawnP, Rotacion);
		SpawnP = SpawnP - Restador;
	}


	return nullptr;

}
