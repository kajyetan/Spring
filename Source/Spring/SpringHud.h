// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "SpringHud.generated.h"


UCLASS(config = Game)
class ASpringHud : public AHUD
{
	GENERATED_BODY()

public:
	ASpringHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
