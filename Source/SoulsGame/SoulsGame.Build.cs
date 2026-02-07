// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SoulsGame : ModuleRules
{
	public SoulsGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {"GameplayAbilities", "GameplayTasks", "GameplayTags"});

		PublicIncludePaths.AddRange(new string[] {
			"SoulsGame",
			"SoulsGame/Variant_Platforming",
			"SoulsGame/Variant_Platforming/Animation",
			"SoulsGame/Variant_Combat",
			"SoulsGame/Variant_Combat/AI",
			"SoulsGame/Variant_Combat/Animation",
			"SoulsGame/Variant_Combat/Gameplay",
			"SoulsGame/Variant_Combat/Interfaces",
			"SoulsGame/Variant_Combat/UI",
			"SoulsGame/Variant_SideScrolling",
			"SoulsGame/Variant_SideScrolling/AI",
			"SoulsGame/Variant_SideScrolling/Gameplay",
			"SoulsGame/Variant_SideScrolling/Interfaces",
			"SoulsGame/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
