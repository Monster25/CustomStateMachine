// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StateMachineWorkshop : ModuleRules
{
	public StateMachineWorkshop(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "CustomStateMachine" });
	}
}
