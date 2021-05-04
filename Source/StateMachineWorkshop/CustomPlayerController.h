// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CustomPlayerControllerInterface.h"
#include "GameFramework/PlayerController.h"
#include "CustomPlayerController.generated.h"

/**
 * 
 */


UCLASS()
class STATEMACHINEWORKSHOP_API ACustomPlayerController : public APlayerController, public ICustomPlayerControllerInterface
{
	GENERATED_BODY()

	public:
	void PressJump();

	protected:
	virtual void SetupInputComponent() override;
	virtual FJumpSignature* GetJumpDelegate() override;

	private:
	FJumpSignature JumpDelegate;
	
};
