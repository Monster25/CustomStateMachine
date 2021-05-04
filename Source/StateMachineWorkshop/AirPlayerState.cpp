// Fill out your copyright notice in the Description page of Project Settings.


#include "AirPlayerState.h"

#include "GameFramework/CharacterMovementComponent.h"

void UAirPlayerState::PressJump()
{
	GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Purple, "I am in the air!");
}

void UAirPlayerState::TickState()
{
	Super::TickState();
	if (PlayerRef->GetCharacterMovement()->IsMovingOnGround())
	{
		PlayerRef->StateManager->SwitchStateByKey("Idle");
	}
}


