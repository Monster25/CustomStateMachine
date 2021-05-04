// Copyright Epic Games, Inc. All Rights Reserved.

#include "StateMachineWorkshopGameMode.h"
#include "StateMachineWorkshopCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStateMachineWorkshopGameMode::AStateMachineWorkshopGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
