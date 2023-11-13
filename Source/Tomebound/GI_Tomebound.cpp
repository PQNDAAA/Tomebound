// Fill out your copyright notice in the Description page of Project Settings.


#include "GI_Tomebound.h"

#include "Kismet/GameplayStatics.h"


void UGI_Tomebound::OpenCardCombatLevel(FName targetLevel)
{
	UGameplayStatics::OpenLevel(GetWorld(),targetLevel);
}

void UGI_Tomebound::ClearDebugChat()
{
	FString StringDebugChat = UDebugChat_Widget().printString;
	StringDebugChat = nullptr;
}



