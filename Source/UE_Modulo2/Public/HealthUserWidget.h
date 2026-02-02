// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "HealthUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE_MODULO2_API UHealthUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	//Here we declare a pointer to the W_EnemyHealthWidget's Progress bar to access it in C++.
	//The meta = (BindWidget)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (BindWidget))
	TObjectPtr<UProgressBar> HealthProgressBar;
	
};
