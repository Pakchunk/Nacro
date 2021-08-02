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

// Function GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_DefaultPlayer_HarvestBuff_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C.K2_ActivateAbilityFromEvent");

	UGA_DefaultPlayer_HarvestBuff_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C.ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGA_DefaultPlayer_HarvestBuff_C::ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C.ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff");

	UGA_DefaultPlayer_HarvestBuff_C_ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
