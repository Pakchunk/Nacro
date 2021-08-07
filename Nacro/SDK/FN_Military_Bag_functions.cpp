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

// Function Military_Bag.Military_Bag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMilitary_Bag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Military_Bag.Military_Bag_C.UserConstructionScript");

	AMilitary_Bag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
