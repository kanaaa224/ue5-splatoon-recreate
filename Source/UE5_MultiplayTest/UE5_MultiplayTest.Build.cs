// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_MultiplayTest : ModuleRules
{
	public UE5_MultiplayTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
