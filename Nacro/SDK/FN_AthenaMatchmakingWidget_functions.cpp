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

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.FillChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDirection                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::FillChange(bool bDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.FillChange");

	UAthenaMatchmakingWidget_C_FillChange_Params params;
	params.bDirection = bDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.PlaylistChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDirection                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::PlaylistChange(bool bDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.PlaylistChange");

	UAthenaMatchmakingWidget_C_PlaylistChange_Params params;
	params.bDirection = bDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetAutoFillOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingWidget_C::SetAutoFillOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetAutoFillOptions");

	UAthenaMatchmakingWidget_C_SetAutoFillOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingWidget_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingWidget_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetPlayButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bCanMatchmake                  (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::SetPlayButtonState(bool* bCanMatchmake)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetPlayButtonState");

	UAthenaMatchmakingWidget_C_SetPlayButtonState_Params params;
	params.bCanMatchmake = bCanMatchmake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.Construct");

	UAthenaMatchmakingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetCancelButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsMatchmaking                 (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::SetCancelButtonState(bool* bIsMatchmaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetCancelButtonState");

	UAthenaMatchmakingWidget_C_SetCancelButtonState_Params params;
	params.bIsMatchmaking = bIsMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature");

	UAthenaMatchmakingWidget_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature");

	UAthenaMatchmakingWidget_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.ExecuteUbergraph_AthenaMatchmakingWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingWidget_C::ExecuteUbergraph_AthenaMatchmakingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.ExecuteUbergraph_AthenaMatchmakingWidget");

	UAthenaMatchmakingWidget_C_ExecuteUbergraph_AthenaMatchmakingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
