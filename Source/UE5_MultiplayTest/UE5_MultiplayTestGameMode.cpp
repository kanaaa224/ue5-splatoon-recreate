// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_MultiplayTestGameMode.h"
#include "UE5_MultiplayTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_MultiplayTestGameMode::AUE5_MultiplayTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
