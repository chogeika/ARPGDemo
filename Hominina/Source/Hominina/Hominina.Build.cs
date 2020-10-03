// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Hominina : ModuleRules
{
	public Hominina(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

		        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Json",
            "JsonUtilities",
            "GameplayTags",
            "AbilityFramework",
            "AssetRegistry",
            "ActorSequence",
            "JsonUObject",
            "InventoryFramework",
        });

        if (Target.Type == TargetRules.TargetType.Editor)
        {
           // PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd", "SourceControl", "Matinee", "PropertyEditor", "ShaderCore", "AbilityFrameworkEditor" });
            PrivateDependencyModuleNames.AddRange(new string[] { "AbilityFrameworkEditor" });
        }
       // PublicDependencyModuleNames.AddRange(new string[] { "GRPC" });
        PublicDefinitions.Add("GPR_GCOV=1"); //hax
       if (Target.Type == TargetRules.TargetType.Server)
       {
           if (Target.Platform == UnrealTargetPlatform.Linux)
           {
               PublicDefinitions.Add("WITH_AGONES=1");
               PublicDefinitions.Add("ENABLE_GRPC=1"); //hack
               PublicDependencyModuleNames.AddRange(new string[] { "Agones" });

           }
           else
           {
               PublicDefinitions.Add("WITH_AGONES=0");
               PublicDefinitions.Add("ENABLE_GRPC=0"); //hack
           }
       }
		else
       {
           PublicDefinitions.Add("WITH_AGONES=0");
           PublicDefinitions.Add("ENABLE_GRPC=0"); //hack
       }

        if ( (Target.Type == TargetRules.TargetType.Client) || (Target.Type == TargetRules.TargetType.Editor))
        {
            PublicDependencyModuleNames.AddRange(new string[] {
                "Slate",
				"SlateCore",
				"UMG",
                "InventoryFrameworkUI",
                "DraggableWindow"
            });

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                if (Target.Type == TargetRules.TargetType.Client)
                {
                    bEnableExceptions = true;
                }
            }
        }
	}
}
