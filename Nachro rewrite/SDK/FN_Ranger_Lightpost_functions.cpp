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

// Function Ranger_Lightpost.Ranger_Lightpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARanger_Lightpost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ranger_Lightpost.Ranger_Lightpost_C.UserConstructionScript");

	ARanger_Lightpost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
