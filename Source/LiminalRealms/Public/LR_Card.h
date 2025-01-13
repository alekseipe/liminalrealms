// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LR_Card.generated.h"

UCLASS()
class LIMINALREALMS_API ALR_Card : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALR_Card();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

};
