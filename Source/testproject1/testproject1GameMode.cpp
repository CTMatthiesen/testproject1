// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "testproject1.h"
#include "testproject1GameMode.h"
#include "testproject1PlayerController.h"
#include "testproject1Character.h"

Atestproject1GameMode::Atestproject1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Atestproject1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}