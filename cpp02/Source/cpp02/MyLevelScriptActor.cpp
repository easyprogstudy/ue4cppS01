// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLevelScriptActor.h"

void AMyLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();

	//m_pActor->SetLight(true);
	m_pActor->OnLigthSet().AddUObject(this, &AMyLevelScriptActor::OnLightSetHandler);
}

void AMyLevelScriptActor::OnLightSetHandler()
{
	UE_LOG(LogTemp, Warning, TEXT("in OnLightSetHandler Handler !!"));
}
