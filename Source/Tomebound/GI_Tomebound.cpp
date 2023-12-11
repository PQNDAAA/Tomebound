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

bool UGI_Tomebound::CallFunctionByNameWithParameters(UObject* ObjPtr, FName FunctionName, const TArray<FString>& Parameters)
{


	FString Command = FunctionName.ToString();
	for (FString Param : Parameters)
		Command += (" " + Param);

	FOutputDeviceNull Ar;
	return ObjPtr->CallFunctionByNameWithArguments(*Command, Ar, nullptr, true);
}


