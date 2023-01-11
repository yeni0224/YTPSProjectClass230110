// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyTPSGameGameModeBase.h"
#include "MyTPSGame.h"

AMyTPSGameGameModeBase::AMyTPSGameGameModeBase()
{
	//UE_LOG(LogTemp, Warning, TEXT("%s %s"), * CALLINFO, TEXT("abcde"));
	//PRINT_CALLINFO();

	PRINT_LOG(TEXT("%s %s"), TEXT("Hello"), TEXT("World")); //가변인자를 넣을 수 있다. fmt 자리에 %s %s, 그 뒤 단어들은 "..." 에 들어간다
}