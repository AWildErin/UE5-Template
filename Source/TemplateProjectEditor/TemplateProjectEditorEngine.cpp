// Fill out your copyright notice in the Description page of Project Settings.

#include "TemplateProjectEditorEngine.h"

#include "TemplateProjectEditorModule.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(TemplateProjectEditorEngine)

#define LOCTEXT_NAMESPACE "TemplateProjectEditor"

UTemplateProjectEditorEngine::UTemplateProjectEditorEngine(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UTemplateProjectEditorEngine::Init(IEngineLoop* InEngineLoop)
{
	Super::Init(InEngineLoop);

	UE_LOG(LogTemplateProjectEditor, Log, TEXT("UTemplateProjectEditorEngine: Init"));
}

void UTemplateProjectEditorEngine::Start()
{
	Super::Start();

	UE_LOG(LogTemplateProjectEditor, Log, TEXT("UTemplateProjectEditorEngine: Start"));
}

void UTemplateProjectEditorEngine::Tick(float DeltaSeconds, bool bIdleMode)
{
	Super::Tick(DeltaSeconds, bIdleMode);
}

#undef LOCTEXt_NAMESPACE