// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__)+ TEXT(")"))

#define  PRINT_CALLINFO() UE_LOG(LogTemp, Warning, TEXT("%s"), * CALLINFO) // define : 치환하는 기능

#define PRINT_LOG(fmt, ...) UE_LOG(LogTemp, Warning, TEXT("%s %s"), * CALLINFO, *FString::Printf(fmt, ##__VA_ARGS__))
//괄호 안에 매개변수가 여러개 들어갈 수 있도록 , %s 는 주소를 넘겨야하니까