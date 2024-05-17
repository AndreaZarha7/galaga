// Fill out your copyright notice in the Description page of Project Settings.


#include "Shape.h"

// Sets default values
AShape::AShape()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Controlador"));
	RootComponent = Root;

	malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mesh"));
	malla->AttachTo(Root);

	//==========================================================
	velocity = 100; // declarada
	//==========================================================
	//norte = 1 , sur = 2 , este = 3 , oeste = 4
	direccion = 4;//si cambias la dirrecion se nueve a otro lado
	//=========================================================

   //inicializacion de los componentes del movimiento senosoidal  
	Amplitude = 20.0f; //inicializacion de la amplitud 
	Frecuencia = 1.0f; // Valor  inical de la frecuencia
	desfase = 1.0f; // Valor predeterminado del desfase (en radianes)
	InitialY = 0.0f; // Valor inicial para la posición en el eje Y
	RunningTime = 1.0f;


}

// Called when the game starts or when spawned
void AShape::BeginPlay()
{
	Super::BeginPlay();

	// Guardar la posición inicial en Y
	InitialY = GetActorLocation().Y;
	RunningTime = GetActorLocation().X;

	//////////DEL NUEVO COIDO Q DIJO EK INGE 
	//InitialLocation = GetActorLocatin();
	//10/04/2024
	UStaticMesh* meshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Shapes/Shape_Cube")));
	if (meshToUse)
	{
		UE_LOG(LogActor, Warning, TEXT("Malla asignada"));
	malla->SetStaticMesh(meshToUse);
}

	else
	{
		UE_LOG(LogActor, Warning, TEXT("No se encontro la malla"));
	}


}

// Called every frame
void AShape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Calcular la nueva posición de Y usando un movimiento sinusoidal

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin((RunningTime + DeltaTime) * Frecuencia + desfase) - FMath::Sin(RunningTime * Frecuencia + desfase)) * Amplitude; // Calcula el cambio en la altura
	NewLocation.X += DeltaHeight; // Añade el cambio a la posición actual
	NewLocation.Y += 1;//anadido por el ing 
	RunningTime += DeltaTime;// Actualiza el tiempo de ejecución
	SetActorLocation(NewLocation);
	//return NewLocation;


}

void AShape::mover(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation;

	if (direccion == 1) // Norte
	{
		NewLocation = CurrentLocation + FVector(0.0f, velocity * DeltaTime, 0.0f);
	}
	else if (direccion == 2) // Sur
	{
		NewLocation = CurrentLocation + FVector(0.0f, (-1) * velocity * DeltaTime, 0.0f);
	}
	else if (direccion == 3) // Este
	{
		NewLocation = CurrentLocation + FVector(velocity * DeltaTime, 0.0f, 0.0f);
	}
	else if (direccion == 4) // Oeste
	{
		NewLocation = CurrentLocation + FVector((-1) * velocity * DeltaTime, 0.0f, 0.0f);
	}

	SetActorLocation(NewLocation);
}

//FVector CurrentLocation = GetActorLocation();
//FVector NewLocation = CurrentLocation + FVector(velocity * DeltaTime, 0.0f, 0.0f);
//SetActorLocation(NewLocation);