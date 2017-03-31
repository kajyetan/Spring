// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Spring.h"
#include "SpringGameMode.h"
#include "SpringPawn.h"
#include "SpringHud.h"

ASpringGameMode::ASpringGameMode()
{
	DefaultPawnClass = ASpringPawn::StaticClass();
	HUDClass = ASpringHud::StaticClass();
}
