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

	// Body Water 컴포넌트 생성
	// 객체를 자동으로 관리 하기위해 UPROPERTY()선언
	// VisibleAnywhere 밖에서 편집하기 위해 보여주기
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Water;

	//조명 + 파티클 이벤트
	UPROPERTY(VisibleAnywhere)
		UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* Splash;

	// 언리얼 엔진에서 에디터 속성 데이터 변경은 VisibleAnywhere이 아닌 EditAnywhere
	UPROPERTY(EditAnywhere, Category = ID)
		int32 ID;

	UPROPERTY(VisibleAnyWhere)
		URotatingMovementComponent* Movement;

private:
	UPROPERTY(EditAnywhere, Category = Start, Meta = (AllowPrivateAccess = true))
		float RoatateSpeed;

	
	//
};
