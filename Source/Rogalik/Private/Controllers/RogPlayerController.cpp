// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RogPlayerController.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

void ARogPlayerController::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	RightVector = PlayerCharacter->GetActorRightVector();
	ForwardVector = PlayerCharacter->GetActorForwardVector();
}

void ARogPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ARogPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ARogPlayerController::MoveRight);
}

void ARogPlayerController::MoveForward(float Value)
{
	PlayerCharacter->AddMovementInput(ForwardVector, Value);
}

void ARogPlayerController::MoveRight(float Value)
{
	PlayerCharacter->AddMovementInput(RightVector, Value);
}