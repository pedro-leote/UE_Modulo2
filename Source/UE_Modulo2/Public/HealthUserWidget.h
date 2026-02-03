// Fill out your copyright notice in the Description page of Project Settings.


//Example of a Widget handled in C++. Has corresponding Blueprint

#pragma once

//REMEMBER, if you want to include object pointers to certain components, you must include the corresponding header file!
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "HealthUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE_MODULO2_API UHealthUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	//Declaring a function in the Blueprint to change the percentage
	UFUNCTION(BlueprintCallable)
	void SetHealthBar(float percentValue, float healthValue);
	
	//Here we declare a pointer to the W_EnemyHealthWidget's Progress bar to access it in C++.
	//The meta = (BindWidget) searches for a ProgressBar with this exact(!) variable name to bind to.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (BindWidget))
	TObjectPtr<UProgressBar> HealthProgressBar;
	
	//Run previous parent's constructs
	virtual void NativeConstruct() override;

	//Here we are declaring a pointer to the Widget's Text block, if it exists.
	//meta = (BindWidgetOptional) does exactly as it says: the binding is only done if it finds the name.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> HealthTextBlock;
	
};
