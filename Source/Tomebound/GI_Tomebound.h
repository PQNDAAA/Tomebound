// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DebugChat_Widget.h"
#include "GI_Tomebound.generated.h"

/**
 * 
 */
UCLASS()
class TOMEBOUND_API UGI_Tomebound : public UGameInstance
{
	GENERATED_BODY()

	public:

	UFUNCTION(Exec, Category="Commands")
	void OpenCardCombatLevel(FName targetLevel);
	
	UFUNCTION(Exec, Category="Commands")
	void ClearDebugChat();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "YourCategory")
	UDebugChat_Widget* DebugChatWidgetReference;
	
};
