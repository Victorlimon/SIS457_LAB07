// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArcanoidGameModeBase.h"
#include "Paddle.h"
#include "Brick.h"
#include "CreadorCapsulaPoder.h"
#include "CreadorCapsulaDanio.h"

AArcanoidGameModeBase::AArcanoidGameModeBase()
{

}

void AArcanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	

	//Crear la Fabrica de Capsulas
	ACreadorCapsula* CapsulaPoder = GetWorld()->SpawnActor<ACreadorCapsulaPoder>(ACreadorCapsulaPoder::StaticClass());

	ACreadorCapsula* CapsulaDanio = GetWorld()->SpawnActor<ACreadorCapsulaDanio>(ACreadorCapsulaDanio::StaticClass());


	//Crea una Capsula de poder y registra su nombre
	ACapsula* Capsula = CapsulaPoder->GetCapsula("Poder");

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("La Capsula es %s"),
			*Capsula->ObtenerNombreCapsula()));

	Capsula = CapsulaPoder->GetCapsula("Poder");
	Capsula = CapsulaPoder->GetCapsula("Poder");

	//Crea una Capsula de Danio y registra su nombre
	Capsula = CapsulaDanio->GetCapsula("Danio");
	
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("La Capsula es %s"),
			*Capsula->ObtenerNombreCapsula()));


	Capsula = CapsulaDanio->GetCapsula("Danio");
	Capsula = CapsulaDanio->GetCapsula("Danio");
}

void AArcanoidGameModeBase::Tick(float DeltaTime)
{

}
