// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "MainAttack.generated.h"


UCLASS()
class UE_MODULO2_API AMainAttack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMainAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle CollisionEnableTimer;
	
	UFUNCTION()
	void EnableSphereCollision(bool state);

	UFUNCTION(BlueprintCallable)
	void PlayEffect(AActor* targetActor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CheckForDirtAttack();
	
private:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	USphereComponent* SphereCollider = nullptr;

};
