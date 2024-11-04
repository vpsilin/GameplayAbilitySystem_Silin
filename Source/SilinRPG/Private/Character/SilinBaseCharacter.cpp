// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SilinBaseCharacter.h"

// Sets default values
ASilinBaseCharacter::ASilinBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASilinBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASilinBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASilinBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

