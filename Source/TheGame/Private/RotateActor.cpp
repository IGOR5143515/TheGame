// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ARotateActor::ARotateActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
}

// Called when the game starts or when spawned
void ARotateActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator RotationDelta(0.0f, DeltaTime * 120.0f, 0.0f); // 30 градусов в секунду

	// ƒобавл€ем локальное вращение
	Mesh->AddLocalRotation(RotationDelta);


}

