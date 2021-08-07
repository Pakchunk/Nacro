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

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Text_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Icon_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UTooltip_Item_C::Get_Theme_Color__Normal_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]");

	UTooltip_Item_C_Get_Theme_Color__Normal__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTooltip_Item_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush");

	UTooltip_Item_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltip_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Construct");

	UTooltip_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTooltip_Item_C::ExecuteUbergraph_Tooltip_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item");

	UTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
