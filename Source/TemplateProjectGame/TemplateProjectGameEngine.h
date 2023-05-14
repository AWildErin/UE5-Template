// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "TemplateProjectGameEngine.generated.h"

/**
 * UTemplateProjectGameEngine
 */
UCLASS()
class TEMPLATEPROJECTGAME_API UTemplateProjectGameEngine : public UGameEngine
{
	GENERATED_BODY()

public:
	UTemplateProjectGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

private:
	// Begin UEngine interface
	virtual void Init(class IEngineLoop* InEngineLoop) override;
	virtual void Start() override;
	virtual void Tick(float DeltaSeconds, bool bIdleMode) override;
	// End UEngine interface
};
