// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TriggerComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta 	= (BluePrintSpawnableComponent))
class TRANGLEGAMEJAM_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
