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

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Get Utc Now Offset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimespan UBP_FortExpeditionOverviewWidget_C::Get_Utc_Now_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Get Utc Now Offset");

	UBP_FortExpeditionOverviewWidget_C_Get_Utc_Now_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set List Sort Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortExpeditionListSort        InSortType                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Set_List_Sort_Type(EFortExpeditionListSort InSortType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set List Sort Type");

	UBP_FortExpeditionOverviewWidget_C_Set_List_Sort_Type_Params params;
	params.InSortType = InSortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Should Disable Build Expedition Action
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Should_Disable_Build_Expedition_Action(class UFortExpeditionItem* Expedition, bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Should Disable Build Expedition Action");

	UBP_FortExpeditionOverviewWidget_C_Should_Disable_Build_Expedition_Action_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Build Expedition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Try_to_Build_Expedition(class UFortExpeditionItem* Expedition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Build Expedition");

	UBP_FortExpeditionOverviewWidget_C_Try_to_Build_Expedition_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Abandon Expedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Try_to_Abandon_Expedition(class UFortExpeditionItem* Expedition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Abandon Expedition");

	UBP_FortExpeditionOverviewWidget_C_Try_to_Abandon_Expedition_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Active Input For Selected Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     InputObject                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Update_Active_Input_For_Selected_Item(class UFortExpeditionItem* InputObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Active Input For Selected Item");

	UBP_FortExpeditionOverviewWidget_C_Update_Active_Input_For_Selected_Item_Params params;
	params.InputObject = InputObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Details Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::Update_Details_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Details Visibility");

	UBP_FortExpeditionOverviewWidget_C_Update_Details_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update List View Area
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::Update_List_View_Area()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update List View Area");

	UBP_FortExpeditionOverviewWidget_C_Update_List_View_Area_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleCollectExpeditionAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::HandleCollectExpeditionAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleCollectExpeditionAction");

	UBP_FortExpeditionOverviewWidget_C_HandleCollectExpeditionAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpeditionAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::HandleAbandonExpeditionAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpeditionAction");

	UBP_FortExpeditionOverviewWidget_C_HandleAbandonExpeditionAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleBuildExpeditionAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::HandleBuildExpeditionAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleBuildExpeditionAction");

	UBP_FortExpeditionOverviewWidget_C_HandleBuildExpeditionAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Determine Active Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Determine_Active_Input_Action(class UFortExpeditionItem* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Determine Active Input Action");

	UBP_FortExpeditionOverviewWidget_C_Determine_Active_Input_Action_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Hide All Input Actions
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::Hide_All_Input_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Hide All Input Actions");

	UBP_FortExpeditionOverviewWidget_C_Hide_All_Input_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set Current Tab Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Set_Current_Tab_Name(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set Current Tab Name");

	UBP_FortExpeditionOverviewWidget_C_Set_Current_Tab_Name_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.On Widget Activated
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::On_Widget_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.On Widget Activated");

	UBP_FortExpeditionOverviewWidget_C_On_Widget_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.FireCollectCompletedExpedition
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::FireCollectCompletedExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.FireCollectCompletedExpedition");

	UBP_FortExpeditionOverviewWidget_C_FireCollectCompletedExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Setup Expedition Details Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::Setup_Expedition_Details_Widget(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Setup Expedition Details Widget");

	UBP_FortExpeditionOverviewWidget_C_Setup_Expedition_Details_Widget_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Construct");

	UBP_FortExpeditionOverviewWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionTabSelected
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  TabNameID                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::OnExpeditionTabSelected(struct FName* TabNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionTabSelected");

	UBP_FortExpeditionOverviewWidget_C_OnExpeditionTabSelected_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpedition
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::HandleAbandonExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpedition");

	UBP_FortExpeditionOverviewWidget_C_HandleAbandonExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature");

	UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Destruct");

	UBP_FortExpeditionOverviewWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionOverviewRefresh
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::OnExpeditionOverviewRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionOverviewRefresh");

	UBP_FortExpeditionOverviewWidget_C_OnExpeditionOverviewRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature");

	UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleOnListViewRefreshed
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::HandleOnListViewRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleOnListViewRefreshed");

	UBP_FortExpeditionOverviewWidget_C_HandleOnListViewRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature");

	UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature");

	UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.ExecuteUbergraph_BP_FortExpeditionOverviewWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionOverviewWidget_C::ExecuteUbergraph_BP_FortExpeditionOverviewWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.ExecuteUbergraph_BP_FortExpeditionOverviewWidget");

	UBP_FortExpeditionOverviewWidget_C_ExecuteUbergraph_BP_FortExpeditionOverviewWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnCollectCompletedExpedition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionOverviewWidget_C::OnCollectCompletedExpedition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnCollectCompletedExpedition__DelegateSignature");

	UBP_FortExpeditionOverviewWidget_C_OnCollectCompletedExpedition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
