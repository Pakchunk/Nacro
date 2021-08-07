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

// Function MainQuestsTile.MainQuestsTile_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::SetScrollWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.SetScrollWidget");

	UMainQuestsTile_C_SetScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainQuestsTile_C::PopulateFilteredObjectives(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives");

	UMainQuestsTile_C_PopulateFilteredObjectives_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::HandleQuestChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged");

	UMainQuestsTile_C_HandleQuestChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainQuestsTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.Construct");

	UMainQuestsTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainQuestsTile_C::HandleButtonClick(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick");

	UMainQuestsTile_C_HandleButtonClick_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.HandleQuestsUpdated
// (BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::HandleQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.HandleQuestsUpdated");

	UMainQuestsTile_C_HandleQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.PlayDialogIfRequired
// (BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::PlayDialogIfRequired()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.PlayDialogIfRequired");

	UMainQuestsTile_C_PlayDialogIfRequired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainQuestsTile_C::ExecuteUbergraph_MainQuestsTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile");

	UMainQuestsTile_C_ExecuteUbergraph_MainQuestsTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
