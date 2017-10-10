// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController1.generated.h" //must be last include

/**
 * 
 */
UCLASS()
class BATTLECARS_API ATankPlayerController1 : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank *GetControlledTank() const;
	
	
};
