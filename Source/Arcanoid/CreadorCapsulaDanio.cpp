// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorCapsulaDanio.h"
#include "CapsulaDanio.h"

ACreadorCapsulaDanio::ACreadorCapsulaDanio()
{
	PosX = 80.0f;
	PosY = 0.0f;
	PosZ = 200.0f;
}

ACapsula* ACreadorCapsulaDanio::FabricarCapsula(FString CapsulaSKU)
{

	FVector SpawnD(PosX, PosY, PosZ);
	FVector Restador(0.0f, 0.0f, 25.0f);

	FRotator Rotacion(30.0f, 35.0f, 40.0f);

	if (CapsulaSKU.Equals("Danio")) {
		return GetWorld()->SpawnActor<ACapsulaDanio>(ACapsulaDanio::StaticClass(), SpawnD, Rotacion);
		SpawnD = SpawnD - Restador;
	}
	return nullptr;
}
