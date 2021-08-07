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

// Function Prop_Sign_BacklitMenu_02.Prop_Sign_BacklitMenu_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_Sign_BacklitMenu_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Sign_BacklitMenu_02.Prop_Sign_BacklitMenu_02_C.UserConstructionScript");

	AProp_Sign_BacklitMenu_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
