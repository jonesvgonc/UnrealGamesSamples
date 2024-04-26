// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectTowerDefenseGameMode.h"
#include "ProjectTowerDefenseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectTowerDefenseGameMode::AProjectTowerDefenseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
