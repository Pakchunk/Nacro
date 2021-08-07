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

// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix");

	ASafeZoneIndicator_C_HandleInsideOutsideMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::InitClosestPointAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio");

	ASafeZoneIndicator_C_InitClosestPointAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateClosestPointAudioLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UpdateClosestPointAudioLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateClosestPointAudioLocation");

	ASafeZoneIndicator_C_UpdateClosestPointAudioLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.GetClosestPointOnSafeZone
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 PlayerLocation                 (Parm, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ASafeZoneIndicator_C::GetClosestPointOnSafeZone(const struct FVector& PlayerLocation, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.GetClosestPointOnSafeZone");

	ASafeZoneIndicator_C_GetClosestPointOnSafeZone_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript");

	ASafeZoneIndicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Holding_Audio_Crossfader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__FinishedFunc");

	ASafeZoneIndicator_C_Holding_Audio_Crossfader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Holding_Audio_Crossfader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__UpdateFunc");

	ASafeZoneIndicator_C_Holding_Audio_Crossfader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::FadeSafeZoneVisuals__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__FinishedFunc");

	ASafeZoneIndicator_C_FadeSafeZoneVisuals__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::FadeSafeZoneVisuals__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__UpdateFunc");

	ASafeZoneIndicator_C_FadeSafeZoneVisuals__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Movement_Audio_Crossfader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__FinishedFunc");

	ASafeZoneIndicator_C_Movement_Audio_Crossfader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Movement_Audio_Crossfader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__UpdateFunc");

	ASafeZoneIndicator_C_Movement_Audio_Crossfader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Timeline_0__FinishedFunc");

	ASafeZoneIndicator_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Timeline_0__UpdateFunc");

	ASafeZoneIndicator_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortSafeZoneState*            NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(EFortSafeZoneState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange");

	ASafeZoneIndicator_C_OnSafeZoneStateChange_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick");

	ASafeZoneIndicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay");

	ASafeZoneIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Apply_Lowpass_to_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio");

	ASafeZoneIndicator_C_Apply_Lowpass_to_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator");

	ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
