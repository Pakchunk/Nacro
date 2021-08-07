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

// Function Commerce_StoreShelves_08.Commerce_StoreShelves_08_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommerce_StoreShelves_08_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Commerce_StoreShelves_08.Commerce_StoreShelves_08_C.UserConstructionScript");

	ACommerce_StoreShelves_08_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
