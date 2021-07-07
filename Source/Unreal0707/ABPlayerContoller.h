// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Unreal0707.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerContoller.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL0707_API AABPlayerContoller : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;
	

protected:
	virtual void BeginPlay() override;
};
