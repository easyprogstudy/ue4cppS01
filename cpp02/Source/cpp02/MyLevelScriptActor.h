// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LampActor.h"

#include "MyLevelScriptActor.generated.h"


/**
 * 
 */
UCLASS()
class CPP02_API AMyLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	

public:
	UPROPERTY(EditAnywhere, Category="Actors", DisplayName="램프 액터")
	ALampActor* m_pActor;

	void OnLightSetHandler();
};
