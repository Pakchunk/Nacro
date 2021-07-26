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

// Function Kitchen_StoveHood_01.Kitchen_StoveHood_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AKitchen_StoveHood_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kitchen_StoveHood_01.Kitchen_StoveHood_01_C.UserConstructionScript");

	AKitchen_StoveHood_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
