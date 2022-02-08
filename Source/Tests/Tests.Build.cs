// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tests : ModuleRules
{
	public Tests(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] {"Rogalik", "Core", "CoreUObject", "Engine", "InputCore" });
		
		PrivateDependencyModuleNames.AddRange(new string[] {"UnrealEd"});
	}
}
