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

// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerRankEmblem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.Construct");

	UPlayerRankEmblem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerRankEmblem_C::ExecuteUbergraph_PlayerRankEmblem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem");

	UPlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
