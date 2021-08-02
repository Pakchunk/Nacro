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

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetCooldownMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* CooldownMat                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemCooldownMeter_C::GetCooldownMaterial(class UMaterialInstanceDynamic** CooldownMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.GetCooldownMaterial");

	UItemCooldownMeter_C_GetCooldownMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CooldownMat != nullptr)
		*CooldownMat = params.CooldownMat;
}


// Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Minutes                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemCooldownMeter_C::GetSecondsCorrectedMinutes(int Minutes, int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes");

	UItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params params;
	params.Minutes = Minutes;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               Time_Left                      (Parm)

void UItemCooldownMeter_C::Set_Cooldown(const struct FTimespan& Time_Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown");

	UItemCooldownMeter_C_Set_Cooldown_Params params;
	params.Time_Left = Time_Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCooldownMeter.ItemCooldownMeter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemCooldownMeter_C::Update(TEnumAsByte<EFortBrushSize> Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.Update");

	UItemCooldownMeter_C_Update_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
