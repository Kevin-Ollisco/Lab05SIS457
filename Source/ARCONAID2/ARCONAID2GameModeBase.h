// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include"Brick.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ARCONAID2GameModeBase.generated.h"

/**
 * 
 */
class ABrick;
UCLASS()
class ARCONAID2_API AARCONAID2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		
public : 
	virtual void BeginPlay() override;
	ABrick* ladrillo01;

	
};
