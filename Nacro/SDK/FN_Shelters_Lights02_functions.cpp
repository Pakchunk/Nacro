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

// Function Shelters_Lights02.Shelters_Lights02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShelters_Lights02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelters_Lights02.Shelters_Lights02_C.UserConstructionScript");

	AShelters_Lights02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
