// Fill out your copyright notice in the Description page of Project Settings.


#include "RogHealthComponentTests.h"
#include "Misc/AutomationTest.h"
#include "Rogalik/Public/Characters/RogPlayer.h"
#include "Rogalik/Public/Components/RogHealthComponent.h"
#include "Tests/AutomationEditorCommon.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDealDamage, "Rogalik.Health.Player.Apply Damage", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::CriticalPriority | EAutomationTestFlags::ProductFilter);

bool FDealDamage::RunTest(const FString& Parameters)
{
	return true;
}
