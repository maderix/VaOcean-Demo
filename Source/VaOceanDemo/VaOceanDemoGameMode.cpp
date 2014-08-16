

#include "VaOceanDemo.h"
#include "VaOceanDemoGameMode.h"
#include "VaOceanDemoPlayerController.h"

AVaOceanDemoGameMode::AVaOceanDemoGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = AVaOceanDemoPlayerController::StaticClass();
}


