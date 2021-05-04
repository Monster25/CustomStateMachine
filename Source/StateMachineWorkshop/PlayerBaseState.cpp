// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBaseState.h"
#include "CustomPlayerControllerInterface.h"
#include "Kismet/GameplayStatics.h"

void UPlayerBaseState::OnEnterState(AActor* OwnerRef)
{
	Super::OnEnterState(OwnerRef);

	//Save player ref for later
	if (!PlayerRef)
	{
		PlayerRef = Cast<AStateMachineWorkshopCharacter>(OwnerRef);
	}

	/*Save the play er controller*/
	if (!PlayerController)
	{
	PlayerController =	Cast<ICustomPlayerControllerInterface>(UGameplayStatics::GetPlayerController(this, 0));
	}
	/*Bind Jump Delegate*/

	if (PlayerController)
	{
		PlayerController->GetJumpDelegate()->AddUObject(this, &UPlayerBaseState::PressJump);
	}
}

void UPlayerBaseState::OnExitState()
{
	Super::OnExitState();
	/*Remove JUmp delegate*/
	PlayerController->GetJumpDelegate()->RemoveAll(this);	
}

void UPlayerBaseState::PressJump()
{
	
}
