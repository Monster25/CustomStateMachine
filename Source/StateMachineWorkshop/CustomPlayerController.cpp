// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerController.h"

void ACustomPlayerController::PressJump()
{
	if (JumpDelegate.IsBound())
	{
		JumpDelegate.Broadcast();
	}
}

void ACustomPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	/*Bind Actions*/
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACustomPlayerController::PressJump);
}

FJumpSignature* ACustomPlayerController::GetJumpDelegate()
{
	return &JumpDelegate;
}
