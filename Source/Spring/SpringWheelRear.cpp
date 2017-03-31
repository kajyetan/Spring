// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Spring.h"
#include "SpringWheelRear.h"

USpringWheelRear::USpringWheelRear()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
}
