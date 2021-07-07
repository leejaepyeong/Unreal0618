// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Unreal0707.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL0707_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AABGameMode();
	
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
