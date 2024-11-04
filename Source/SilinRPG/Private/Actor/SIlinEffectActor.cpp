// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/SIlinEffectActor.h"

// Sets default values
ASIlinEffectActor::ASIlinEffectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASIlinEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASIlinEffectActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

