// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthComponentCPP.h"
#include "GameFramework/Actor.h"
#include "Interface_01.h"
#include "HealthUserWidget.h"
#include "Components/WidgetComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Actor_01.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UE_MODULO2_API AActor_01 : public AActor//, public IInterface_01
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_01();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Components")
	TObjectPtr<UStaticMeshComponent> Mesh;
	//Implemented Interface
	//bool Interact();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Components")
	TObjectPtr<UWidgetComponent> HealthWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	TObjectPtr<UHealthComponentCPP> HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	TSubclassOf<UHealthUserWidget> HealthWidgetClass;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	


private:

	//UFUNCTION(BlueprintCallable)
	//virtual void CreateHealthWidget();
	
	UPROPERTY(EditAnywhere)
	uint32 _integerVariable = 0;
};
