// Fill out your copyright notice in the Description page of Project Settings.


#include "ZICZACe2.h"

// Sets default values
AZICZACe2::AZICZACe2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	///malla
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Controlador"));
	RootComponent = Root;
	malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mesh"));
	malla->AttachTo(Root);

	
	// Inicializa los puntos A, B, C y D
	A = FVector(0.f, 0.f, 0.f);
	B = FVector(100.f, 0.f, 0.f);
	C = FVector(100.f, 100.f, 0.f);
	D = FVector(0.f, 100.f, 0.f);
	E = FVector(0.f, 100.f, 0.f);
	// tiempo
	t = 1.0f;
	Length = 100.0f; // Puedes ajustar este valor a la longitud que sea necesaria 



}

// Called when the game starts or when spawned
void AZICZACe2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZICZACe2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Incrementa la variable de tiempo
	t += DeltaTime;
	// Lista de puntos para el movimiento en zigzag
	TArray<FVector> Points = { A, B, C, D, E , C , B };
	// Calcula el índice del punto inicial para la interpolación
	int32 Index = FMath::FloorToInt(t) % Points.Num();
	// Obtiene los dos puntos para la interpolación
	FVector StartPoint = Points[Index];
	FVector EndPoint = Points[(Index + 1) % Points.Num()];
	// Calcula la fracción del tiempo entre los dos puntos
	float Fraction = FMath::Frac(t);
	// Interpola entre los dos puntos
	FVector NewPosition = FMath::Lerp(StartPoint, EndPoint, (FMath::Sin(Fraction * PI * 2) + 1) / 2);
	// Mueve el objeto a la nueva posición
	//SetActorLocation(NewPosition);
	 // Calcula la dirección del movimiento
	FVector Direction = (EndPoint - StartPoint).GetSafeNormal();
	SetActorLocation(GetActorLocation() + Direction * Length * DeltaTime);


}

