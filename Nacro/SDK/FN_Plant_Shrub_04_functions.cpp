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

// Function Plant_Shrub_04.Plant_Shrub_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlant_Shrub_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_04.Plant_Shrub_04_C.UserConstructionScript");

	APlant_Shrub_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
