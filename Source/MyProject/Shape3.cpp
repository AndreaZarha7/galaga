// Fill out your copyright notice in the Description page of Project Settings.


#include "Shape3.h"
#include "UObject/ConstructorHelpers.h"//propias de unreal
#include "Materials/MaterialInterface.h"


TArray<UStaticMesh*> AShape3::MeshArray;
TArray<UMaterialInterface*> AShape3::MaterialArray;

// Sets default values
AShape3::AShape3()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(Root);

    AsignarMalla();

    AsignarMaterial();


}

// Called when the game starts or when spawned
void AShape3::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AShape3::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AShape3::AsignarMalla()
{
    if (MeshArray.Num() == 0)
    {
        //UStaticMesh* Disfraz1, * Disfraz2, * Disfraz3, * Disfraz4, * Disfraz5 *  Disfraz6;
        UStaticMesh* Disfraz1 = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_Lamp_Wall.SM_Lamp_Wall"));
        UStaticMesh* Disfraz2 = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_Chair.SM_Chair"));
        UStaticMesh* Disfraz3 = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_TableRound.SM_TableRound"));
        UStaticMesh* Disfraz4 = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_Materials/M_Rock.M_Rock"));
        UStaticMesh* Disfraz5 = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_Couch.SM_Couch"));
        UStaticMesh* Disfraz6 = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_Materials/M_Cylinder"));
        //UStaticMesh* Disfraz6 = LoadObject<UStaticMesh>(nullptr, TEXT(""));
        MeshArray.Add(Disfraz1);
        MeshArray.Add(Disfraz2);
        MeshArray.Add(Disfraz3);
        MeshArray.Add(Disfraz4);
        MeshArray.Add(Disfraz5);
        MeshArray.Add(Disfraz6);
    }

    //-1 para evitar el crasheo en unreal 

    int32 RandomIndex = FMath::RandRange(0, MeshArray.Num() - 1);
    UStaticMesh* SelectedMesh = MeshArray[RandomIndex];

    if (SelectedMesh)
    {
        MeshComponent->SetStaticMesh(SelectedMesh);
    }
}

void AShape3::AsignarMaterial()
{
    if (MaterialArray.Num() == 0)
    {

        UMaterialInterface* Material1 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/StarterContent/Props/SM_Lamp_Wall.SM_Lamp_Wall"));
        UMaterialInterface* Material2 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/StarterContent/Props/SM_Chair.SM_Chair"));
        UMaterialInterface* Material3 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/StarterContent/Props/SM_TableRound.SM_TableRound"));
        UMaterialInterface* Material4 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/StarterContent/Props/Materials/M_Rock.M_Rock"));
        UMaterialInterface* Material5 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/StarterContent/Props/SM_Couch.SM_Couch"));
        UMaterialInterface* Material6 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/StarterContent/Props/Materials/M_Cylinder.M_Cylinder"));
        MaterialArray.Add(Material1);
        MaterialArray.Add(Material2);
        MaterialArray.Add(Material3);
        MaterialArray.Add(Material4);
        MaterialArray.Add(Material5);
        MaterialArray.Add(Material6);
        // UMaterialInterface* Material6 = LoadObject<UMaterialInterface>(nullptr, TEXT(""));

    }

    int32 RandomIndex = FMath::RandRange(0, MaterialArray.Num() - 1);
    UMaterialInterface* SelectedMaterial = MaterialArray[RandomIndex];

    if (SelectedMaterial)
    {
        MeshComponent->SetMaterial(0, SelectedMaterial);
    }
}