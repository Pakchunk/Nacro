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

// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::UpdateLoginStatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.UpdateLoginStatusText");

	UStatusWidget_C_UpdateLoginStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.SetStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Status                         (Parm)

void UStatusWidget_C::SetStatusText(const struct FText& Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetStatusText");

	UStatusWidget_C_SetStatusText_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (Parm)

void UStatusWidget_C::SetTitleText(const struct FText& TitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetTitleText");

	UStatusWidget_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Construct");

	UStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Destruct");

	UStatusWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget");

	UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
