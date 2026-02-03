// Fill out your copyright notice in the Description page of Project Settings.

//The C++ class for the widget. This declares how the header variables and functions are used and what they do.
//Depending on the properties used, this means you can use them in the Blueprints, or not. Check the header file attentively.


#include "HealthUserWidget.h"


//This calls every previous Construct function from inherited classes. This is NOT calling the associated blueprint's Construct nodes.
void UHealthUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

//This will set the Health Bar's percent to this variable value. As well as the new text
void UHealthUserWidget::SetHealthBar(float percentValue, float healthValue)
{
	HealthProgressBar->SetPercent(percentValue);

	//Since this is BindWidgetOptional in the header, we must check if it's actually set.
	if(IsValid(HealthTextBlock))
	{
		HealthTextBlock->SetText(FText::AsNumber(healthValue));
	}
}