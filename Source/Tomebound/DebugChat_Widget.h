// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugChat_Widget.generated.h"

/**
 * 
 */
UCLASS()
class TOMEBOUND_API UDebugChat_Widget : public UUserWidget
{
	GENERATED_BODY()

	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Print")
	FString printString;
	
};
