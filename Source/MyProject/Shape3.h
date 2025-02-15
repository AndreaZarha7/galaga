// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shape3.generated.h"

UCLASS()
class MYPROJECT_API AShape3 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShape3();
	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:


	void AsignarMalla();
	void AsignarMaterial();
	static TArray<UStaticMesh*> MeshArray;
	static TArray<UMaterialInterface*> MaterialArray;

};