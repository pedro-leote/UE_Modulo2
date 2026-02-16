// Fill out your copyright notice in the Description page of Project Settings.


#include "DirtCollectible.h"

// Sets default values
ADirtCollectible::ADirtCollectible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	HealthComponent = CreateDefaultSubobject<UHealthComponentCPP>(TEXT("HealthComponentCPP"));

	if(HealthComponent)
	{
		HealthComponent->SetMaxHealth(FMath::RandRange(2, 6));
		HealthComponent->SetCurrentHealth(HealthComponent->GetMaxHealth());
	}

	UE_LOG(LogTemp, Warning, TEXT("HealthComponent: %s"), HealthComponent ? *HealthComponent->GetName() : TEXT("NULL"));
}

// Called when the game starts or when spawned
void ADirtCollectible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirtCollectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

