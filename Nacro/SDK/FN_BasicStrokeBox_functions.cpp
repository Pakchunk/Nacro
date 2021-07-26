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

// Function BasicStrokeBox.BasicStrokeBox_C.Customize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Shape_Style                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Fill_Color                     (Parm, IsPlainOldData)
// struct FLinearColor            Stroke_Color                   (Parm, IsPlainOldData)

void UBasicStrokeBox_C::Customize(int Shape_Style, const struct FLinearColor& Fill_Color, const struct FLinearColor& Stroke_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.Customize");

	UBasicStrokeBox_C_Customize_Params params;
	params.Shape_Style = Shape_Style;
	params.Fill_Color = Fill_Color;
	params.Stroke_Color = Stroke_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
// (Public, BlueprintCallable, BlueprintEvent)

void UBasicStrokeBox_C::Redraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.Redraw");

	UBasicStrokeBox_C_Redraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UBasicStrokeBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct");

	UBasicStrokeBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBasicStrokeBox_C::ExecuteUbergraph_BasicStrokeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox");

	UBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
