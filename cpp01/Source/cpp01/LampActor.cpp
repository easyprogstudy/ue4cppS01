// Fill out your copyright notice in the Description page of Project Settings.


#include "LampActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ALampActor::ALampActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));

	m_pBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX Trigger"));
	m_pBox->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
	m_pBox->SetCollisionProfileName(TEXT("Box Trigger"));

	m_pLight->SetupAttachment(m_pBox);
	m_pLight->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
	
	m_pBox->OnComponentBeginOverlap.AddDynamic(this, &ALampActor::OnOverlapBegin);
	m_pBox->OnComponentEndOverlap.AddDynamic(this, &ALampActor::OnOverlapEnd);

}

// Called when the game starts or when spawned
void ALampActor::BeginPlay()
{
	Super::BeginPlay();
	m_pLight->SetVisibility(false);
}

// Called every frame
void ALampActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ALampActor::OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor * otherActor, UPrimitiveComponent * otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult & sweepResult)
{
	if (otherActor && (otherActor != this) && otherComp)
	{
		m_pLight->SetVisibility(true);
		UE_LOG(LogTemp, Warning, TEXT("OnOverlap Begin!"));
	}
}



void ALampActor::OnOverlapEnd(UPrimitiveComponent * overlappedComp, AActor * otherActor, UPrimitiveComponent * otherComp, int32 otherBodyIndex)
{
	if (otherActor && (otherActor != this) && otherComp)
	{
		m_pLight->SetVisibility(false);
		UE_LOG(LogTemp, Warning, TEXT("OnOverlap End!!!"));
	}
}