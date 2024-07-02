// Copyright Epic Games, Inc. All Rights Reserved.

#include "DinoGameMode.h"
#include "DinoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADinoGameMode::ADinoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
