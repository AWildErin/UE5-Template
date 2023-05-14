// Fill out your copyright notice in the Description page of Project Settings.

#include "TemplateProjectGameModule.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogTemplateProject);

/**
 * FTemplateProjectGameModule
 */
class FTemplateProjectGameModule : public FDefaultGameModuleImpl
{
public:
    /**
        Called when the game module is shutdown
    */
	virtual void StartupModule() override
	{
        UE_LOG(LogTemplateProject, Log, TEXT("FTemplateProjectGameModule: Module Started"));
	}


    /**
        Called when the game module is shutdown
    */
	virtual void ShutdownModule() override
	{
        UE_LOG(LogTemplateProject, Log, TEXT("FTemplateProjectGameModule: Module Ended"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE( FTemplateProjectGameModule, TemplateProjectGame, "TemplateProjectGame" );
