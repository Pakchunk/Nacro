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

// Function CampaignMapWidget.CampaignMapWidget_C.SetTriggerIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapWidget_C::SetTriggerIcon(bool PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.SetTriggerIcon");

	UCampaignMapWidget_C_SetTriggerIcon_Params params;
	params.PassThrough = PassThrough;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.Find Active Page
// (Public, BlueprintCallable, BlueprintEvent)

void UCampaignMapWidget_C::Find_Active_Page()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.Find Active Page");

	UCampaignMapWidget_C_Find_Active_Page_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCampaignMapWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.Update");

	UCampaignMapWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapWidget_C::BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature");

	UCampaignMapWidget_C_BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignMapWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.Construct");

	UCampaignMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.Handle OnQuestsUpdated
// (BlueprintCallable, BlueprintEvent)

void UCampaignMapWidget_C::Handle_OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.Handle OnQuestsUpdated");

	UCampaignMapWidget_C_Handle_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapWidget_C::BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature");

	UCampaignMapWidget_C_BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapWidget_C::BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature");

	UCampaignMapWidget_C_BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapWidget.CampaignMapWidget_C.ExecuteUbergraph_CampaignMapWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapWidget_C::ExecuteUbergraph_CampaignMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapWidget.CampaignMapWidget_C.ExecuteUbergraph_CampaignMapWidget");

	UCampaignMapWidget_C_ExecuteUbergraph_CampaignMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
