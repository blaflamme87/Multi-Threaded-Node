// Copyright Epic Games, Inc. All Rights Reserved.

#include "AsyncMultiThreadGameMode.h"
#include "AsyncMultiThreadCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAsyncMultiThreadGameMode::AAsyncMultiThreadGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
