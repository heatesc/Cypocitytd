// Fill out your copyright notice in the Description page of Project Settings.


#include "TestNPC.h"

// Sets default values
ATestNPC::ATestNPC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

