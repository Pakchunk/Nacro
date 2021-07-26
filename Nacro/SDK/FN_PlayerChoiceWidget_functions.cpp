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

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.CreateButtonAndSetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChoiceDataEntry        ChoiceData                     (Parm)
// int                            ChoiceID                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerChoiceButtonWidget_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayerChoiceButtonWidget_C* UPlayerChoiceWidget_C::CreateButtonAndSetText(const struct FChoiceDataEntry& ChoiceData, int ChoiceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.CreateButtonAndSetText");

	UPlayerChoiceWidget_C_CreateButtonAndSetText_Params params;
	params.ChoiceData = ChoiceData;
	params.ChoiceID = ChoiceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerChoiceWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.GetText_1");

	UPlayerChoiceWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice3_Text_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPlayerChoiceWidget_C::Get_TextBlock_Choice3_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice3_Text_1");

	UPlayerChoiceWidget_C_Get_TextBlock_Choice3_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice2_Text_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPlayerChoiceWidget_C::Get_TextBlock_Choice2_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice2_Text_1");

	UPlayerChoiceWidget_C_Get_TextBlock_Choice2_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice1_Text_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPlayerChoiceWidget_C::Get_TextBlock_Choice1_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice1_Text_1");

	UPlayerChoiceWidget_C_Get_TextBlock_Choice1_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerChoiceWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.Construct");

	UPlayerChoiceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ChoiceSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChoiceID                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChoiceWidget_C::ChoiceSelected(int ChoiceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.ChoiceSelected");

	UPlayerChoiceWidget_C_ChoiceSelected_Params params;
	params.ChoiceID = ChoiceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SetChoices
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChoiceData*            ChoiceItems                    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerChoiceWidget_C::SetChoices(struct FChoiceData* ChoiceItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.SetChoices");

	UPlayerChoiceWidget_C_SetChoices_Params params;
	params.ChoiceItems = ChoiceItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerChoiceWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.Destruct");

	UPlayerChoiceWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ExecuteUbergraph_PlayerChoiceWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChoiceWidget_C::ExecuteUbergraph_PlayerChoiceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.ExecuteUbergraph_PlayerChoiceWidget");

	UPlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SurvivorStoryChoiceSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedChoice                 (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerChoiceWidget_C::SurvivorStoryChoiceSelected__DelegateSignature(int SelectedChoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceWidget.PlayerChoiceWidget_C.SurvivorStoryChoiceSelected__DelegateSignature");

	UPlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature_Params params;
	params.SelectedChoice = SelectedChoice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
