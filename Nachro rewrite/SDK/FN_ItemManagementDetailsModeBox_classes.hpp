#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C
// 0x0020 (0x0450 - 0x0430)
class UItemManagementDetailsModeBox_C : public UFortItemDetailsModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UHorizontalTabList_C*                        DetailPanelTabList;                                       // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    ItemSelected;                                             // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                NoSelectionDetailsBox;                                    // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C");
		return ptr;
	}


	void UnbindEvents();
	void RefreshTransferAction();
	void HandleTransfer(bool* PassThrough);
	void RegisterTransfer();
	void RegisterInspectUpgrade();
	void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex);
	void RegisterLeaveInventory();
	void RefreshMulchAction();
	void HandleInputMethodChanged(bool UsingGamepad);
	void HandleCraftAndSlot(bool* PassThrough);
	void RegisterCraftAndSlot();
	void RefreshCraftActions();
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved);
	void RegisterInventoryInspect();
	void SetTabStyling(class UObject* Object);
	void SetItemVisualization();
	void UpdateConsumeItemButtonState();
	void SetupDetailPanels();
	void HandleEquip(bool* PassThrough);
	void RegisterEquip();
	void HandleTrack(bool* PassThrough);
	void RegisterTrack();
	void RegisterCompare();
	void RegisterConsumeItem();
	void RegisterSort(bool InGame);
	void RegisterBack();
	void RegisterInspect();
	void RegisterRetire();
	void RegisterMulch();
	void RegisterCraft();
	void RegisterDrop();
	void HandleDrop(bool* PassThrough);
	void ShowSelection();
	void HandleCraft(bool* PassThrough);
	void HandleConsumeItem(bool* PassThrough);
	void TrySetupInputHandling();
	void HandleSort(bool* PassThrough);
	void HandleMulch(bool* PassThrough);
	void HandleCompare(bool* PassThrough);
	void HandleInspect(bool* PassThrough);
	void HandleClose(bool* PassThrough);
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void HandleDifferentItemToDetailSetBP();
	void OnActivated();
	void BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleConsumeItemProgressChangedBP();
	void BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void OnDeactivated();
	void Construct();
	void ExecuteUbergraph_ItemManagementDetailsModeBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
