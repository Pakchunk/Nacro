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

// Function Hydrant01.Hydrant01_C.handle_Exploded_State
// (BlueprintCallable, BlueprintEvent)

void AHydrant01_C::handle_Exploded_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hydrant01.Hydrant01_C.handle_Exploded_State");

	AHydrant01_C_handle_Exploded_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hydrant01.Hydrant01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHydrant01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hydrant01.Hydrant01_C.UserConstructionScript");

	AHydrant01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
