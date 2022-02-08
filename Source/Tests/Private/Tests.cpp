#include "Tests.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FTestsEditorModule, Tests);

DEFINE_LOG_CATEGORY(Tests)

#define LOCTEXT_NAMESPACE "Tests"

void FTestsEditorModule::StartupModule()
{
	UE_LOG(Tests, Warning, TEXT("Tests: Log Started"));
}

void FTestsEditorModule::ShutdownModule()
{
	UE_LOG(Tests, Warning, TEXT("Tests: Log Ended"));
}

#undef LOCTEXT_NAMESPACE