// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shape.generated.h"

UCLASS()
class MYPROJECT_API AShape : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	UPROPERTY()//añadido definicion a los objetos 
		USceneComponent* Root;
	UPROPERTY(EditAnyWhere)//donde sea conveniente pero mayormente ahi
		UStaticMeshComponent* malla; //ya esta la malla creada

	// Sets default values for this actor's properties


	AShape();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//hasta aqui se va a cpp ya para poner lo de la malla 

	UPROPERTY(EditAnywhere, Category = "nave enemiga")//
		float velocity; //definicon ***

	UPROPERTY(EditAnywhere, Category = "nave enemiga")//
		float damageLevel; //definicon ***





public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void mover(float deltaTime);

	void mover(float deltaTime);//
	UPROPERTY(EditAnywhere, Category = "nave enemiga")//=======pantalla
		int32 direccion;

	///////////////////////////////////////////////////

	// Propiedades para el movimiento sinusoidal
	UPROPERTY(EditAnywhere, Category = "Movimiento Sinusoidal")
	float Amplitude;//amplitud 
	UPROPERTY(EditAnywhere, Category = "Movimiento Sinusoidal")
	float Frecuencia;// frecuencia 
	UPROPERTY(EditAnywhere, Category = "Movimiento Sinusoidal")
	float desfase; // Propiedad para el desfase
	float InitialY; // Posición inicial en el eje Y
	float RunningTime;


};
