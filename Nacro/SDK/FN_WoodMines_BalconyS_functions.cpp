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

// Function WoodMines_BalconyS.WoodMines_BalconyS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWoodMines_BalconyS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodMines_BalconyS.WoodMines_BalconyS_C.UserConstructionScript");

	AWoodMines_BalconyS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
