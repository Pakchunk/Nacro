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

// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Post_SupplyDrop_Impact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.UserConstructionScript");

	AB_Post_SupplyDrop_Impact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_Post_SupplyDrop_Impact_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__FinishedFunc");

	AB_Post_SupplyDrop_Impact_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_Post_SupplyDrop_Impact_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__UpdateFunc");

	AB_Post_SupplyDrop_Impact_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.SpawnPostFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PostFX_BoxScaleDyn             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PostFX_CamShakeLoc             (Parm, IsPlainOldData)
// bool                           PostFX_UseCamShake             (Parm, ZeroConstructor, IsPlainOldData)
// float                          PostFX_DeactivateDelay         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PostFX_UseForceFeedback        (Parm, ZeroConstructor, IsPlainOldData)

void AB_Post_SupplyDrop_Impact_C::SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay, bool PostFX_UseForceFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.SpawnPostFX");

	AB_Post_SupplyDrop_Impact_C_SpawnPostFX_Params params;
	params.PostFX_BoxScaleDyn = PostFX_BoxScaleDyn;
	params.PostFX_CamShakeLoc = PostFX_CamShakeLoc;
	params.PostFX_UseCamShake = PostFX_UseCamShake;
	params.PostFX_DeactivateDelay = PostFX_DeactivateDelay;
	params.PostFX_UseForceFeedback = PostFX_UseForceFeedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.ExecuteUbergraph_B_Post_SupplyDrop_Impact
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_Post_SupplyDrop_Impact_C::ExecuteUbergraph_B_Post_SupplyDrop_Impact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.ExecuteUbergraph_B_Post_SupplyDrop_Impact");

	AB_Post_SupplyDrop_Impact_C_ExecuteUbergraph_B_Post_SupplyDrop_Impact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
