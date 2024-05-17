// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MyProjectPawn.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "MyTriggerBox1.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyTriggerBox1 : public ATriggerBox
{
	GENERATED_BODY()

	
public:
	virtual void BeginPlay();
	UFUNCTION()
	void colisionar(class AActor* objetoA, class AActor* navechoque);

	UPROPERTY(EditAnywhere)
	
	AMyProjectPawn* nave;

	


};
