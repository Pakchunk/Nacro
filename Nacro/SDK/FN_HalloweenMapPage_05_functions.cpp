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

// Function HalloweenMapPage_05.HalloweenMapPage_05_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHalloweenMapPage_05_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenMapPage_05.HalloweenMapPage_05_C.Construct");

	UHalloweenMapPage_05_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenMapPage_05.HalloweenMapPage_05_C.ExecuteUbergraph_HalloweenMapPage_05
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHalloweenMapPage_05_C::ExecuteUbergraph_HalloweenMapPage_05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenMapPage_05.HalloweenMapPage_05_C.ExecuteUbergraph_HalloweenMapPage_05");

	UHalloweenMapPage_05_C_ExecuteUbergraph_HalloweenMapPage_05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
