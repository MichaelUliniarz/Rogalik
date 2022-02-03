// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RogPlayerController.h"

#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

ARogPlayerController::ARogPlayerController()
{
	bShowMouseCursor = true;
}

void ARogPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(bMoving)
	{
		SetNewDestination();
	}
}

void ARogPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ARogPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ARogPlayerController::OnSetDestinationReleased);
}

#pragma region Movement
void ARogPlayerController::SetNewDestination()
{
	FHitResult HitResult;
	GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
	if(HitResult.bBlockingHit)
	{
		MoveToLocation(HitResult.ImpactPoint);
	}
}

void ARogPlayerController::OnSetDestinationPressed()
{
	bMoving = true;
}

void ARogPlayerController::OnSetDestinationReleased()
{
	bMoving = false;
}

void ARogPlayerController::MoveToLocation(FVector Location)
{
	APawn* PlayerPawn = GetPawn();
	if(PlayerPawn)
	{		
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Location);
	}
}
#pragma endregion Movement