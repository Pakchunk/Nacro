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

// Function Office_Desk_02.Office_Desk_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice_Desk_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_Desk_02.Office_Desk_02_C.UserConstructionScript");

	AOffice_Desk_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
