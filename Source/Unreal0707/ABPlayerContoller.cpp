// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerContoller.h"

void AABPlayerContoller::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

void AABPlayerContoller::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	ABLOG_S(Warning);
}

void AABPlayerContoller::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
	// 플레이어 컨트롤러에게 UI를 배제하고 게임에게만 입력 전달하는 명령
}
