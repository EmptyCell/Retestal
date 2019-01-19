// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RetestalGameMode.h"
#include "RetestalHUD.h"
#include "RetestalCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARetestalGameMode::ARetestalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARetestalHUD::StaticClass();
}
