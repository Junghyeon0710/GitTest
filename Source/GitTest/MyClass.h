﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyClass.generated.h"

UCLASS()
class GITTEST_API AMyClass : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyClass();

protected:
	// Called when the game starts or when spawned



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override; //asdsad 
};
