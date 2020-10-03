// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTags.h"
#include "ARAvailableAbilities.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HOMININA_API UARAvailableAbilities : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FGameplayTag> Abilities;
	
	
};
