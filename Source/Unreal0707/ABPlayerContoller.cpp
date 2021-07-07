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
	// �÷��̾� ��Ʈ�ѷ����� UI�� �����ϰ� ���ӿ��Ը� �Է� �����ϴ� ���
}
