// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorCapsula.h"


// Sets default values
ACreadorCapsula::ACreadorCapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACreadorCapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreadorCapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACapsula* ACreadorCapsula::GetCapsula(FString Category)
{

	ACapsula* Capsula = FabricarCapsula(Category);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Fabricando capsulas %s"), *Capsula->ObtenerNombreCapsula()));
	
	Capsula->Generar();
	Capsula->Cargar();
	Capsula->Desplegar();
	Capsula->Destruir();

	return Capsula;
}
