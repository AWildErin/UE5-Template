// Fill out your copyright notice in the Description page of Project Settings.

#include "TemplateProjectGameEngine.h"

#include "TemplateProjectGameModule.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(TemplateProjectGameEngine)

UTemplateProjectGameEngine::UTemplateProjectGameEngine(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UTemplateProjectGameEngine::Init(IEngineLoop* InEngineLoop)
{
	Super::Init(InEngineLoop);

	UE_LOG(LogTemplateProject, Log, TEXT("UTemplateProjectGameEngine: Init"));
}

void UTemplateProjectGameEngine::Start()
{
	Super::Start();

	UE_LOG(LogTemplateProject, Log, TEXT("UTemplateProjectGameEngine: Start"));
}

void UTemplateProjectGameEngine::Tick(float DeltaSeconds, bool bIdleMode)
{
	Super::Tick(DeltaSeconds, bIdleMode);
}

#undef LOCTEXt_NAMESPACE