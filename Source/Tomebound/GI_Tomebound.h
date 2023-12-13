// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
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


	UFUNCTION(BlueprintCallable, Category = "Reflection")
	bool CallFunctionByNameWithParameters(UObject* ObjPtr, FName FunctionName, const TArray<FString>& Parameters);

	UFUNCTION(BlueprintCallable, Category = "DebugChat")
	void CallFunctionByName(FString command);

protected:
	// Called when the game starts or when spawned
	virtual void Init() override;
	
};
