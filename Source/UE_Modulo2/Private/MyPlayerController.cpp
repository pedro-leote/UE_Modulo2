// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AMyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void AMyPlayerController::OnInputStarted()
{
	Super::OnInputStarted();
}

void AMyPlayerController::OnSetDestinationReleased()
{
	Super::OnSetDestinationReleased();
}

void AMyPlayerController::OnSetDestinationTriggered()
{
	Super::OnSetDestinationTriggered();
}

void AMyPlayerController::OnTouchReleased()
{
	Super::OnTouchReleased();
}

void AMyPlayerController::OnTouchTriggered()
{
	Super::OnTouchTriggered();
}



