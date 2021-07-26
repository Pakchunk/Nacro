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

// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MissionHasModifiers            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObjectivesPage_C::MissionHasModifiers(bool* MissionHasModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers");

	UObjectivesPage_C_MissionHasModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionHasModifiers != nullptr)
		*MissionHasModifiers = params.MissionHasModifiers;
}


// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowModifiers                  (Parm, ZeroConstructor, IsPlainOldData)

void UObjectivesPage_C::ConfigureModifiersView(bool ShowModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView");

	UObjectivesPage_C_ConfigureModifiersView_Params params;
	params.ShowModifiers = ShowModifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObjectivesPage_C::HandleInventory(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.HandleInventory");

	UObjectivesPage_C_HandleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           InButton                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InButtonIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UObjectivesPage_C::HandleSelectedButtonChanged(class UCommonButton* InButton, int InButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged");

	UObjectivesPage_C_HandleSelectedButtonChanged_Params params;
	params.InButton = InButton;
	params.InButtonIndex = InButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObjectivesPage_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.HandleBack");

	UObjectivesPage_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ObjectivesPage.ObjectivesPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectivesPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.Construct");

	UObjectivesPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UObjectivesPage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.OnActivated");

	UObjectivesPage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectivesPage_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.Destruct");

	UObjectivesPage_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UObjectivesPage_C::OnActiveGameplayModifiersChanged_Event_1(TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_1");

	UObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_1_Params params;
	params.AppliedModifiers = AppliedModifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObjectivesPage_C::ExecuteUbergraph_ObjectivesPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage");

	UObjectivesPage_C_ExecuteUbergraph_ObjectivesPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
