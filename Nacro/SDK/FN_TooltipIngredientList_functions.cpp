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

// Function TooltipIngredientList.TooltipIngredientList_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltipIngredientList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipIngredientList.TooltipIngredientList_C.Refresh");

	UTooltipIngredientList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipIngredientList.TooltipIngredientList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipIngredientList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipIngredientList.TooltipIngredientList_C.Construct");

	UTooltipIngredientList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipIngredientList.TooltipIngredientList_C.ExecuteUbergraph_TooltipIngredientList
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTooltipIngredientList_C::ExecuteUbergraph_TooltipIngredientList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipIngredientList.TooltipIngredientList_C.ExecuteUbergraph_TooltipIngredientList");

	UTooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
