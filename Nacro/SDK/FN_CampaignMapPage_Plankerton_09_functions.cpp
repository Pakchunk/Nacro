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

// Function CampaignMapPage_Plankerton_09.CampaignMapPage_Plankerton_09_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignMapPage_Plankerton_09_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapPage_Plankerton_09.CampaignMapPage_Plankerton_09_C.Construct");

	UCampaignMapPage_Plankerton_09_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapPage_Plankerton_09.CampaignMapPage_Plankerton_09_C.ExecuteUbergraph_CampaignMapPage_Plankerton_09
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapPage_Plankerton_09_C::ExecuteUbergraph_CampaignMapPage_Plankerton_09(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapPage_Plankerton_09.CampaignMapPage_Plankerton_09_C.ExecuteUbergraph_CampaignMapPage_Plankerton_09");

	UCampaignMapPage_Plankerton_09_C_ExecuteUbergraph_CampaignMapPage_Plankerton_09_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
