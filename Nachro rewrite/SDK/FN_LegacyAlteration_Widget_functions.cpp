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

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyAlteration_Widget_C::InitSmallAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration");

	ULegacyAlteration_Widget_C_InitSmallAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyAlteration_Widget_C::InitFullAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration");

	ULegacyAlteration_Widget_C_InitFullAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULegacyAlteration_Widget_C::ShouldFadeAlteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration");

	ULegacyAlteration_Widget_C_ShouldFadeAlteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ULegacyAlteration_Widget_C::GetHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor");

	ULegacyAlteration_Widget_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegacyAlteration_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct");

	ULegacyAlteration_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyAlteration_Widget_C::ExecuteUbergraph_LegacyAlteration_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget");

	ULegacyAlteration_Widget_C_ExecuteUbergraph_LegacyAlteration_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
