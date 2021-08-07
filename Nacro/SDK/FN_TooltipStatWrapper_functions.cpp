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

// Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UTooltipStatWrapper_C::ShowUpgradeArrow(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow");

	UTooltipStatWrapper_C_ShowUpgradeArrow_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWrapper.TooltipStatWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipStatWrapper_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWrapper.TooltipStatWrapper_C.Construct");

	UTooltipStatWrapper_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTooltipStatWrapper_C::ExecuteUbergraph_TooltipStatWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper");

	UTooltipStatWrapper_C_ExecuteUbergraph_TooltipStatWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
