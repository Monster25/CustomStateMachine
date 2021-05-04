// Fill out your copyright notice in the Description page of Project Settings.


#include "IdlePlayerState.h"

#include "GameFramework/CharacterMovementComponent.h"

void UIdlePlayerState::PressJump()
{
	PlayerRef->Jump();
}

void UIdlePlayerState::TickState()
{
	Super::TickState();
	if (!PlayerRef->GetCharacterMovement()->IsMovingOnGround())
	{
		PlayerRef->StateManager->SwitchStateByKey("Air");
	}
}
