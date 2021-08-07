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

// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegacyAlterationGroup_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.Construct");

	ULegacyAlterationGroup_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIAlteration*      AlterationInfo                 (Parm)

void ULegacyAlterationGroup_Widget_C::OnGenerateAlteration(struct FFortUIAlteration* AlterationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.OnGenerateAlteration");

	ULegacyAlterationGroup_Widget_C_OnGenerateAlteration_Params params;
	params.AlterationInfo = AlterationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.ExecuteUbergraph_LegacyAlterationGroup_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyAlterationGroup_Widget_C::ExecuteUbergraph_LegacyAlterationGroup_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.ExecuteUbergraph_LegacyAlterationGroup_Widget");

	ULegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
