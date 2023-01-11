// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__)+ TEXT(")"))

#define  PRINT_CALLINFO() UE_LOG(LogTemp, Warning, TEXT("%s"), * CALLINFO) // define : ġȯ�ϴ� ���

#define PRINT_LOG(fmt, ...) UE_LOG(LogTemp, Warning, TEXT("%s %s"), * CALLINFO, *FString::Printf(fmt, ##__VA_ARGS__))
//��ȣ �ȿ� �Ű������� ������ �� �� �ֵ��� , %s �� �ּҸ� �Ѱܾ��ϴϱ�