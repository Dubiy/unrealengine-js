// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "JavascriptContext.h"
#include "MyJavascriptContext.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECTJS_API UMyJavascriptContext : public UJavascriptContext
{
    GENERATED_BODY()
//
public:
    void MyFunc1();
};
