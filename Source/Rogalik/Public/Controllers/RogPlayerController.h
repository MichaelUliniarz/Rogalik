// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RogPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ROGALIK_API ARogPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY()
	ACharacter* PlayerCharacter;

	FVector RightVector;
	FVector ForwardVector;
};
	

