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

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGamePhaseChangeWidget_C::PlayGamePhaseAlertSound(EAthenaGamePhaseStep Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound");

	UAthenaGamePhaseChangeWidget_C_PlayGamePhaseAlertSound_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep*          Step                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  MESSAGE                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  TimeText                       (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaGamePhaseChangeWidget_C::UpdateMessaging(EAthenaGamePhaseStep* Step, struct FText* MESSAGE, struct FText* TimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging");

	UAthenaGamePhaseChangeWidget_C_UpdateMessaging_Params params;
	params.Step = Step;
	params.MESSAGE = MESSAGE;
	params.TimeText = TimeText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGamePhaseChangeWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished");

	UAthenaGamePhaseChangeWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep*          Step                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGamePhaseChangeWidget_C::GamePhaseStepChanged(EAthenaGamePhaseStep* Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged");

	UAthenaGamePhaseChangeWidget_C_GamePhaseStepChanged_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGamePhaseChangeWidget_C::ExecuteUbergraph_AthenaGamePhaseChangeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget");

	UAthenaGamePhaseChangeWidget_C_ExecuteUbergraph_AthenaGamePhaseChangeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
