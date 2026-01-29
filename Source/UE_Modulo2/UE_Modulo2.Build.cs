// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Modulo2 : ModuleRules
{
	public UE_Modulo2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE_Modulo2",
			"UE_Modulo2/Variant_Strategy",
			"UE_Modulo2/Variant_Strategy/UI",
			"UE_Modulo2/Variant_TwinStick",
			"UE_Modulo2/Variant_TwinStick/AI",
			"UE_Modulo2/Variant_TwinStick/Gameplay",
			"UE_Modulo2/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
