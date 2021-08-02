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

// Function CampaignMapPage_Stonewood_04.CampaignMapPage_Stonewood_04_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignMapPage_Stonewood_04_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapPage_Stonewood_04.CampaignMapPage_Stonewood_04_C.Construct");

	UCampaignMapPage_Stonewood_04_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapPage_Stonewood_04.CampaignMapPage_Stonewood_04_C.ExecuteUbergraph_CampaignMapPage_Stonewood_04
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCampaignMapPage_Stonewood_04_C::ExecuteUbergraph_CampaignMapPage_Stonewood_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignMapPage_Stonewood_04.CampaignMapPage_Stonewood_04_C.ExecuteUbergraph_CampaignMapPage_Stonewood_04");

	UCampaignMapPage_Stonewood_04_C_ExecuteUbergraph_CampaignMapPage_Stonewood_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
