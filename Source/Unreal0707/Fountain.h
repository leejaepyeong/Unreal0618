// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Unreal0707.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Fountain.generated.h"


UCLASS()
class UNREAL0707_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Body Water ������Ʈ ����
	// ��ü�� �ڵ����� ���� �ϱ����� UPROPERTY()����
	// VisibleAnywhere �ۿ��� �����ϱ� ���� �����ֱ�
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Water;

	//���� + ��ƼŬ �̺�Ʈ
	UPROPERTY(VisibleAnywhere)
		UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* Splash;

	// �𸮾� �������� ������ �Ӽ� ������ ������ VisibleAnywhere�� �ƴ� EditAnywhere
	UPROPERTY(EditAnywhere, Category = ID)
		int32 ID;

	UPROPERTY(VisibleAnyWhere)
		URotatingMovementComponent* Movement;

private:
	UPROPERTY(EditAnywhere, Category = Start, Meta = (AllowPrivateAccess = true))
		float RoatateSpeed;

	
	//
};
