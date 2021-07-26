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

// Function Commerce_VendingMachine_Drink.Commerce_VendingMachine_Drink_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommerce_VendingMachine_Drink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Commerce_VendingMachine_Drink.Commerce_VendingMachine_Drink_C.UserConstructionScript");

	ACommerce_VendingMachine_Drink_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
