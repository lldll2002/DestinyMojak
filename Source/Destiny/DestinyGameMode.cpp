// Copyright Epic Games, Inc. All Rights Reserved.

#include "DestinyGameMode.h"
#include "DestinyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADestinyGameMode::ADestinyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
