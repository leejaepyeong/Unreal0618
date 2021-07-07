// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unreal0707 : ModuleRules
{
	public Unreal0707(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
