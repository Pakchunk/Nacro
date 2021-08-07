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

// Function Commerce_GasPump_03.Commerce_GasPump_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommerce_GasPump_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Commerce_GasPump_03.Commerce_GasPump_03_C.UserConstructionScript");

	ACommerce_GasPump_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
