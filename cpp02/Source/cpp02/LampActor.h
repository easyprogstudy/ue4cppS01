// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/PointLightComponent.h>
#include <Components/BoxComponent.h>

#include "LampActor.generated.h"

DECLARE_EVENT(ALampActor, FLightSetEvent)

UCLASS()
class CPP02_API ALampActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALampActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UPROPERTY()
	UPointLightComponent* m_pLight;

	UPROPERTY()
	UBoxComponent* m_pBox;

	UPROPERTY(EditAnywhere, Category="조명", DisplayName="빛의 세기")
	float m_nLightIntensity;

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	UFUNCTION(Category="Test Tool")
	void SetLight(bool bSet);


public:
	FLightSetEvent& OnLigthSet()
	{
		return lightSetEvent;
	}

private:
	FLightSetEvent lightSetEvent;

};
