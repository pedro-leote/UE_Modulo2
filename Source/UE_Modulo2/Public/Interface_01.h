

//This script shows the implementation of a simple interface for Interacting. Anything with it 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interface_01.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterface_01 : public UInterface
{
	GENERATED_BODY()
};

class UE_MODULO2_API IInterface_01
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	bool Interact();

	UFUNCTION(BlueprintImplementableEvent, Category = "Interact")
	void InteractEvent();

};
