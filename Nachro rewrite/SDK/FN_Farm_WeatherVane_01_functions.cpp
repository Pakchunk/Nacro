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

// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFarm_WeatherVane_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.UserConstructionScript");

	AFarm_WeatherVane_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AFarm_WeatherVane_01_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.ReceiveTick");

	AFarm_WeatherVane_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortBounceData*        Data                           (Parm)

void AFarm_WeatherVane_01_C::OnBounceAnimationUpdate(struct FFortBounceData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.OnBounceAnimationUpdate");

	AFarm_WeatherVane_01_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.ExecuteUbergraph_Farm_WeatherVane_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFarm_WeatherVane_01_C::ExecuteUbergraph_Farm_WeatherVane_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.ExecuteUbergraph_Farm_WeatherVane_01");

	AFarm_WeatherVane_01_C_ExecuteUbergraph_Farm_WeatherVane_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
