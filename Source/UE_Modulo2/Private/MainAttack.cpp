// Fill out your copyright notice in the Description page of Project Settings.


#include "MainAttack.h"

// Sets default values
AMainAttack::AMainAttack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainAttack::BeginPlay()
{
	Super::BeginPlay();

	//Deactivate the collision
	SphereCollider = FindComponentByClass<USphereComponent>();
	if(!SphereCollider)
	{
		UE_LOG(LogTemp, Error, TEXT("ATTACKACTOR: SphereCollider is null"));
		return;
	}

	SphereCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//Start a timer to enable it again. This gets the handler, sets the time to wait, and summons EnableSphereCollision after.
	GetWorldTimerManager().SetTimer(
    CollisionEnableTimer,
    [this]()
    {
        EnableSphereCollision(true);
    },
    0.4f,
    false
);
	
}

// Called every frame
void AMainAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainAttack::PlayEffect(AActor* targetActor)
{
	if(!targetActor)
	{
		UE_LOG(LogTemp, Error, TEXT("ATTACKACTOR: Target actor is null"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("ATTACKACTOR: Playing effect on %s"), *targetActor->GetName());
	
	//Play the effect on the target actor by casting to Niagara system and Activating it
	UNiagaraComponent* niagaraComponent = Cast<UNiagaraComponent>(targetActor->FindComponentByClass(UNiagaraComponent::StaticClass()));
	if(!niagaraComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("ATTACKACTOR: Niagara component is null"));
		return;
	}
	
	niagaraComponent->Activate(true);
}

void AMainAttack::EnableSphereCollision(bool state)
{
	if(SphereCollider)
	{
		SphereCollider->SetCollisionEnabled(state ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
		UE_LOG(LogTemp, Warning, TEXT("ATTACKACTOR: SphereCollider collision enabled"));
		if(SphereCollider->IsCollisionEnabled())
		{
			CheckForDirtAttack();
			GetWorldTimerManager().ClearTimer(CollisionEnableTimer);
			EnableSphereCollision(false);
		}
	}
}