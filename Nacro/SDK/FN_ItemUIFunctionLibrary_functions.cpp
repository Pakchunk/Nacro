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

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Min_Fractional_Digits          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max_Fractional_Digits          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Formatted_Value                (Parm, OutParm)

void UItemUIFunctionLibrary_C::STATIC_Truncate_Integer_Value(int Value, int Min_Fractional_Digits, int Max_Fractional_Digits, class UObject* __WorldContext, struct FText* Formatted_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value");

	UItemUIFunctionLibrary_C_Truncate_Integer_Value_Params params;
	params.Value = Value;
	params.Min_Fractional_Digits = Min_Fractional_Digits;
	params.Max_Fractional_Digits = Max_Fractional_Digits;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted_Value != nullptr)
		*Formatted_Value = params.Formatted_Value;
}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EFortItemTier>     Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Numeric_Tier                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemUIFunctionLibrary_C::STATIC_Convert_Tier_To_Integer(TEnumAsByte<EFortItemTier> Tier, class UObject* __WorldContext, int* Numeric_Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer");

	UItemUIFunctionLibrary_C_Convert_Tier_To_Integer_Params params;
	params.Tier = Tier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Numeric_Tier != nullptr)
		*Numeric_Tier = params.Numeric_Tier;
}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            outInt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemUIFunctionLibrary_C::STATIC_ParseLevelRequiredFromString(const struct FString& inString, class UObject* __WorldContext, int* outInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString");

	UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params params;
	params.inString = inString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outInt != nullptr)
		*outInt = params.outInt;
}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            Host_Widget                    (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviewLevel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowInVaultDetails             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemUIFunctionLibrary_C::STATIC_Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets");

	UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params params;
	params.Host_Widget = Host_Widget;
	params.Item = Item;
	params.PreviewLevel = PreviewLevel;
	params.ShowInVaultDetails = ShowInVaultDetails;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
