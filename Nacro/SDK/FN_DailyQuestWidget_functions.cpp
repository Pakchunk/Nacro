// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DailyQuestWidget.DailyQuestWidget_C.CreateAllObjectiveWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::CreateAllObjectiveWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.CreateAllObjectiveWidgets");

	UDailyQuestWidget_C_CreateAllObjectiveWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.UpdateObjectiveWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::UpdateObjectiveWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.UpdateObjectiveWidgets");

	UDailyQuestWidget_C_UpdateObjectiveWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.FilterObjectives
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::FilterObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.FilterObjectives");

	UDailyQuestWidget_C_FilterObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem");

	UDailyQuestWidget_C_SetQuestItem_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
