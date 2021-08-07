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

// Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UFemale_Commando_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation");

	UFemale_Commando_01_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFemale_Commando_01_Skeleton_AnimBP_C::ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP");

	UFemale_Commando_01_Skeleton_AnimBP_C_ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
