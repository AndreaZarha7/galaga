// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZICZACe2.generated.h"

UCLASS()
class MYPROJECT_API AZICZACe2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//crear malla////////
	UPROPERTY()//añadido definicion de objetos -----------
		USceneComponent* Root;
	UPROPERTY(EditAnyWhere)//donde sea conveniente
		UStaticMeshComponent* malla; //ya esta la malla creada
	
	// Sets default values for this actor's properties


	AZICZACe2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Puntos para el movimiento en ziczac
	UPROPERTY(EditAnywhere, Category = "moviento ziczac")
	FVector A;
	UPROPERTY(EditAnywhere, Category = "moviento ziczac")
	FVector B;
	UPROPERTY(EditAnywhere, Category = "moviento ziczac")
	FVector C;
	UPROPERTY(EditAnywhere, Category = "moviento ziczac")
	FVector D;
	UPROPERTY(EditAnywhere, Category = "moviento ziczac")
	FVector E;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	float t;//tiempo
	UPROPERTY(EditAnywhere, Category = "moviento ziczac")
	float Length;



};
