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

// Function AthenaAircraft.AthenaAircraft_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthenaAircraft_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAircraft.AthenaAircraft_C.UserConstructionScript");

	AAthenaAircraft_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAircraft.AthenaAircraft_C.PlayEffectsForPlayerJumped
// (Event, Protected, BlueprintEvent)

void AAthenaAircraft_C::PlayEffectsForPlayerJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAircraft.AthenaAircraft_C.PlayEffectsForPlayerJumped");

	AAthenaAircraft_C_PlayEffectsForPlayerJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAircraft.AthenaAircraft_C.ExecuteUbergraph_AthenaAircraft
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAircraft_C::ExecuteUbergraph_AthenaAircraft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAircraft.AthenaAircraft_C.ExecuteUbergraph_AthenaAircraft");

	AAthenaAircraft_C_ExecuteUbergraph_AthenaAircraft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
