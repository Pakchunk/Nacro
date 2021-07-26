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

// Function Sign_Durrr_4.Sign_Durrr_3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASign_Durrr_3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Durrr_4.Sign_Durrr_3_C.UserConstructionScript");

	ASign_Durrr_3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
