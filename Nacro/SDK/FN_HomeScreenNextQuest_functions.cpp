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

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleBeyondCutOffQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::HandleBeyondCutOffQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleBeyondCutOffQuest");

	UHomeScreenNextQuest_C_HandleBeyondCutOffQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ConfigureScreenForEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::ConfigureScreenForEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.ConfigureScreenForEvent");

	UHomeScreenNextQuest_C_ConfigureScreenForEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateSceenBasedOnQuestMapShown
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::UpdateSceenBasedOnQuestMapShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateSceenBasedOnQuestMapShown");

	UHomeScreenNextQuest_C_UpdateSceenBasedOnQuestMapShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateButtonBasedOnEventStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EventIsActive                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHomeScreenNextQuest_C::UpdateButtonBasedOnEventStatus(bool* EventIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateButtonBasedOnEventStatus");

	UHomeScreenNextQuest_C_UpdateButtonBasedOnEventStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventIsActive != nullptr)
		*EventIsActive = params.EventIsActive;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UHomeScreenNextQuest_C::BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature");

	UHomeScreenNextQuest_C_BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Handle Event Flags Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         ActiveEventFlags               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHomeScreenNextQuest_C::Handle_Event_Flags_Changed(TArray<struct FString> ActiveEventFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.Handle Event Flags Changed");

	UHomeScreenNextQuest_C_Handle_Event_Flags_Changed_Params params;
	params.ActiveEventFlags = ActiveEventFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomeScreenNextQuest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.Construct");

	UHomeScreenNextQuest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleTabSwitch
// (BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::HandleTabSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleTabSwitch");

	UHomeScreenNextQuest_C_HandleTabSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHomeScreenNextQuest_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.OnActivated");

	UHomeScreenNextQuest_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ExecuteUbergraph_HomeScreenNextQuest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHomeScreenNextQuest_C::ExecuteUbergraph_HomeScreenNextQuest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeScreenNextQuest.HomeScreenNextQuest_C.ExecuteUbergraph_HomeScreenNextQuest");

	UHomeScreenNextQuest_C_ExecuteUbergraph_HomeScreenNextQuest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
