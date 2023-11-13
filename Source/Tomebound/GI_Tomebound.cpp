// Fill out your copyright notice in the Description page of Project Settings.


#include "GI_Tomebound.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/OutputDeviceNull.h"

void UGI_Tomebound::Init()
{
	Super::Init();
}

void UGI_Tomebound::CallFunctionByName(FString command)
{
	FOutputDeviceNull ar;
	this->CallFunctionByNameWithArguments(*command,ar,NULL, true);
}



void UGI_Tomebound::OpenCardCombatLevel(FName targetLevel)
{
	UGameplayStatics::OpenLevel(GetWorld(),targetLevel);
}


