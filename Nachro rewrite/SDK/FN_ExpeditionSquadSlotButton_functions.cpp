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

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Send to Skill Tree
// (Public, BlueprintCallable, BlueprintEvent)

void UExpeditionSquadSlotButton_C::Send_to_Skill_Tree()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Send to Skill Tree");

	UExpeditionSquadSlotButton_C_Send_to_Skill_Tree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OutSquadId                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutSquadSlotIndex              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<EFortItemType>          ItemTypes                      (Parm, OutParm, ZeroConstructor)

void UExpeditionSquadSlotButton_C::Get_Squad_Data(struct FName* OutSquadId, int* OutSquadSlotIndex, TArray<EFortItemType>* ItemTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data");

	UExpeditionSquadSlotButton_C_Get_Squad_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquadId != nullptr)
		*OutSquadId = params.OutSquadId;
	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = params.OutSquadSlotIndex;
	if (ItemTypes != nullptr)
		*ItemTypes = params.ItemTypes;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UExpeditionSquadSlotButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct");

	UExpeditionSquadSlotButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnClicked");

	UExpeditionSquadSlotButton_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated
// (Event, Public, BlueprintEvent)

void UExpeditionSquadSlotButton_C::SquadSlotWidgetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated");

	UExpeditionSquadSlotButton_C_SquadSlotWidgetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void UExpeditionSquadSlotButton_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP");

	UExpeditionSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnDoubleClicked
// (Event, Protected, BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnDoubleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnDoubleClicked");

	UExpeditionSquadSlotButton_C_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected");

	UExpeditionSquadSlotButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExpeditionSquadSlotButton_C::ExecuteUbergraph_ExpeditionSquadSlotButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton");

	UExpeditionSquadSlotButton_C_ExecuteUbergraph_ExpeditionSquadSlotButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnSquadSlotOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature");

	UExpeditionSquadSlotButton_C_OnSquadSlotOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UExpeditionSquadSlotButton_C::OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature");

	UExpeditionSquadSlotButton_C_OnSquadSlotUpdated__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UExpeditionSquadSlotButton_C::OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature");

	UExpeditionSquadSlotButton_C_OnSquadSlotSelected__DelegateSignature_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
