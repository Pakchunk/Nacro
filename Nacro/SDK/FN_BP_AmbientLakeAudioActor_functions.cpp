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

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientLakeAudioActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.UserConstructionScript");

	ABP_AmbientLakeAudioActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientLakeAudioActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ReceiveTick");

	ABP_AmbientLakeAudioActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ExecuteUbergraph_BP_AmbientLakeAudioActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientLakeAudioActor_C::ExecuteUbergraph_BP_AmbientLakeAudioActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ExecuteUbergraph_BP_AmbientLakeAudioActor");

	ABP_AmbientLakeAudioActor_C_ExecuteUbergraph_BP_AmbientLakeAudioActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
