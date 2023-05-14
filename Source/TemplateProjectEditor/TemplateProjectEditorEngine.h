// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Editor/UnrealEdEngine.h"

#include "TemplateProjectEditorEngine.generated.h"

class IEngineLoop;

/**
 * UTemplateProjectEditorEngine
 */
UCLASS()
class UTemplateProjectEditorEngine : public UUnrealEdEngine
{
	GENERATED_BODY()

public:
	UTemplateProjectEditorEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

private:
    // Begin UEngine interface
	virtual void Init(IEngineLoop* InEngineLoop) override;
	virtual void Start() override;
	virtual void Tick(float DeltaSeconds, bool bIdleMode) override;
    // End UEngineInterface
};
