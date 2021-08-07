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

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumAvailableSlots              (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::Update_Available_Slots_Widget(int NumAvailableSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget");

	UCollectionBookPageListWidget_C_Update_Available_Slots_Widget_Params params;
	params.NumAvailableSlots = NumAvailableSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsBorderColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors");

	UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory** Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::SetupAsCategory(class UFortCollectionBookCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory");

	UCollectionBookPageListWidget_C_SetupAsCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage** Page                           (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::SetupAsPage(class UFortCollectionBookPage** Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage");

	UCollectionBookPageListWidget_C_SetupAsPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bExpanded                      (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnExpansionChanged(bool* bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged");

	UCollectionBookPageListWidget_C_OnExpansionChanged_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct");

	UCollectionBookPageListWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           NumAvailableSlots              (Parm, ZeroConstructor, IsPlainOldData)
// EFortCollectionBookState*      State                          (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnPageDetailsUpdated(int* NumAvailableSlots, EFortCollectionBookState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated");

	UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params params;
	params.NumAvailableSlots = NumAvailableSlots;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           ThisButton                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged");

	UCollectionBookPageListWidget_C_OnSelectionChanged_Params params;
	params.ThisButton = ThisButton;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::ExecuteUbergraph_CollectionBookPageListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget");

	UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
