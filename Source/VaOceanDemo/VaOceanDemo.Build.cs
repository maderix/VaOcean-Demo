// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.

using UnrealBuildTool;

public class VaOceanDemo : ModuleRules
{
	public VaOceanDemo(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        // Custom plugins
        PublicDependencyModuleNames.AddRange(
            new string[] {
                "VaOceanPlugin"
            });
	}
}
