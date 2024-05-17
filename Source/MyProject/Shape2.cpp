// Fill out your copyright notice in the Description page of Project Settings.


#include "Shape2.h"

TArray<UStaticMesh*>AShape2::MeshArray;
// Sets default values
AShape2::AShape2()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//malla de shape2
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Controlador"));
	RootComponent = Root;

	malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mesh"));
	malla->AttachTo(Root);
	//////
	velocity = 0;
	AsignarMalla();

	//UStaticMesh disfraz3D = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
	//	NULL, TEXT("/Game/StarterContent/Shapes/Shape2_Cylinder.Shape2_Cylinder")));
	//if (disfraz3D)
	//{
	//	UE_LOG(LogActor, Warning, TEXT("Malla Asignada"));
	//	malla->SetStaticMesh(disfraz3D);
//	}
	//else
//	{
		//UE_LOG(LogActor, Warning, TEXT("No se encontro la malla"));
	//}
}

void AShape2::AsignarMalla() {
	UStaticMesh* Disfraz1, * Disfraz2, * Disfraz3, * Disfraz4, * Disfraz5 , * Disfraz6;

	Disfraz1 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_Couch.SM_Couch")));

	Disfraz2 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_Chair.SM_Chair")));

	Disfraz3 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_TableRound.SM_TableRound")));

	Disfraz4 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_Rock")));

	Disfraz5 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Shapes/Shape_Cube")));

	Disfraz6 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContentShapes/Shape_Cylinder")));


	MeshArray.Add(Disfraz1);
	MeshArray.Add(Disfraz2);
	MeshArray.Add(Disfraz3);
	MeshArray.Add(Disfraz4);
	MeshArray.Add(Disfraz5);
	MeshArray.Add(Disfraz6);

	int Random = FMath::RandRange(0, 5);
	malla->SetStaticMesh(MeshArray[Random]);
}



// Called when the game starts or when spawned
void AShape2::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AShape2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AShape2::mover();


}
void AShape2::mover()
{
	//GEngine->AddOnScreenDebugMessage(-1.15.0f, FColor::Yellow, TEXT("comienza el movimiento"));
	SetActorLocation(GetActorLocation() + FVector(10.0f, 0.0f,  0.0f));

}

void AShape2::saltar()
{
	malla->SetSimulatePhysics(true);

	FVector Impulse = FVector(0.0f, 0.0f, 500.0f);
	malla->AddImpulse(Impulse);
}

