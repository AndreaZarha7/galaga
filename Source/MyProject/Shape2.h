// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shape2.generated.h"


UCLASS()
class MYPROJECT_API AShape2 : public AActor //NAVE_API 
{
	GENERATED_BODY()

public:
	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(EditAnyWhere)
	UStaticMeshComponent* malla;

	// Sets default values for this actor's properties
	AShape2();

protected:
	UPROPERTY(EditAnywhere, Category = "Nave Enemiga")
	float velocity;

	UPROPERTY(EditAnywhere, Category = "Nave Enemiga")
	float damageLevel;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void mover();
	void saltar();
	float impulso;

private:

	void AsignarMalla();
	static TArray<UStaticMesh*> MeshArray;
	//UStaticMeshComponente* Mesh;
};