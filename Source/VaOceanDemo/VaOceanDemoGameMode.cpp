// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.

#include "VaOceanDemo.h"
#include "VaOceanDemoGameMode.h"
#include "VaOceanDemoPlayerController.h"

AVaOceanDemoGameMode::AVaOceanDemoGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = AVaOceanDemoPlayerController::StaticClass();
}


