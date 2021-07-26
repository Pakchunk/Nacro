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

// Function Sign_NomsGrocery.Sign_NomsGrocery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASign_NomsGrocery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_NomsGrocery.Sign_NomsGrocery_C.UserConstructionScript");

	ASign_NomsGrocery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
