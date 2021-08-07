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

// Function Street_Light_Urban01.Street_Light_Urban01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStreet_Light_Urban01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Street_Light_Urban01.Street_Light_Urban01_C.UserConstructionScript");

	AStreet_Light_Urban01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
