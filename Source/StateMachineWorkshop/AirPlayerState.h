// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseState.h"
#include "AirPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class STATEMACHINEWORKSHOP_API UAirPlayerState : public UPlayerBaseState
{
	GENERATED_BODY()

	protected:
	virtual void PressJump() override;
	virtual void TickState() override;
	
};
