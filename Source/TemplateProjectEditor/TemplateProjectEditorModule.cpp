// Fill out your copyright notice in the Description page of Project Settings.

#include "TemplateProjectEditorModule.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogTemplateProjectEditor);

/**
 * FTemplateProjectEditorModule
 */
class FTemplateProjectEditorModule : public FDefaultGameModuleImpl
{
public:
    /**
        Called when the editor module is called
    */
	virtual void StartupModule() override
	{
        UE_LOG(LogTemplateProjectEditor, Log, TEXT("FTemplateProjectEditorModule: Module Started"));
	}

    /**
        Called when the editor module is shutdown
    */
	virtual void ShutdownModule() override
	{
        UE_LOG(LogTemplateProjectEditor, Log, TEXT("FTemplateProjectEditorModule: Module Ended"));
	}

    /**
        Called when Play-In-Editor begins
    */
	void OnBeginPIE(bool bIsSimulating)
	{
	}

    /**
        Called when Play-In-Editor is ended
    */
	void OnEndPIE(bool bIsSimulating)
	{
	}
};

IMPLEMENT_MODULE(FTemplateProjectEditorModule, TemplateProjectEditor);
