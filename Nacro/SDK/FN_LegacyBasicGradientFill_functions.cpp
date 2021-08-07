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

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Brush_Size                     (Parm, IsPlainOldData)

void ULegacyBasicGradientFill_C::Set_Brush_Size(const struct FVector2D& Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size");

	ULegacyBasicGradientFill_C_Set_Brush_Size_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color_1                        (Parm, IsPlainOldData)
// struct FLinearColor            Color_2                        (Parm, IsPlainOldData)
// float                          Rotation__0___1_               (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyBasicGradientFill_C::Set_Fill(const struct FLinearColor& Color_1, const struct FLinearColor& Color_2, float Rotation__0___1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill");

	ULegacyBasicGradientFill_C_Set_Fill_Params params;
	params.Color_1 = Color_1;
	params.Color_2 = Color_2;
	params.Rotation__0___1_ = Rotation__0___1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyBasicGradientFill_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct");

	ULegacyBasicGradientFill_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyBasicGradientFill_C::ExecuteUbergraph_LegacyBasicGradientFill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill");

	ULegacyBasicGradientFill_C_ExecuteUbergraph_LegacyBasicGradientFill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
