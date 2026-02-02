// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UE_MODULO2_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Declare an empty function to be used in the C++ class here.
	void Foo();
	

	//The following variables use UPROPERTIES to serialize into Blueprints. Check the equivalent Blueprint file to see visually.
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
