// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CustomPlayerControllerInterface.h"
#include "StateBase.h"
#include "StateMachineWorkshopCharacter.h"

#include "PlayerBaseState.generated.h"

/**
 * 
 */
UCLASS()
class STATEMACHINEWORKSHOP_API UPlayerBaseState : public UStateBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintReadOnly)
	AStateMachineWorkshopCharacter* PlayerRef = nullptr;

	ICustomPlayerControllerInterface* PlayerController = nullptr;
	virtual void OnEnterState(AActor* OwnerRef) override;
	virtual void OnExitState() override;
	protected:
	virtual void PressJump();
};
