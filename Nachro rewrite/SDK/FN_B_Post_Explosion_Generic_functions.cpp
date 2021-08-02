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

// Function B_Post_Explosion_Generic.B_Post_Explosion_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Post_Explosion_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Post_Explosion_Generic.B_Post_Explosion_Generic_C.UserConstructionScript");

	AB_Post_Explosion_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
