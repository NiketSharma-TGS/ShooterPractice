// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ShooterPracticeGameMode.h"
#include "ShooterPracticeHUD.h"
#include "ShooterPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterPracticeGameMode::AShooterPracticeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooterPracticeHUD::StaticClass();
}
