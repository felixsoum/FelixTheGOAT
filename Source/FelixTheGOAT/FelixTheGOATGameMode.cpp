// Copyright Epic Games, Inc. All Rights Reserved.

#include "FelixTheGOATGameMode.h"
#include "FelixTheGOATPlayerController.h"
#include "FelixTheGOATCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFelixTheGOATGameMode::AFelixTheGOATGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFelixTheGOATPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}