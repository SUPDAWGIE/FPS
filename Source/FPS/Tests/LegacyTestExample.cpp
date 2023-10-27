// © 2023, SUPDAWG GAMES

#if WITH_AUTOMATION_TESTS

#include "FPS/Tests/LegacyTestExample.h"
#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGameplayTest, "FPS.FGameplayTest",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority);

bool FGameplayTest::RunTest(const FString& Parameters)
{
    return true;
}

#endif
