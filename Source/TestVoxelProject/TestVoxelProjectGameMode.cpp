// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestVoxelProjectGameMode.h"
#include "TestVoxelProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestVoxelProjectGameMode::ATestVoxelProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
