// Fill out your copyright notice in the Description page of Project Settings.

///
/// Simple definition of a C++ class in Unreal. Barebones. 
///


//We include headers to grab possible variables and functions for the MyActor. Multiple headers can be used.
#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	//Different types of error logs!
	//Prints a warning in the console
	UE_LOG(LogTemp, Warning, TEXT("This is a warning message! With LogTemp Warning"));
	//Prints an error in the console... its definitely worse.
	UE_LOG(LogTemp, Error, TEXT("This is an error message! With LogTemp Error"));
	//With this code you can print it to the in-game viewport like Print functionality in Blueprints.
	
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//An example function you can call with examples. Remember to include an empty version in the header, if you want to modify it here!
void AMyActor::Foo()
{
	//Here's a few Unreal parameters
	FText text;
	FString string;
	int32 integer32Bit;

	//Arrays:
	TArray<int32> arrayOfInts;

	
	//For loops.
	for (int i = 0; i < 10; i++)
	{
		integer32Bit = i;
	}

	
	
}
