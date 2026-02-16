#include "Blueprint/UserWidget.h"
#include "Components/WidgetComponent.h"
#include "Actor_01.h"

// Sets default values
AActor_01::AActor_01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* defaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = defaultSceneRoot;
	
	//Assign the blueprint's own HealthComponent to the header's HealthComponent variable
	HealthComponent = CreateDefaultSubobject<UHealthComponentCPP>(TEXT("HealthComponentCPP"));

	
}


// Called when the game starts or when spawned
void AActor_01::BeginPlay()
{
	Super::BeginPlay();

	if(!HealthWidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("HealthWidgetClass is null"));
		return;
	}

	//This is super stupid, but here's how you do a debug with a variable in UE's C++. The equivalent in C# is down below.
	UE_LOG(LogTemp, Error, TEXT("Current widget class: %s"), HealthWidgetClass ? *HealthWidgetClass->GetName() : TEXT("NULL"));
	// \------>   Debug.Log($"Current widget class: {HealthWidgetClass}");
	
	if (HealthWidget)
	{
		UE_LOG(LogTemp, Warning, TEXT("HealthWidget component, setting params"));
		HealthWidget->SetupAttachment(Mesh);
		
		HealthWidget->SetWidgetClass(HealthWidgetClass);
		
		HealthWidget->SetWidgetSpace(EWidgetSpace::World);
		HealthWidget->SetDrawAtDesiredSize(true);

		HealthWidget->SetRelativeLocation(FVector(0.f, 0.f, 5.f));
		HealthWidget->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
		HealthWidget->SetPivot(FVector2D(0.5f, 0.5f));

		HealthWidget->InitWidget();
	}

	
	if(HealthWidget && HealthWidget->GetWidget())
	{
		UE_LOG(LogTemp, Warning, TEXT("HealthWidget component exists"));

		UHealthUserWidget* healthWidget = Cast<UHealthUserWidget>(HealthWidget->GetWidget());
		if(healthWidget)
		{
			UE_LOG(LogTemp, Warning, TEXT("Widget cast successful"));

			healthWidget->SetHealthBar(1.0f, 100.0f);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("HealthWidget component is null"));
	}
	
	
}

// Called every frame
void AActor_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}