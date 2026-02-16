// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UE_Modulo2.h"
#include "HealthComponentCPP.h"
#include "DirtCollectible.generated.h"

UCLASS()
class UE_MODULO2_API ADirtCollectible : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirtCollectible();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Components")
	TObjectPtr<UHealthComponentCPP> HealthComponent;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
