// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LevelInstance/LevelInstanceComponent.h"
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
	
};
