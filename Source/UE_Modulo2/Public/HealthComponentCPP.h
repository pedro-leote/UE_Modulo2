// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponentCPP.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_MODULO2_API UHealthComponentCPP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponentCPP();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	int32 CurrentHealth = 100;
	int32 MaxHealth = 100;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetCurrentHealth(int32 NewHealth);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TakeDamage(int32 DamageAmount);
	UFUNCTION(BlueprintCallable)
	void SetMaxHealth(int32 NewHealth);

	UFUNCTION(BlueprintCallable, Category = "Health")
	int32 GetHealth() const { return CurrentHealth; }
	UFUNCTION(BlueprintCallable, Category = "Health")
	int32 GetMaxHealth() const { return MaxHealth; }
};
