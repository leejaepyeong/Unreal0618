// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal0707GameMode.h"
#include "Unreal0707Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal0707GameMode::AUnreal0707GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
