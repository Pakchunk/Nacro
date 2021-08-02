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

// Function LCD_JunkPile_01a.LCD_JunkPile_01a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALCD_JunkPile_01a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_JunkPile_01a.LCD_JunkPile_01a_C.UserConstructionScript");

	ALCD_JunkPile_01a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
