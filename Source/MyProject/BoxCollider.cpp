// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxCollider.h"
#include "Shape2.h"

void ABoxCollider::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("comienza el objeto")); //esto se muestra en la pantalla de unreal 

	OnActorBeginOverlap.AddDynamic(this, &ABoxCollider::colisionar);
}

void ABoxCollider::colisionar(AActor* objectoA, AActor* objetoB)
{
    if (!objectoA || !objetoB) {
        UE_LOG(LogTemp, Warning, TEXT("Uno de los objetos es nulo."));
        return;
    }

    //1 mueestra los nombres de los nombres de los objetos que colisionaron
    FString mensaje = FString::Printf(TEXT("Objeto A primero en colisionar: %s, Objeto B segundo en colisionar: %s"), *objectoA->GetName(), *objetoB->GetName());
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, mensaje);

    //2 crear shapes en una posicion proxima a este objeto
    FVector posicion = objectoA->GetActorLocation() + FVector(100.0f, 0.0f, 0.0f); // Cambia esto a la posición deseada
    FRotator direccion = objectoA->GetActorRotation(); // Cambia esto a la dirección deseada

    UWorld* World = GetWorld();

	FVector PosicionNueva = GetActorLocation() + FVector(100.0f, 0.0f, 0.0f); // Ejemplo de posición nueva
	FRotator Rotacion = FRotator::ZeroRotator; // Rotación por defecto
	FActorSpawnParameters SpawnParams;
	AShape2* NuevoShapeActor = GetWorld()->SpawnActor<AShape2>(PosicionNueva, Rotacion, SpawnParams);
     //(naveAEjemploNavesPawn)nave) 
    if (NuevoShapeActor)
    {
        //NuevoShapeActor->mover();
        NuevoShapeActor->saltar();
    }


}

	