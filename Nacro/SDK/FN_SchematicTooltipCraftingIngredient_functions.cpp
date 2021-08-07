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

// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Get Tooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* USchematicTooltipCraftingIngredient_C::Get_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Get Tooltip");

	USchematicTooltipCraftingIngredient_C_Get_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USchematicTooltipCraftingIngredient_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Refresh");

	USchematicTooltipCraftingIngredient_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USchematicTooltipCraftingIngredient_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.Construct");

	USchematicTooltipCraftingIngredient_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.ExecuteUbergraph_SchematicTooltipCraftingIngredient
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USchematicTooltipCraftingIngredient_C::ExecuteUbergraph_SchematicTooltipCraftingIngredient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SchematicTooltipCraftingIngredient.SchematicTooltipCraftingIngredient_C.ExecuteUbergraph_SchematicTooltipCraftingIngredient");

	USchematicTooltipCraftingIngredient_C_ExecuteUbergraph_SchematicTooltipCraftingIngredient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
