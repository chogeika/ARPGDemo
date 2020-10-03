// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ARAIController.generated.h"

/**
 * 
 */
UCLASS()
class HOMININA_API AARAIController : public AActor //fix me
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AARAIController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
