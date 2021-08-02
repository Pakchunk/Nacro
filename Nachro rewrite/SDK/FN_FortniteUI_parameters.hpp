#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FortniteUI.FortItemWidget_NUI.SetItemViewContext
struct UFortItemWidget_NUI_SetItemViewContext_Params
{
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget_NUI.SetItemToRepresent
struct UFortItemWidget_NUI_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeItemCard.ShouldUseNewItemCards
struct UFortMultiSizeItemCard_ShouldUseNewItemCards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeItemCard.SetShouldDisplayItemAsReward
struct UFortMultiSizeItemCard_SetShouldDisplayItemAsReward_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeItemCard.SetShouldCollapseBorderPadding
struct UFortMultiSizeItemCard_SetShouldCollapseBorderPadding_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeItemCard.SetQuantityOverride
struct UFortMultiSizeItemCard_SetQuantityOverride_Params
{
	int                                                QuantityOverride;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeItemCard.SetCardSize
struct UFortMultiSizeItemCard_SetCardSize_Params
{
	EFortItemCardSize                                  CardSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeItemCard.GetCardSize
struct UFortMultiSizeItemCard_GetCardSize_Params
{
	EFortItemCardSize                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.AthenaCustomizationSlotBase.SetIdOfSquadSlotToManageBP
struct UAthenaCustomizationSlotBase_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaCustomizationSlotBase.SetCardSize
struct UAthenaCustomizationSlotBase_SetCardSize_Params
{
	EFortItemCardSize                                  CardSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaCustomizationSlotBase.IsSquadSlotLockedBP
struct UAthenaCustomizationSlotBase_IsSquadSlotLockedBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.AthenaCustomizationSlotBase.GetItemInSquadSlotBP
struct UAthenaCustomizationSlotBase_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.AthenaCustomizationSlotBase.GetIdOfSquadSlotToManageBP
struct UAthenaCustomizationSlotBase_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCardBase.PortBrushSize
struct UFortItemCardBase_PortBrushSize_Params
{
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EFortItemCardSize                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.TryCommitSelectedItem
struct UFortItemPickerBase_TryCommitSelectedItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.SetSelectedItem
struct UFortItemPickerBase_SetSelectedItem_Params
{
	class UFortItem*                                   ItemToSelect;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.SetSelectedIndex
struct UFortItemPickerBase_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortItemPickerBase.OnItemSelectionEvent__DelegateSignature
struct UFortItemPickerBase_OnItemSelectionEvent__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.HandlePickerTileDestroyed
struct UFortItemPickerBase_HandlePickerTileDestroyed_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.HandlePickerTileCreated
struct UFortItemPickerBase_HandlePickerTileCreated_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.HandlePickerItemSelected
struct UFortItemPickerBase_HandlePickerItemSelected_Params
{
	class UObject*                                     ObjectWhoseSelectionChanged;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.HandlePickerItemHovered
struct UFortItemPickerBase_HandlePickerItemHovered_Params
{
	class UObject*                                     ObjectOfHoveredTile;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.HandlePickerItemDoubleClicked
struct UFortItemPickerBase_HandlePickerItemDoubleClicked_Params
{
	class UObject*                                     ObjectOfClickedTile;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.HandlePickerItemClicked
struct UFortItemPickerBase_HandlePickerItemClicked_Params
{
	class UObject*                                     ObjectOfClickedTile;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.GetSelectedItem
struct UFortItemPickerBase_GetSelectedItem_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.GetIndexForItem
struct UFortItemPickerBase_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemPickerBase.ClearSelection
struct UFortItemPickerBase_ClearSelection_Params
{
};

// Function FortniteUI.FortItemPickerBase.CenterSelectedItemTileWidget
struct UFortItemPickerBase_CenterSelectedItemTileWidget_Params
{
};

// Function FortniteUI.FortItemPickerBase.CanItemBeComitted
struct UFortItemPickerBase_CanItemBeComitted_Params
{
	class UFortItem*                                   ItemToCommit;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction FortniteUI.AthenaCustomizationPicker.OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationPicker_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
};

// Function FortniteUI.AthenaCustomizationPicker.EndCustomizationCategory
struct UAthenaCustomizationPicker_EndCustomizationCategory_Params
{
};

// Function FortniteUI.AthenaCustomizationPicker.BeginCustomizationCategory
struct UAthenaCustomizationPicker_BeginCustomizationCategory_Params
{
	EAthenaCustomizationCategory                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDContext.SetSelectedInventoryItem
struct UAthenaHUDContext_SetSelectedInventoryItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDContext.HandleUIGameplayCue
struct UAthenaHUDContext_HandleUIGameplayCue_Params
{
	struct FName                                       CueName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.AthenaHUDContext.HandleLocalPlayerDBNOStateChanged
struct UAthenaHUDContext_HandleLocalPlayerDBNOStateChanged_Params
{
	bool                                               bIsDBNO;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDContext.GetSelectedInventoryItem
struct UAthenaHUDContext_GetSelectedInventoryItem_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDElementWidget.HandleOnHUDElementVisibilityChanged
struct UFortHUDElementWidget_HandleOnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.AthenaMatchReadyDesktopPopup.UserDismissedDialog
struct UAthenaMatchReadyDesktopPopup_UserDismissedDialog_Params
{
	bool                                               bBringToFront;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.CMSContext.MarkNewsAsViewed
struct UCMSContext_MarkNewsAsViewed_Params
{
};

// Function FortniteUI.CMSContext.IsNewNewsAvailable
struct UCMSContext_IsNewNewsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.CMSContext.GetLatestNews
struct UCMSContext_GetLatestNews_Params
{
	struct FAthenaNews                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
struct UFortAbilitySystemContext_RemoveDelegatesFromWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortAbilitySystemContext.RegisterForAttributeChanged
struct UFortAbilitySystemContext_RegisterForAttributeChanged_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortAccountStatsContext.CanShowAccountStats
struct UFortAccountStatsContext_CanShowAccountStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAccountWidgetBase.OnAccountInfoChanged
struct UFortAccountWidgetBase_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo                      Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortAccountWidgetBase.HandleCurrentlyViewedAccountInfoChanged
struct UFortAccountWidgetBase_HandleCurrentlyViewedAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (Parm)
};

// Function FortniteUI.FortAccountWidgetBase.GetNextSeasonReward
struct UFortAccountWidgetBase_GetNextSeasonReward_Params
{
	struct FFortItemInstanceQuantityPair               Reward;                                                   // (Parm, OutParm)
	int                                                RewardLevel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAccountWidgetBase.GetNextSeasonChaseReward
struct UFortAccountWidgetBase_GetNextSeasonChaseReward_Params
{
	struct FFortItemInstanceQuantityPair               Reward;                                                   // (Parm, OutParm)
	int                                                RewardLevel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortActivatablePanel.RestoreScrollWidget
struct UFortActivatablePanel_RestoreScrollWidget_Params
{
	class UWidget*                                     FallbackWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortActivatablePanel.RestoreCenterWidget
struct UFortActivatablePanel_RestoreCenterWidget_Params
{
	class UWidget*                                     FallbackWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemTileView.ShowNullItemTile
struct UFortItemTileView_ShowNullItemTile_Params
{
};

// Function FortniteUI.FortItemTileView.SetSorter
struct UFortItemTileView_SetSorter_Params
{
	struct FFortItemSorterDefinition                   Sorter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortItemTileView.SetItemViewContext
struct UFortItemTileView_SetItemViewContext_Params
{
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemTileView.SetFilterAndSorter
struct UFortItemTileView_SetFilterAndSorter_Params
{
	struct FFortItemFilterDefinition                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortItemSorterDefinition                   Sorter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortItemTileView.SetFilter
struct UFortItemTileView_SetFilter_Params
{
	struct FFortItemFilterDefinition                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortItemTileView.RefreshSort
struct UFortItemTileView_RefreshSort_Params
{
};

// Function FortniteUI.FortItemTileView.RefreshFilterAndSort
struct UFortItemTileView_RefreshFilterAndSort_Params
{
};

// DelegateFunction FortniteUI.FortItemTileView.OnInventoryUpdated__DelegateSignature
struct UFortItemTileView_OnInventoryUpdated__DelegateSignature_Params
{
};

// Function FortniteUI.FortItemTileView.HideNullItemTile
struct UFortItemTileView_HideNullItemTile_Params
{
};

// Function FortniteUI.FortItemTileView.HandleItemWidgetCreated
struct UFortItemTileView_HandleItemWidgetCreated_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemTileView.ContainsItem
struct UFortItemTileView_ContainsItem_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemTileView.CenterSelectedItemTileWidget
struct UFortItemTileView_CenterSelectedItemTileWidget_Params
{
};

// Function FortniteUI.FortTabButtonInterface.SetTabLabelInfo
struct UFortTabButtonInterface_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortTabListWidgetBase.SetPreviousTabInputActionData
struct UFortTabListWidgetBase_SetPreviousTabInputActionData_Params
{
	struct FDataTableRowHandle                         PreviousData;                                             // (Parm)
};

// Function FortniteUI.FortTabListWidgetBase.SetNextTabInputActionData
struct UFortTabListWidgetBase_SetNextTabInputActionData_Params
{
	struct FDataTableRowHandle                         NextData;                                                 // (Parm)
};

// Function FortniteUI.FortTabListWidgetBase.RegisterFortTab
struct UFortTabListWidgetBase_RegisterFortTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TabButtonType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortTabButtonLabelInfo                     LabelInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWidget*                                     ContentWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTabListWidgetBase.RegisterAllPreregisteredTabInfos
struct UFortTabListWidgetBase_RegisterAllPreregisteredTabInfos_Params
{
};

// DelegateFunction FortniteUI.FortTabListWidgetBase.OnTabContentCreated__DelegateSignature
struct UFortTabListWidgetBase_OnTabContentCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonUserWidget*                           TabWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortTabListWidgetBase.IsLastTabActive
struct UFortTabListWidgetBase_IsLastTabActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTabListWidgetBase.IsFirstTabActive
struct UFortTabListWidgetBase_IsFirstTabActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTabListWidgetBase.GetPreregisteredTabInfo
struct UFortTabListWidgetBase_GetPreregisteredTabInfo_Params
{
	struct FName                                       TabNameID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortTabListRegistrationInfo                OutTabInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.SetSortType
struct UAthenaInventoryPanelBase_SetSortType_Params
{
	EInventoryContentSortType                          SortType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.RequestEquip
struct UAthenaInventoryPanelBase_RequestEquip_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.OnInventoryItemSelected
struct UAthenaInventoryPanelBase_OnInventoryItemSelected_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleResourceItemDoubleClicked
struct UAthenaInventoryPanelBase_HandleResourceItemDoubleClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleQuickBarChangedBP
struct UAthenaInventoryPanelBase_HandleQuickBarChangedBP_Params
{
	EFortQuickBars                                     QuickBarType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleItemWidgetCreated
struct UAthenaInventoryPanelBase_HandleItemWidgetCreated_Params
{
	class UUserWidget*                                 ItemWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryUpdatedEvent
struct UAthenaInventoryPanelBase_HandleInventoryUpdatedEvent_Params
{
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemSelected
struct UAthenaInventoryPanelBase_HandleInventoryItemSelected_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemHovered
struct UAthenaInventoryPanelBase_HandleInventoryItemHovered_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemDoubleClicked
struct UAthenaInventoryPanelBase_HandleInventoryItemDoubleClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleInventoryItemClicked
struct UAthenaInventoryPanelBase_HandleInventoryItemClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleDifferentSortTypeSetBP
struct UAthenaInventoryPanelBase_HandleDifferentSortTypeSetBP_Params
{
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleCursorModeChangedBP
struct UAthenaInventoryPanelBase_HandleCursorModeChangedBP_Params
{
	bool                                               bCursorModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.HandleCursorModeChanged
struct UAthenaInventoryPanelBase_HandleCursorModeChanged_Params
{
	bool                                               bCursorModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.AthenaInventoryPanelBase.GetSupportedSortTypesForCurrentInventory
struct UAthenaInventoryPanelBase_GetSupportedSortTypesForCurrentInventory_Params
{
	TArray<EInventoryContentSortType>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.AthenaInventoryPanelBase.CycleSortType
struct UAthenaInventoryPanelBase_CycleSortType_Params
{
};

// Function FortniteUI.AthenaInventoryPanelBase.AdvanceSelection
struct UAthenaInventoryPanelBase_AdvanceSelection_Params
{
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnUpdateTabButtonText
struct UAthenaLeaderboardScreenBase_OnUpdateTabButtonText_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAthenaPlaylistLeaderboardData              PlaylistTabData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnUpdateListHeader
struct UAthenaLeaderboardScreenBase_OnUpdateListHeader_Params
{
	struct FAthenaPlaylistLeaderboardData              PlaylistTabData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnUpdateLeaderboardListUI
struct UAthenaLeaderboardScreenBase_OnUpdateLeaderboardListUI_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortLeaderboardRowProxyInstance*            LocalUserRow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       QueryErrorStr;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnQueryStarted
struct UAthenaLeaderboardScreenBase_OnQueryStarted_Params
{
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnQueryFinished
struct UAthenaLeaderboardScreenBase_OnQueryFinished_Params
{
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnMatchTypeChanged
struct UAthenaLeaderboardScreenBase_OnMatchTypeChanged_Params
{
	int                                                MatchTypeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnFriendsFilterChanged
struct UAthenaLeaderboardScreenBase_OnFriendsFilterChanged_Params
{
	int                                                FriendsFilterIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaLeaderboardScreenBase.OnActiveLeaderboardTabChanged
struct UAthenaLeaderboardScreenBase_OnActiveLeaderboardTabChanged_Params
{
	int                                                ActiveWidgetIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaLeaderboardScreenBase.CanShowFriendsOnlyLeaderboard
struct UAthenaLeaderboardScreenBase_CanShowFriendsOnlyLeaderboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.AthenaLobbyBase.OnPlayerClicked
struct UAthenaLobbyBase_OnPlayerClicked_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaLobbyBase.OnNavigationRight
struct UAthenaLobbyBase_OnNavigationRight_Params
{
};

// Function FortniteUI.AthenaLobbyBase.OnNavigationLeft
struct UAthenaLobbyBase_OnNavigationLeft_Params
{
};

// Function FortniteUI.AthenaLobbyBase.OnEndCursorOverPlayer
struct UAthenaLobbyBase_OnEndCursorOverPlayer_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaLobbyBase.OnBeginCursorOverPlayer
struct UAthenaLobbyBase_OnBeginCursorOverPlayer_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaStatsScreenBase.OnTabSelected
struct UAthenaStatsScreenBase_OnTabSelected_Params
{
	struct FName                                       TabName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaStatsScreenBase.OnQueryStarted
struct UAthenaStatsScreenBase_OnQueryStarted_Params
{
};

// Function FortniteUI.AthenaStatsScreenBase.OnQueryFinished
struct UAthenaStatsScreenBase_OnQueryFinished_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaStatsScreenBase.GetWinsTag
struct UAthenaStatsScreenBase_GetWinsTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.AthenaStatsScreenBase.GetThirdTierPlaceTag
struct UAthenaStatsScreenBase_GetThirdTierPlaceTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.AthenaStatsScreenBase.GetStatValue
struct UAthenaStatsScreenBase_GetStatValue_Params
{
	struct FString                                     BaseGameplayTag;                                          // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.AthenaStatsScreenBase.GetStatGameplayTag
struct UAthenaStatsScreenBase_GetStatGameplayTag_Params
{
	struct FString                                     BaseStatName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.AthenaStatsScreenBase.GetSecondTierPlaceTag
struct UAthenaStatsScreenBase_GetSecondTierPlaceTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.AthenaStatsScreenBase.GetLastUpdateTime
struct UAthenaStatsScreenBase_GetLastUpdateTime_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.AthenaStatsScreenBase.FormatStatValueAsElapsedTime
struct UAthenaStatsScreenBase_FormatStatValueAsElapsedTime_Params
{
	struct FTimespan                                   ValueAsTimespan;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortAccountLinkingWindow.IsPurchaseFree
struct UFortAccountLinkingWindow_IsPurchaseFree_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_CheckHasRedeemForAccess.CheckHasRedeemForAccess
struct UFortAsyncAction_CheckHasRedeemForAccess_CheckHasRedeemForAccess_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_CheckHasRedeemForAccess*    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase.ShowPlatformStoreForPurchase
struct UFortAsyncAction_ShowPlatformStoreForPurchase_ShowPlatformStoreForPurchase_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_ShowPlatformStoreForPurchase* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowPlatformRedeemCode.ShowPlatformRedeemCode
struct UFortAsyncAction_ShowPlatformRedeemCode_ShowPlatformRedeemCode_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_ShowPlatformRedeemCode*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink.WebCreateEpicAccountAndLink
struct UFortAsyncAction_WebCreateEpicAccountAndLink_WebCreateEpicAccountAndLink_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_WebCreateEpicAccountAndLink* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_CreateHeadlessAccount.CreateHeadlessAccount
struct UFortAsyncAction_CreateHeadlessAccount_CreateHeadlessAccount_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_CreateHeadlessAccount*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
struct UFortCollectionBookProgressionRewardDetailInspectWidget_SetAssociatedLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
struct UFortCollectionBookProgressionRewardsModalWidget_OnSelectedButtonChanged_Params
{
	class UCommonButton*                               SelectedButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
struct UFortCollectionBookProgressionRewardsModalWidget_OnLevelProgressionSet_Params
{
	int                                                CurrentLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NextLvlPct;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.OnInputMethodChanged
struct UFortCollectionBookProgressionRewardsModalWidget_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
struct UFortCollectionBookProgressionRewardsModalWidget_InspectItemBP_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
struct UFortCollectionBookWidget_OnPreviewXPChangeRequest_Params
{
	int                                                XPChange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest
struct UFortCollectionBookWidget_OnCollectionBookSectionCloseRequest_Params
{
};

// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
struct UFortCollectionBookWidget_OnCollectionBookSectionClicked_Params
{
	class UFortCollectionBookSection*                  ClickedSection;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookPageSelected
struct UFortCollectionBookWidget_OnCollectionBookPageSelected_Params
{
	class UFortCollectionBookPage*                     SelectedPage;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookWidget.OnCollectionBookPageClicked
struct UFortCollectionBookWidget_OnCollectionBookPageClicked_Params
{
	class UFortCollectionBookPage*                     ClickedPage;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortDailyRewards.TryGetDailyRewardsData
struct UFortDailyRewards_TryGetDailyRewardsData_Params
{
	struct FFortDailyRewardsData                       OutDailyRewardsData;                                      // (Parm, OutParm)
	int                                                ItemCardsPerSchedule;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinEpicRewards;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDailyRewards.SetupDailyRewards
struct UFortDailyRewards_SetupDailyRewards_Params
{
};

// Function FortniteUI.FortDailyRewards.FinishedClaiming
struct UFortDailyRewards_FinishedClaiming_Params
{
};

// Function FortniteUI.FortDailyRewards.ClaimResultReceived
struct UFortDailyRewards_ClaimResultReceived_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Loot;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.IsPriceInMTX
struct UFortDirectAcquisitionOfferInfo_IsPriceInMTX_Params
{
	int                                                PriceIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.HasDisplayAsset
struct UFortDirectAcquisitionOfferInfo_HasDisplayAsset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetTileImage
struct UFortDirectAcquisitionOfferInfo_GetTileImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetStorefrontName
struct UFortDirectAcquisitionOfferInfo_GetStorefrontName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetShortDescription
struct UFortDirectAcquisitionOfferInfo_GetShortDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetSaleText
struct UFortDirectAcquisitionOfferInfo_GetSaleText_Params
{
	int                                                PriceIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetSalePrice
struct UFortDirectAcquisitionOfferInfo_GetSalePrice_Params
{
	int                                                PriceIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SalePrice;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetPriceItem
struct UFortDirectAcquisitionOfferInfo_GetPriceItem_Params
{
	int                                                PriceIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequiredItemCount;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortAccountItemDefinition*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetOfferId
struct UFortDirectAcquisitionOfferInfo_GetOfferId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetNormalPrice
struct UFortDirectAcquisitionOfferInfo_GetNormalPrice_Params
{
	int                                                PriceIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetName
struct UFortDirectAcquisitionOfferInfo_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetGradient
struct UFortDirectAcquisitionOfferInfo_GetGradient_Params
{
	struct FFortMtxGradient                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetFirstGrantItemDefinition
struct UFortDirectAcquisitionOfferInfo_GetFirstGrantItemDefinition_Params
{
	class UFortAccountItemDefinition*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetDetailsImage
struct UFortDirectAcquisitionOfferInfo_GetDetailsImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetDetailsAttributes
struct UFortDirectAcquisitionOfferInfo_GetDetailsAttributes_Params
{
	TArray<struct FFortMtxDetailsAttribute>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetDescription
struct UFortDirectAcquisitionOfferInfo_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.GetBackground
struct UFortDirectAcquisitionOfferInfo_GetBackground_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferInfo.CreatePreviewItem
struct UFortDirectAcquisitionOfferInfo_CreatePreviewItem_Params
{
	class UFortAccountItem*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferWidgetBase.SetupOffer
struct UFortDirectAcquisitionOfferWidgetBase_SetupOffer_Params
{
	class UFortDirectAcquisitionOfferInfo*             InOfferData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferWidgetBase.OnOfferSet
struct UFortDirectAcquisitionOfferWidgetBase_OnOfferSet_Params
{
};

// Function FortniteUI.FortDirectAcquisitionOfferWidgetBase.GetOfferInfo
struct UFortDirectAcquisitionOfferWidgetBase_GetOfferInfo_Params
{
	class UFortDirectAcquisitionOfferInfo*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase.SetupOffer
struct UFortDirectAcquisitionOfferDetailsWidgetBase_SetupOffer_Params
{
	class UFortDirectAcquisitionOfferInfo*             InOfferData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase.OnOfferSet
struct UFortDirectAcquisitionOfferDetailsWidgetBase_OnOfferSet_Params
{
};

// Function FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase.GetOfferInfo
struct UFortDirectAcquisitionOfferDetailsWidgetBase_GetOfferInfo_Params
{
	class UFortDirectAcquisitionOfferInfo*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase.AutoEquip
struct UFortDirectAcquisitionOfferDetailsWidgetBase_AutoEquip_Params
{
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.TriggerRefresh
struct UFortDirectAcquisitionWidgetBase_TriggerRefresh_Params
{
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.OnStartReadingOffers
struct UFortDirectAcquisitionWidgetBase_OnStartReadingOffers_Params
{
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.OnOffersGenerated
struct UFortDirectAcquisitionWidgetBase_OnOffersGenerated_Params
{
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.NoOffersAvailable
struct UFortDirectAcquisitionWidgetBase_NoOffersAvailable_Params
{
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate
struct UFortDirectAcquisitionWidgetBase_GetWeeklyStoreEndDate_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate
struct UFortDirectAcquisitionWidgetBase_GetDailyStoreEndDate_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortDirectAcquisitionWidgetBase.GenerateOfferWidget
struct UFortDirectAcquisitionWidgetBase_GenerateOfferWidget_Params
{
	struct FName                                       StorefrontName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCatalogOffer                               Offer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortMtxOfferData*                           DisplayAsset;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortDirectAcquisitionOfferWidgetBase*       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortErrorWindow.PutErrorEntries
struct UFortErrorWindow_PutErrorEntries_Params
{
	TArray<class UCommonUserWidget*>                   ErrorEntries;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortErrorWindow.GetErrorEntry
struct UFortErrorWindow_GetErrorEntry_Params
{
	class UCommonUserWidget*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortErrorWindow.DismissErrors
struct UFortErrorWindow_DismissErrors_Params
{
	TArray<struct FFortErrorInfo>                      ErrorInfos;                                               // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGameFeedbackBase.SubmitFeedback
struct UFortGameFeedbackBase_SubmitFeedback_Params
{
};

// Function FortniteUI.FortGameFeedbackBase.OnSelectionButtonChanged
struct UFortGameFeedbackBase_OnSelectionButtonChanged_Params
{
	class UCommonButton*                               SelectedButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameFeedbackBase.OnInitiateDebugInfoForFeedbackComplete
struct UFortGameFeedbackBase_OnInitiateDebugInfoForFeedbackComplete_Params
{
};

// Function FortniteUI.FortGameFeedbackBase.InitiateDebugInfoForFeedback
struct UFortGameFeedbackBase_InitiateDebugInfoForFeedback_Params
{
};

// Function FortniteUI.FortGameFeedbackBase.CancelFeedback
struct UFortGameFeedbackBase_CancelFeedback_Params
{
};

// Function FortniteUI.FortGameFeedbackBase.AddButtonWithFeedbackType
struct UFortGameFeedbackBase_AddButtonWithFeedbackType_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EFortUIGameFeedbackType                            GameFeedbackType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInfoWindow.GetListWidget
struct UFortInfoWindow_GetListWidget_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortMtxOfferDetailsBase.UpdateMtxOffer
struct UFortMtxOfferDetailsBase_UpdateMtxOffer_Params
{
	class UFortMtxStoreOfferBase*                      MtxOfferWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetTileImage
struct UFortMtxOfferDetailsBase_GetTileImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetStoreOfferType
struct UFortMtxOfferDetailsBase_GetStoreOfferType_Params
{
	EFortMtxStoreOfferType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetSalePrice
struct UFortMtxOfferDetailsBase_GetSalePrice_Params
{
	struct FText                                       SalePrice;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetOfferId
struct UFortMtxOfferDetailsBase_GetOfferId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetNormalPrice
struct UFortMtxOfferDetailsBase_GetNormalPrice_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetName
struct UFortMtxOfferDetailsBase_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetGradient
struct UFortMtxOfferDetailsBase_GetGradient_Params
{
	struct FFortMtxGradient                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetDetailsImage
struct UFortMtxOfferDetailsBase_GetDetailsImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetDetailsAttributes
struct UFortMtxOfferDetailsBase_GetDetailsAttributes_Params
{
	TArray<struct FFortMtxDetailsAttribute>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetDescription
struct UFortMtxOfferDetailsBase_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetBonusQuantity
struct UFortMtxOfferDetailsBase_GetBonusQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetBaseQuantity
struct UFortMtxOfferDetailsBase_GetBaseQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxOfferDetailsBase.GetBackground
struct UFortMtxOfferDetailsBase_GetBackground_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.UpdateEula
struct UFortOptionsMenu_UpdateEula_Params
{
};

// Function FortniteUI.FortOptionsMenu.ShowVideoOptions
struct UFortOptionsMenu_ShowVideoOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.ShowInputOptions
struct UFortOptionsMenu_ShowInputOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.ShowGameOptions
struct UFortOptionsMenu_ShowGameOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.ShowControllerOptions
struct UFortOptionsMenu_ShowControllerOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.ResetClientHUDSettings
struct UFortOptionsMenu_ResetClientHUDSettings_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnVideoAccept
struct UFortOptionsMenu_OnVideoAccept_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnResetToDefaults
struct UFortOptionsMenu_OnResetToDefaults_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnReset
struct UFortOptionsMenu_OnReset_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnApply
struct UFortOptionsMenu_OnApply_Params
{
};

// Function FortniteUI.FortOptionsMenu.NeedsVideoChangeConfirmation
struct UFortOptionsMenu_NeedsVideoChangeConfirmation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.NeedsLanguageChangeConfirmation
struct UFortOptionsMenu_NeedsLanguageChangeConfirmation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsMenu.HandleSettingsErrorMessageClosed
struct UFortOptionsMenu_HandleSettingsErrorMessageClosed_Params
{
};

// Function FortniteUI.FortOptionsMenu.HandleBenchmarkComplete
struct UFortOptionsMenu_HandleBenchmarkComplete_Params
{
};

// Function FortniteUI.FortPrivacyBase.HandlePrivacyButtonSelected
struct UFortPrivacyBase_HandlePrivacyButtonSelected_Params
{
	class UCommonButton*                               SelectedPrivacyButton;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPrivacyBase.HandleAllowFriendsButtonClicked
struct UFortPrivacyBase_HandleAllowFriendsButtonClicked_Params
{
	class UCommonButton*                               SelectedPrivacyButton;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortPrivacyBase.ApplyPrivacySetting
struct UFortPrivacyBase_ApplyPrivacySetting_Params
{
};

// Function FortniteUI.FortPrivacyBase.AddPrivacyButton
struct UFortPrivacyBase_AddPrivacyButton_Params
{
	class UCommonButton*                               PrivacyButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPartyType                                         PartyType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontendInventoryFilterFunctionLibrary.ToText
struct UFortFrontendInventoryFilterFunctionLibrary_ToText_Params
{
	EFortFrontendInventoryFilter                       FrontendInventoryFilter;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortItemManagementScreen.TransferItem
struct UFortItemManagementScreen_TransferItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.SetFrontendInventoryFilter
struct UFortItemManagementScreen_SetFrontendInventoryFilter_Params
{
	EFortFrontendInventoryFilter                       FrontendInventoryFilter;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.SetConsumeItemRequestInProgress
struct UFortItemManagementScreen_SetConsumeItemRequestInProgress_Params
{
	bool                                               InProgress;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.NotifyPanelDeactivated
struct UFortItemManagementScreen_NotifyPanelDeactivated_Params
{
};

// Function FortniteUI.FortItemManagementScreen.NotifyPanelActivated
struct UFortItemManagementScreen_NotifyPanelActivated_Params
{
};

// Function FortniteUI.FortItemManagementScreen.InspectItem
struct UFortItemManagementScreen_InspectItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HasItemBeenSeen
struct UFortItemManagementScreen_HasItemBeenSeen_Params
{
	class UFortAccountItem*                            AccountItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleTransferItemBP
struct UFortItemManagementScreen_HandleTransferItemBP_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleMulchQuantitySelection
struct UFortItemManagementScreen_HandleMulchQuantitySelection_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleItemToDetailChanged
struct UFortItemManagementScreen_HandleItemToDetailChanged_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleItemToCompareWithChanged
struct UFortItemManagementScreen_HandleItemToCompareWithChanged_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleInspectItemBP
struct UFortItemManagementScreen_HandleInspectItemBP_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleEquipItemBP
struct UFortItemManagementScreen_HandleEquipItemBP_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleDropItemBP
struct UFortItemManagementScreen_HandleDropItemBP_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementScreen_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function FortniteUI.FortItemManagementScreen.HandleCraftItemBP
struct UFortItemManagementScreen_HandleCraftItemBP_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.HandleConsumeItemBP
struct UFortItemManagementScreen_HandleConsumeItemBP_Params
{
	class UFortConsumableAccountItem*                  ConsumableItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.GetNumItemsToMulch
struct UFortItemManagementScreen_GetNumItemsToMulch_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.GetItemToDetail
struct UFortItemManagementScreen_GetItemToDetail_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.GetItemToCompareDetailsWith
struct UFortItemManagementScreen_GetItemToCompareDetailsWith_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.GetItemsToMulchBP
struct UFortItemManagementScreen_GetItemsToMulchBP_Params
{
	TArray<class UFortItem*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemManagementScreen.EquipItem
struct UFortItemManagementScreen_EquipItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.EnterMulchMode
struct UFortItemManagementScreen_EnterMulchMode_Params
{
	class UFortItem*                                   ItemToMulch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.EnterDetailsMode
struct UFortItemManagementScreen_EnterDetailsMode_Params
{
	class UFortItem*                                   ItemToDetail;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.EnterComparisonMode
struct UFortItemManagementScreen_EnterComparisonMode_Params
{
	class UFortItem*                                   ItemToCompareDetailsWith;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.DropItem
struct UFortItemManagementScreen_DropItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.CycleSortType
struct UFortItemManagementScreen_CycleSortType_Params
{
};

// Function FortniteUI.FortItemManagementScreen.CraftItem
struct UFortItemManagementScreen_CraftItem_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.ConsumeItem
struct UFortItemManagementScreen_ConsumeItem_Params
{
	class UFortConsumableAccountItem*                  ConsumableItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementScreen.CanItemBeMulched
struct UFortItemManagementScreen_CanItemBeMulched_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutRestrictionReason;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
struct UFortSquadManagementScreenBase_TryGetStaticSquadDataBP_Params
{
	struct FHomebaseSquad                              OutSquadData;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute
struct UFortSquadManagementScreenBase_TryGetSquadTeamAttribute_Params
{
	struct FGameplayAttribute                          OutGameplayAttribute;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute
struct UFortSquadManagementScreenBase_TryGetSquadMainAttribute_Params
{
	struct FGameplayAttribute                          OutGameplayAttribute;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad
struct UFortSquadManagementScreenBase_TryGetAttributeValueFromSquad_Params
{
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
struct UFortSquadManagementScreenBase_SetIdOfSquadToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.NavigateToSquadSlot
struct UFortSquadManagementScreenBase_NavigateToSquadSlot_Params
{
	int                                                SquadSlotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown
struct UFortSquadManagementScreenBase_HandleSquadSlotPickerShown_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden
struct UFortSquadManagementScreenBase_HandleSquadSlotPickerHidden_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction
struct UFortSquadManagementScreenBase_HandleSelectPickerSlotInputAction_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
struct UFortSquadManagementScreenBase_HandlePickerSelectionCommitted_Params
{
	class UFortItem*                                   CommittedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
struct UFortSquadManagementScreenBase_HandlePickerSelectionChanged_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
struct UFortSquadManagementScreenBase_HandleOpenSquadSlot_Params
{
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleManageInputAction
struct UFortSquadManagementScreenBase_HandleManageInputAction_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleInventoryInputAction
struct UFortSquadManagementScreenBase_HandleInventoryInputAction_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleInspectInputAction
struct UFortSquadManagementScreenBase_HandleInspectInputAction_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
struct UFortSquadManagementScreenBase_HandleDifferentSquadSlotSelected_Params
{
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP
struct UFortSquadManagementScreenBase_HandleDifferentSquadSetBP_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleClosePickerInputAction
struct UFortSquadManagementScreenBase_HandleClosePickerInputAction_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.HandleBackInputAction
struct UFortSquadManagementScreenBase_HandleBackInputAction_Params
{
};

// Function FortniteUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
struct UFortSquadManagementScreenBase_GetIdOfSquadToManageBP_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSelectorButton.TryGetStaticSquadDataBP
struct UFortSquadSelectorButton_TryGetStaticSquadDataBP_Params
{
	struct FHomebaseSquad                              OutSquadData;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSelectorButton.SetIdOfSquadToManageBP
struct UFortSquadSelectorButton_SetIdOfSquadToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSelectorButton.HandleSquadChangedBP
struct UFortSquadSelectorButton_HandleSquadChangedBP_Params
{
};

// Function FortniteUI.FortSquadSelectorButton.HandleDifferentSquadSetBP
struct UFortSquadSelectorButton_HandleDifferentSquadSetBP_Params
{
};

// Function FortniteUI.FortSquadSelectorButton.GetIdOfSquadToManageBP
struct UFortSquadSelectorButton_GetIdOfSquadToManageBP_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp
struct UFortSquadTypeLandingPageBase_HandlePendingNavigationOp_Params
{
};

// Function FortniteUI.FortSquadTypeLandingPageBase.HandleManageInputAction
struct UFortSquadTypeLandingPageBase_HandleManageInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadTypeLandingPageBase.HandleBackInputAction
struct UFortSquadTypeLandingPageBase_HandleBackInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
struct UFortSquadTypeLandingPageBase_CreateAndAddSquadButton_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UFortSquadSelectorButton*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortTwitchLoginModalWidget.OnNativeHostContentChanged
struct UFortTwitchLoginModalWidget_OnNativeHostContentChanged_Params
{
};

// Function FortniteUI.FortActorCanvas.OnHUDElementVisibilityChanged
struct UFortActorCanvas_OnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortActorCanvas.AddActorIndicator
struct UFortActorCanvas_AddActorIndicator_Params
{
	class UFortActorIndicatorWidget*                   Indicator;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortActorCanvasSlot*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortActorCanvasSlot.SetVerticalAlignment
struct UFortActorCanvasSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortActorCanvasSlot.SetHorizontalAlignment
struct UFortActorCanvasSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortActorCanvasSlot.SetCanAutoRemove
struct UFortActorCanvasSlot_SetCanAutoRemove_Params
{
	bool                                               bAllowAutoRemove;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAlterationsWidget_NUI.SetState
struct UFortAlterationsWidget_NUI_SetState_Params
{
	EFortAlterationWidgetState                         InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAlterationsWidget_NUI.SetItemToCompareWith
struct UFortAlterationsWidget_NUI_SetItemToCompareWith_Params
{
	class UFortItem*                                   InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAlterationsWidget_NUI.SetItem
struct UFortAlterationsWidget_NUI_SetItem_Params
{
	class UFortItem*                                   InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAlterationsWidget_NUI.ProcessAlterations
struct UFortAlterationsWidget_NUI_ProcessAlterations_Params
{
};

// Function FortniteUI.FortAlterationsWidget_NUI.OnStateChanged
struct UFortAlterationsWidget_NUI_OnStateChanged_Params
{
};

// Function FortniteUI.FortAlterationsWidget_NUI.OnItemToCompareWithChanged
struct UFortAlterationsWidget_NUI_OnItemToCompareWithChanged_Params
{
};

// Function FortniteUI.FortAlterationsWidget_NUI.OnItemChanged
struct UFortAlterationsWidget_NUI_OnItemChanged_Params
{
};

// Function FortniteUI.FortAlterationsWidget_NUI.OnGenerateAlteration
struct UFortAlterationsWidget_NUI_OnGenerateAlteration_Params
{
	struct FFortUIAlteration                           AlterationInfo;                                           // (Parm)
};

// Function FortniteUI.FortAlterationWidget_NUI.IsAlterationUnlocked
struct UFortAlterationWidget_NUI_IsAlterationUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAlterationWidget_NUI.IsAlterationHighlighted
struct UFortAlterationWidget_NUI_IsAlterationHighlighted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAlterationWidget_NUI.GetRequiredLevel
struct UFortAlterationWidget_NUI_GetRequiredLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAlterationWidget_NUI.GetAlterationDefintion
struct UFortAlterationWidget_NUI_GetAlterationDefintion_Params
{
	class UFortAlterationItemDefinition*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAnnouncementWidget.UpdateWidgetData
struct UFortAnnouncementWidget_UpdateWidgetData_Params
{
	class AFortClientAnnouncement*                     Announcement;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAnnouncementWidget.BindUpdateEvents
struct UFortAnnouncementWidget_BindUpdateEvents_Params
{
	class AFortClientAnnouncement*                     Announcement;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAnnouncementWidget.AnnouncementStopped
struct UFortAnnouncementWidget_AnnouncementStopped_Params
{
	class AFortClientAnnouncement*                     Announcement;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_SetUIState.SetUIState
struct UFortAsyncAction_SetUIState_SetUIState_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIState                                       DesiredState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_SetUIState*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI.ShowAdvancedLatentActionConfirmation
struct UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI_ShowAdvancedLatentActionConfirmation_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (Parm)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       MESSAGE;                                                  // (Parm)
	TArray<struct FConfirmationDialogAction>           ConfirmButtonInputActions;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       DeclineButtonInputAction;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     AdditionalContent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     LeftAdditionalContent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowConfirmation.ShowConfirmationDialog
struct UFortAsyncAction_ShowConfirmation_ShowConfirmationDialog_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       MESSAGE;                                                  // (Parm)
	struct FText                                       ConfirmButtonText;                                        // (Parm)
	struct FText                                       DeclineButtonText;                                        // (Parm)
	class UFortUserWidget*                             InAdditionalContent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InDisplayTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAsyncAction_ShowConfirmation*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowSimpleConfirmationDialog_NUI
struct UFortAsyncAction_ShowConfirmation_NUI_ShowSimpleConfirmationDialog_NUI_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (Parm)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       MESSAGE;                                                  // (Parm)
	bool                                               bShowConfirm;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDecline;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     AdditionalContent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     LeftAdditionalContent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAsyncAction_ShowConfirmation_NUI*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowSimpleConfirmationDialog_CustomInput
struct UFortAsyncAction_ShowConfirmation_NUI_ShowSimpleConfirmationDialog_CustomInput_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (Parm)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       MESSAGE;                                                  // (Parm)
	struct FName                                       ConfirmAction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeclineAction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     AdditionalContent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     LeftAdditionalContent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAsyncAction_ShowConfirmation_NUI*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowConfirmationDialog_NUI
struct UFortAsyncAction_ShowConfirmation_NUI_ShowConfirmationDialog_NUI_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (Parm)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       MESSAGE;                                                  // (Parm)
	TArray<struct FConfirmationDialogAction>           ConfirmButtonInputActions;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       DeclineButtonInputAction;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     AdditionalContent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     LeftAdditionalContent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAsyncAction_ShowConfirmation_NUI*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowPartyDialog.ShowPartyMemberManageDialog
struct UFortAsyncAction_ShowPartyDialog_ShowPartyMemberManageDialog_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 LeftAdditionalContent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAsyncAction_ShowPartyDialog*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAsyncAction_ShowPartyDialog.ShowPartyLeaderManageDialog
struct UFortAsyncAction_ShowPartyDialog_ShowPartyLeaderManageDialog_Params
{
	class UObject*                                     InWorldContextObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 LeftAdditionalContent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortAsyncAction_ShowPartyDialog*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAthenaMatchmakingWidget.SetPlayButtonState
struct UFortAthenaMatchmakingWidget_SetPlayButtonState_Params
{
	bool                                               bCanMatchmake;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAthenaMatchmakingWidget.SetCancelButtonState
struct UFortAthenaMatchmakingWidget_SetCancelButtonState_Params
{
	bool                                               bIsMatchmaking;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAthenaMatchmakingWidget.OnPlaylistRotatorChanged
struct UFortAthenaMatchmakingWidget_OnPlaylistRotatorChanged_Params
{
	int                                                PlaylistIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAthenaMatchmakingWidget.OnPlayButtonPressed
struct UFortAthenaMatchmakingWidget_OnPlayButtonPressed_Params
{
};

// Function FortniteUI.FortAthenaMatchmakingWidget.OnChangeTeamFillChanged
struct UFortAthenaMatchmakingWidget_OnChangeTeamFillChanged_Params
{
	bool                                               bFill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAthenaMatchmakingWidget.OnCancelButtonPressed
struct UFortAthenaMatchmakingWidget_OnCancelButtonPressed_Params
{
};

// Function FortniteUI.FortAthenaNewsWidget.GetText
struct UFortAthenaNewsWidget_GetText_Params
{
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       PlatformBody;                                             // (Parm, OutParm)
	struct FText                                       RegionBody;                                               // (Parm, OutParm)
	struct FText                                       Body;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUserWidget.AddStoreCheatMenu
struct UFortUserWidget_AddStoreCheatMenu_Params
{
};

// Function FortniteUI.FortUserWidget.AddGrantCheatMenu
struct UFortUserWidget_AddGrantCheatMenu_Params
{
	struct FString                                     TemplateId;                                               // (Parm, ZeroConstructor)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortBaseCanvasEntity.Outro
struct UFortBaseCanvasEntity_Outro_Params
{
	EFortAnimSpeed                                     Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasEntity.Intro
struct UFortBaseCanvasEntity_Intro_Params
{
	EFortAnimSpeed                                     Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.SelectNode
struct UFortBaseCanvasNode_SelectNode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.SelectedChanged
struct UFortBaseCanvasNode_SelectedChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.Purchase
struct UFortBaseCanvasNode_Purchase_Params
{
};

// DelegateFunction FortniteUI.FortBaseCanvasNode.OnNodeStateChanged__DelegateSignature
struct UFortBaseCanvasNode_OnNodeStateChanged__DelegateSignature_Params
{
	class UFortBaseCanvasNode*                         Node;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.IsPurchaseable
struct UFortBaseCanvasNode_IsPurchaseable_Params
{
	TArray<EFortHomebaseNodePurchaseRestrictionReason> OutRestrictionReasons;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.IsOwned
struct UFortBaseCanvasNode_IsOwned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.IsLocked
struct UFortBaseCanvasNode_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.HandleNodeStateChangedInternal
struct UFortBaseCanvasNode_HandleNodeStateChangedInternal_Params
{
};

// Function FortniteUI.FortBaseCanvasNode.HandleNodeStateChanged
struct UFortBaseCanvasNode_HandleNodeStateChanged_Params
{
};

// Function FortniteUI.FortBaseCanvasNode.GetPurchaseRestrictionReasonText
struct UFortBaseCanvasNode_GetPurchaseRestrictionReasonText_Params
{
	EFortHomebaseNodePurchaseRestrictionReason         Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortBaseCanvasNode.GetPurchasePercent
struct UFortBaseCanvasNode_GetPurchasePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.GetPreviewMediaSource
struct UFortBaseCanvasNode_GetPreviewMediaSource_Params
{
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.GetNodeStyleDataCopy
struct UFortBaseCanvasNode_GetNodeStyleDataCopy_Params
{
	struct FFortNodeStyleData                          Style;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.GetNodeID
struct UFortBaseCanvasNode_GetNodeID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.GetNodeDataCopy
struct UFortBaseCanvasNode_GetNodeDataCopy_Params
{
	struct FHomebaseNode                               Node;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.GetCosts
struct UFortBaseCanvasNode_GetCosts_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortBaseCanvasNode.DrillDownToNodePage
struct UFortBaseCanvasNode_DrillDownToNodePage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseCanvasNode.DoesDrillDownToCurrentNodePage
struct UFortBaseCanvasNode_DoesDrillDownToCurrentNodePage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodeCanvas.PanToNode
struct UFortNodeCanvas_PanToNode_Params
{
	struct FName                                       NodeID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EFortAnimSpeed                                     PanSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBangWrapper.SetBangVisibility
struct UFortBangWrapper_SetBangVisibility_Params
{
	bool                                               InVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.UnregisterToReceiveNotifications
struct UFortGlobalUIContext_UnregisterToReceiveNotifications_Params
{
	EFortNotificationQueueType                         NotificationQueueType;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.UnregisterScriptedAction
struct UFortGlobalUIContext_UnregisterScriptedAction_Params
{
	class UClass*                                      ScriptedAction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.UnbindToFeatureState
struct UFortGlobalUIContext_UnbindToFeatureState_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.TriggerUIFeedbackEvent
struct UFortGlobalUIContext_TriggerUIFeedbackEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.TriggerNewQuestStickies
struct UFortGlobalUIContext_TriggerNewQuestStickies_Params
{
};

// Function FortniteUI.FortGlobalUIContext.TriggerCompletedQuestStickies
struct UFortGlobalUIContext_TriggerCompletedQuestStickies_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ShowWebURL
struct UFortGlobalUIContext_ShowWebURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	EFortUrlType                                       URLType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.ShowConsoleAccountPicker
struct UFortGlobalUIContext_ShowConsoleAccountPicker_Params
{
	int                                                ControllerIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CompletionDelegate;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortGlobalUIContext.ShowBang
struct UFortGlobalUIContext_ShowBang_Params
{
	EFortBangType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.ShowAthenaMatchReadyExternalNotificationWindow
struct UFortGlobalUIContext_ShowAthenaMatchReadyExternalNotificationWindow_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ShouldShowRateWidget
struct UFortGlobalUIContext_ShouldShowRateWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.ShouldCloseMenuOnEscape
struct UFortGlobalUIContext_ShouldCloseMenuOnEscape_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.SetSubGame
struct UFortGlobalUIContext_SetSubGame_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.SetRatingWidgetFeedbackTitle
struct UFortGlobalUIContext_SetRatingWidgetFeedbackTitle_Params
{
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortGlobalUIContext.SetInputMode
struct UFortGlobalUIContext_SetInputMode_Params
{
	EFortInputMode                                     InMode;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.SetCurrentInputPresetName
struct UFortGlobalUIContext_SetCurrentInputPresetName_Params
{
	struct FString                                     InputPresetName;                                          // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.SetBangFromCount
struct UFortGlobalUIContext_SetBangFromCount_Params
{
	EFortBangType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.SendUINavigationAnalytic
struct UFortGlobalUIContext_SendUINavigationAnalytic_Params
{
	struct FString                                     Destination;                                              // (Parm, ZeroConstructor)
	bool                                               bUserInitiated;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.SendLeaveZoneAnalytic
struct UFortGlobalUIContext_SendLeaveZoneAnalytic_Params
{
};

// Function FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic
struct UFortGlobalUIContext_SendExperienceRatingAnalytic_Params
{
	struct FString                                     RatingType;                                               // (Parm, ZeroConstructor)
	struct FString                                     FeedbackSentBy;                                           // (Parm, ZeroConstructor)
	struct FText                                       RatingQuestion;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                StarCount;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     GameSessionID;                                            // (Parm, ZeroConstructor)
	struct FString                                     Comment;                                                  // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.ReturnToSubGameSelect
struct UFortGlobalUIContext_ReturnToSubGameSelect_Params
{
};

// Function FortniteUI.FortGlobalUIContext.RemoveNotification
struct UFortGlobalUIContext_RemoveNotification_Params
{
	EFortNotificationQueueType                         NotificationQueueType;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogDescription                      NotificationDescription;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortGlobalUIContext.RegisterToReceiveNotifications
struct UFortGlobalUIContext_RegisterToReceiveNotifications_Params
{
	EFortNotificationQueueType                         NotificationQueueType;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InOnNotificationAvailable;                                // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.RegisterScriptedActions
struct UFortGlobalUIContext_RegisterScriptedActions_Params
{
	TArray<class UClass*>                              ScriptedActions;                                          // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.RegisterScriptedAction
struct UFortGlobalUIContext_RegisterScriptedAction_Params
{
	class UClass*                                      ScriptedAction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.QuitGame
struct UFortGlobalUIContext_QuitGame_Params
{
};

// Function FortniteUI.FortGlobalUIContext.QueryGameBackendVersion
struct UFortGlobalUIContext_QueryGameBackendVersion_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ProcessNotificationResult
struct UFortGlobalUIContext_ProcessNotificationResult_Params
{
	EFortDialogResult                                  InResult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogDescription                      NotificationDescription;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortGlobalUIContext.ProcessConfirmationResult
struct UFortGlobalUIContext_ProcessConfirmationResult_Params
{
	EFortDialogResult                                  InResult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InResultName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogDescription_NUI                  ConfirmationDescription;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWaitingForLatentAction;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (Parm, OutParm)
};

// DelegateFunction FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature
struct UFortGlobalUIContext_OnQueryFortBackendVersionDelegate__DelegateSignature_Params
{
	struct FFortBackendVersion                         FortBackendVersion;                                       // (Parm)
};

// DelegateFunction FortniteUI.FortGlobalUIContext.OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature
struct UFortGlobalUIContext_OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature_Params
{
	bool                                               bConnected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortGlobalUIContext.OnLoadingScreenVisibilityChangedDelegate__DelegateSignature
struct UFortGlobalUIContext_OnLoadingScreenVisibilityChangedDelegate__DelegateSignature_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.Logout
struct UFortGlobalUIContext_Logout_Params
{
};

// Function FortniteUI.FortGlobalUIContext.IsUsingGamepad
struct UFortGlobalUIContext_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsUIVisible
struct UFortGlobalUIContext_IsUIVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsSquadQueueEnabled
struct UFortGlobalUIContext_IsSquadQueueEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsPendingLogout
struct UFortGlobalUIContext_IsPendingLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsMobileApp
struct UFortGlobalUIContext_IsMobileApp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsInZone
struct UFortGlobalUIContext_IsInZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsInOutpostZone
struct UFortGlobalUIContext_IsInOutpostZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsHUDVisible
struct UFortGlobalUIContext_IsHUDVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsGamepadAttached
struct UFortGlobalUIContext_IsGamepadAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsDuoQueueEnabled
struct UFortGlobalUIContext_IsDuoQueueEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsDesktopPlatform
struct UFortGlobalUIContext_IsDesktopPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsBluGloEnabled
struct UFortGlobalUIContext_IsBluGloEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.IsAllContentInstalled
struct UFortGlobalUIContext_IsAllContentInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.InputActionHoldStopped
struct UFortGlobalUIContext_InputActionHoldStopped_Params
{
	struct FName                                       InputActionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompletedSuccessfully;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.InputActionHoldStarted
struct UFortGlobalUIContext_InputActionHoldStarted_Params
{
	struct FName                                       InputActionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HoldDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.HideBang
struct UFortGlobalUIContext_HideBang_Params
{
	EFortBangType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.HasCompletedOnboardingObjective
struct UFortGlobalUIContext_HasCompletedOnboardingObjective_Params
{
	struct FDataTableRowHandle                         Objective;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.HasAccesstoMultipleSubGames
struct UFortGlobalUIContext_HasAccesstoMultipleSubGames_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetWatermark
struct UFortGlobalUIContext_GetWatermark_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetSubGame
struct UFortGlobalUIContext_GetSubGame_Params
{
	ESubGame                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetSessionId
struct UFortGlobalUIContext_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetScoreReport
struct UFortGlobalUIContext_GetScoreReport_Params
{
	class UFortUIScoreReport*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetQuestManager
struct UFortGlobalUIContext_GetQuestManager_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetPlatformDisplayName
struct UFortGlobalUIContext_GetPlatformDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetNextNotification
struct UFortGlobalUIContext_GetNextNotification_Params
{
	EFortNotificationQueueType                         NotificationQueueType;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogDescription                      NotificationDescription;                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetMessageManager
struct UFortGlobalUIContext_GetMessageManager_Params
{
	struct FName                                       ManagerName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreatedNew;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortUIMessageManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetLastMissionRewardReport
struct UFortGlobalUIContext_GetLastMissionRewardReport_Params
{
	class UFortUIRewardReport*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetLastMissionInfo
struct UFortGlobalUIContext_GetLastMissionInfo_Params
{
	struct FFortLastMissionInfo                        LastMissionInfo;                                          // (Parm, OutParm)
};

// Function FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo
struct UFortGlobalUIContext_GetLastGameSummaryInfo_Params
{
	struct FGameSummaryInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetKeyTextForAction
struct UFortGlobalUIContext_GetKeyTextForAction_Params
{
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ButtonActionType;                                         // (Parm, OutParm)
	bool                                               bUseAbbreviatedText;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetKeyForAction
struct UFortGlobalUIContext_GetKeyForAction_Params
{
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetInputPriority
struct UFortGlobalUIContext_GetInputPriority_Params
{
	EInputPriority                                     Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetInputDetailsForAction
struct UFortGlobalUIContext_GetInputDetailsForAction_Params
{
	struct FName                                       Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortInputActionDetails                     InputActionDetails;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetFeedbackTitle
struct UFortGlobalUIContext_GetFeedbackTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetFeatureState
struct UFortGlobalUIContext_GetFeatureState_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetDisplayXpValue
struct UFortGlobalUIContext_GetDisplayXpValue_Params
{
	int                                                StartingRealXp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndingRealXp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetCurrentInputPresetName
struct UFortGlobalUIContext_GetCurrentInputPresetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetConningXpModifierMessage
struct UFortGlobalUIContext_GetConningXpModifierMessage_Params
{
	int                                                TotalSkillPoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ContentDifficulty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetConningDifficultyXpModifier
struct UFortGlobalUIContext_GetConningDifficultyXpModifier_Params
{
	int                                                TotalSkillPoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ContentDifficulty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetCollectionBookManager
struct UFortGlobalUIContext_GetCollectionBookManager_Params
{
	class UFortCollectionBookManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.GetBackendName
struct UFortGlobalUIContext_GetBackendName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetAthenaCodeOfConductURL
struct UFortGlobalUIContext_GetAthenaCodeOfConductURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGlobalUIContext.GetAllPlayerInputPresetNamesForSubGame
struct UFortGlobalUIContext_GetAllPlayerInputPresetNamesForSubGame_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InputPresetNames;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               InputPresetFriendlyNames;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.GetAllPlayerInputPresetNames
struct UFortGlobalUIContext_GetAllPlayerInputPresetNames_Params
{
	TArray<struct FString>                             InputPresetNames;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               InputPresetFriendlyNames;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.ForceSetFeatureState
struct UFortGlobalUIContext_ForceSetFeatureState_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                ForcedState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.DisplayStateContent
struct UFortGlobalUIContext_DisplayStateContent_Params
{
	bool                                               bDisplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.CopyToClipboard
struct UFortGlobalUIContext_CopyToClipboard_Params
{
	struct FString                                     ClipboardText;                                            // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.ContentInstallationProgress
struct UFortGlobalUIContext_ContentInstallationProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.CloseExternalNotificationWindowIfOpen
struct UFortGlobalUIContext_CloseExternalNotificationWindowIfOpen_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ClearSelectionGroup
struct UFortGlobalUIContext_ClearSelectionGroup_Params
{
	struct FName                                       SelectionGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.ClearRatingWidgetInfo
struct UFortGlobalUIContext_ClearRatingWidgetInfo_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ClearLastMissionReports
struct UFortGlobalUIContext_ClearLastMissionReports_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ClearLastGameSummaryInfo
struct UFortGlobalUIContext_ClearLastGameSummaryInfo_Params
{
};

// Function FortniteUI.FortGlobalUIContext.CheckFlag
struct UFortGlobalUIContext_CheckFlag_Params
{
	struct FString                                     FlagName;                                                 // (Parm, ZeroConstructor)
	EFlagStatus                                        OutStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.CanPlay
struct UFortGlobalUIContext_CanPlay_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DenialReason;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.CanMatchmake
struct UFortGlobalUIContext_CanMatchmake_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DenialReason;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize
struct UFortGlobalUIContext_BindToFeatureStateAndInitialize_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGlobalUIContext.AutoSelectSubGame
struct UFortGlobalUIContext_AutoSelectSubGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.AllowQuit
struct UFortGlobalUIContext_AllowQuit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGlobalUIContext.AllowLogout
struct UFortGlobalUIContext_AllowLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAthenaTabsScreenBase.HandleFeatureStateChanged
struct UFortAthenaTabsScreenBase_HandleFeatureStateChanged_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAthenaTabsScreenBase.HandleFeatureNavigateRequest
struct UFortAthenaTabsScreenBase_HandleFeatureNavigateRequest_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAttributeListItem_NUI.ValueChanged
struct UFortAttributeListItem_NUI_ValueChanged_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAttributeListItem_NUI.SetPreviewAttribute
struct UFortAttributeListItem_NUI_SetPreviewAttribute_Params
{
	struct FFortDisplayAttribute                       InPreviewAttribute;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortAttributeListItem_NUI.SetDisplayAttribute
struct UFortAttributeListItem_NUI_SetDisplayAttribute_Params
{
	struct FFortDisplayAttribute                       InDisplayAttribute;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortAttributeListItem_NUI.PreviewStarted
struct UFortAttributeListItem_NUI_PreviewStarted_Params
{
};

// Function FortniteUI.FortAttributeListItem_NUI.PreviewEnded
struct UFortAttributeListItem_NUI_PreviewEnded_Params
{
};

// Function FortniteUI.FortAttributeListItem_NUI.GetDisplayPreviewCopy
struct UFortAttributeListItem_NUI_GetDisplayPreviewCopy_Params
{
	struct FFortDisplayAttribute                       OutPreviewAttribute;                                      // (Parm, OutParm)
};

// Function FortniteUI.FortAttributeListItem_NUI.GetDisplayAttributeCopy
struct UFortAttributeListItem_NUI_GetDisplayAttributeCopy_Params
{
	struct FFortDisplayAttribute                       OutDisplayAttribute;                                      // (Parm, OutParm)
};

// Function FortniteUI.FortAttributeListItem_NUI.GetCurrentAttributeCopy
struct UFortAttributeListItem_NUI_GetCurrentAttributeCopy_Params
{
	struct FFortDisplayAttribute                       OutDisplayAttribute;                                      // (Parm, OutParm)
};

// Function FortniteUI.FortAttributeListItem_NUI.DisplayAttributeChanged
struct UFortAttributeListItem_NUI_DisplayAttributeChanged_Params
{
};

// Function FortniteUI.FortAttributeListItem_NUI.ClearPreview
struct UFortAttributeListItem_NUI_ClearPreview_Params
{
};

// Function FortniteUI.FortAttributeList_NUI.SetPreviewData
struct UFortAttributeList_NUI_SetPreviewData_Params
{
	TArray<struct FFortDisplayAttribute>               Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortAttributeList_NUI.SetData
struct UFortAttributeList_NUI_SetData_Params
{
	TArray<struct FFortDisplayAttribute>               Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortAttributeList_NUI.OnRemoveShownAttributeListItem
struct UFortAttributeList_NUI_OnRemoveShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI*                  AttributeListItemWidget;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AtIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAttributeList_NUI.OnClearShownAttributes
struct UFortAttributeList_NUI_OnClearShownAttributes_Params
{
};

// Function FortniteUI.FortAttributeList_NUI.OnAddShownAttributeListItem
struct UFortAttributeList_NUI_OnAddShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI*                  AttributeListItemWidget;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortAttributeList_NUI.ClearPreviewData
struct UFortAttributeList_NUI_ClearPreviewData_Params
{
};

// Function FortniteUI.FortAttributeListItem.ValueChanged
struct UFortAttributeListItem_ValueChanged_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAttributeListItem.SetPreviewAttribute
struct UFortAttributeListItem_SetPreviewAttribute_Params
{
	struct FFortDisplayAttribute                       InPreviewAttribute;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortAttributeListItem.SetDisplayAttribute
struct UFortAttributeListItem_SetDisplayAttribute_Params
{
	struct FFortDisplayAttribute                       InDisplayAttribute;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortDisplayAttribute                       DeltaAttribute;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAttributeListItem.PreviewStarted
struct UFortAttributeListItem_PreviewStarted_Params
{
};

// Function FortniteUI.FortAttributeListItem.PreviewEnded
struct UFortAttributeListItem_PreviewEnded_Params
{
};

// Function FortniteUI.FortAttributeListItem.GetDisplayPreviewCopy
struct UFortAttributeListItem_GetDisplayPreviewCopy_Params
{
	struct FFortDisplayAttribute                       OutPreviewAttribute;                                      // (Parm, OutParm)
};

// Function FortniteUI.FortAttributeListItem.GetDisplayAttributeCopy
struct UFortAttributeListItem_GetDisplayAttributeCopy_Params
{
	struct FFortDisplayAttribute                       OutDisplayAttribute;                                      // (Parm, OutParm)
};

// Function FortniteUI.FortAttributeListItem.GetCurrentAttributeCopy
struct UFortAttributeListItem_GetCurrentAttributeCopy_Params
{
	struct FFortDisplayAttribute                       OutDisplayAttribute;                                      // (Parm, OutParm)
};

// Function FortniteUI.FortAttributeListItem.DisplayAttributeChanged
struct UFortAttributeListItem_DisplayAttributeChanged_Params
{
};

// Function FortniteUI.FortAttributeListItem.ClearPreview
struct UFortAttributeListItem_ClearPreview_Params
{
};

// Function FortniteUI.FortBangWrapper_NUI.UnregisterTutorialNameID
struct UFortBangWrapper_NUI_UnregisterTutorialNameID_Params
{
};

// Function FortniteUI.FortBangWrapper_NUI.SetTutorialNameID
struct UFortBangWrapper_NUI_SetTutorialNameID_Params
{
	struct FName                                       InTutorialNameID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBangWrapper_NUI.SetBangType
struct UFortBangWrapper_NUI_SetBangType_Params
{
	EFortBangType                                      NewBangType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBangWrapper_NUI.SetBangStateBP
struct UFortBangWrapper_NUI_SetBangStateBP_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBangWrapper_NUI.OnStopCallout
struct UFortBangWrapper_NUI_OnStopCallout_Params
{
};

// Function FortniteUI.FortBangWrapper_NUI.OnStartCallout
struct UFortBangWrapper_NUI_OnStartCallout_Params
{
};

// Function FortniteUI.FortBangWrapper_NUI.OnBangStateChanged
struct UFortBangWrapper_NUI_OnBangStateChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBannerSelectorBase.OnHomebaseNameCommitSucceeded
struct UFortBannerSelectorBase_OnHomebaseNameCommitSucceeded_Params
{
};

// Function FortniteUI.FortBannerSelectorBase.OnHomebaseNameCommitFailed
struct UFortBannerSelectorBase_OnHomebaseNameCommitFailed_Params
{
};

// Function FortniteUI.FortBannerSelectorBase.HasIllegalChars
struct UFortBannerSelectorBase_HasIllegalChars_Params
{
	struct FString                                     NewBannerName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBannerSelectorBase.HandleBannerNameChanged
struct UFortBannerSelectorBase_HandleBannerNameChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortBannerSelectorBase.CompleteHomebaseName
struct UFortBannerSelectorBase_CompleteHomebaseName_Params
{
};

// Function FortniteUI.FortBannerSelectorBase.CompleteHomebaseBannerSelection
struct UFortBannerSelectorBase_CompleteHomebaseBannerSelection_Params
{
};

// Function FortniteUI.FortBorderStyleList.GetBorderStyles
struct UFortBorderStyleList_GetBorderStyles_Params
{
	TArray<TAssetPtr<class UClass>>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortButtonStyle.GetMarginBySizeFromMultiSizeMargin
struct UFortButtonStyle_GetMarginBySizeFromMultiSizeMargin_Params
{
	struct FFortMultiSizeMargin                        MultiSizeMargin;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFortBrushSize>                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortButtonStyle.GetFontBySizeFromMultiSizeFont
struct UFortButtonStyle_GetFontBySizeFromMultiSizeFont_Params
{
	struct FFortMultiSizeFont                          MultiSizeFont;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFortBrushSize>                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortButtonStyle.GetFontBySize
struct UFortButtonStyle_GetFontBySize_Params
{
	TEnumAsByte<EFortBrushSize>                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortButtonStyle.GetCustomPaddingBySize
struct UFortButtonStyle_GetCustomPaddingBySize_Params
{
	TEnumAsByte<EFortBrushSize>                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortButtonStyle.GetButtonPaddingBySize
struct UFortButtonStyle_GetButtonPaddingBySize_Params
{
	TEnumAsByte<EFortBrushSize>                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortButtonStyle.GetBrushBySizeFromMultiSizeBrush
struct UFortButtonStyle_GetBrushBySizeFromMultiSizeBrush_Params
{
	struct FFortMultiSizeBrush                         MultiSizeBrush;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EFortBrushSize>                        Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortBaseButton.SetStyle
struct UFortBaseButton_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetSelectionGroup
struct UFortBaseButton_SetSelectionGroup_Params
{
	struct FName                                       InSelectionGroup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetSelected
struct UFortBaseButton_SetSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetHovered
struct UFortBaseButton_SetHovered_Params
{
	bool                                               InHovered;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetClickMethod
struct UFortBaseButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetClickable
struct UFortBaseButton_SetClickable_Params
{
	bool                                               InClickable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetBrushSize
struct UFortBaseButton_SetBrushSize_Params
{
	TEnumAsByte<EFortBrushSize>                        InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.SetBangVisibility
struct UFortBaseButton_SetBangVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.OnButtonClicked
struct UFortBaseButton_OnButtonClicked_Params
{
};

// Function FortniteUI.FortBaseButton.GetStyle
struct UFortBaseButton_GetStyle_Params
{
	class UFortButtonStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.GetSelectionGroupIndex
struct UFortBaseButton_GetSelectionGroupIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.GetSelected
struct UFortBaseButton_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortBaseButton.GetCurrentStateStyle
struct UFortBaseButton_GetCurrentStateStyle_Params
{
	struct FFortStateStyle                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortBaseButton.GetCurrentFont
struct UFortBaseButton_GetCurrentFont_Params
{
	struct FSlateFontInfo                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortBaseButton.GetCurrentCustomPadding
struct UFortBaseButton_GetCurrentCustomPadding_Params
{
	struct FMargin                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortBaseButton.GetCurrentButtonPadding
struct UFortBaseButton_GetCurrentButtonPadding_Params
{
	struct FMargin                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortBaseButton.ForceClick
struct UFortBaseButton_ForceClick_Params
{
};

// Function FortniteUI.FortChatWidget.SetControllerActionBrush
struct UFortChatWidget_SetControllerActionBrush_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (Parm)
};

// Function FortniteUI.FortChatWidget.FocusChatEntry
struct UFortChatWidget_FocusChatEntry_Params
{
};

// Function FortniteUI.FortCheatMenuFactory.AddStoreCheatMenu
struct UFortCheatMenuFactory_AddStoreCheatMenu_Params
{
	class UCommonUserWidget*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCheatMenuFactory.AddGrantCheatMenu
struct UFortCheatMenuFactory_AddGrantCheatMenu_Params
{
	class UCommonUserWidget*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     TemplateId;                                               // (Parm, ZeroConstructor)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
struct UFortCollectionBookGenericRewardWidget_SetRewardStatus_Params
{
	ECollectionBookRewardStatus                        Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.SetRewards
struct UFortCollectionBookGenericRewardWidget_SetRewards_Params
{
	struct FFortRewardInfo                             Rewards;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
struct UFortCollectionBookGenericRewardWidget_SetCurrentItemToDisplay_Params
{
	class UFortItem*                                   ItemToDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
struct UFortCollectionBookGenericRewardWidget_OnRewardStatusChanged_Params
{
	ECollectionBookRewardStatus                        NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.HasRewards
struct UFortCollectionBookGenericRewardWidget_HasRewards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
struct UFortCollectionBookGenericRewardWidget_GetRewardStatus_Params
{
	ECollectionBookRewardStatus                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookGenericRewardWidget.ClearRewards
struct UFortCollectionBookGenericRewardWidget_ClearRewards_Params
{
};

// Function FortniteUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
struct UFortCollectionBookProgressionRewardWidget_SetAssociatedLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardInfoButton.SetShowDescriptionBP
struct UFortRewardInfoButton_SetShowDescriptionBP_Params
{
	bool                                               bInShowDescription;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardInfoButton.SetShowDescription
struct UFortRewardInfoButton_SetShowDescription_Params
{
	bool                                               bInShowDescription;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardInfoButton.SetItemInstanceQuantityPair
struct UFortRewardInfoButton_SetItemInstanceQuantityPair_Params
{
	struct FFortItemInstanceQuantityPair               ItemQuantityPair;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortRewardInfoButton.HandleDifferentItemOrQuantitySetBP
struct UFortRewardInfoButton_HandleDifferentItemOrQuantitySetBP_Params
{
};

// Function FortniteUI.FortRewardInfoButton.GetQuantity
struct UFortRewardInfoButton_GetQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardInfoButton.GetItemInstance
struct UFortRewardInfoButton_GetItemInstance_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardInfoWidget.SetReward
struct UFortRewardInfoWidget_SetReward_Params
{
	struct FFortRewardInfo                             RewardsIn;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortRewardInfoWidget.SetButtonGroup
struct UFortRewardInfoWidget_SetButtonGroup_Params
{
	class UCommonButtonGroup*                          InButtonGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionCompletionRewardWidget.OnRewardDetailsButtonClicked
struct UFortCollectionBookSectionCompletionRewardWidget_OnRewardDetailsButtonClicked_Params
{
	class UCommonButton*                               ClickedButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
struct UFortCollectionBookSectionCompletionRewardWidget_HandleRewardDetailsModalWidgetDeactivated_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookOverviewWidget.OnPageItemSelected
struct UFortCollectionBookOverviewWidget_OnPageItemSelected_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookOverviewWidget.OnPageItemClicked
struct UFortCollectionBookOverviewWidget_OnPageItemClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookOverviewWidget.OnGetChildrenForPageCategory
struct UFortCollectionBookOverviewWidget_OnGetChildrenForPageCategory_Params
{
	class UObject*                                     CategoryObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortCollectionBookOverviewWidget.OnDeactivated
struct UFortCollectionBookOverviewWidget_OnDeactivated_Params
{
};

// Function FortniteUI.FortCollectionBookOverviewWidget.OnActivated
struct UFortCollectionBookOverviewWidget_OnActivated_Params
{
};

// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
struct UFortCollectionBookPageDetailsWidget_OnSlotItemComplete_Params
{
	class UFortAccountItem*                            SlottedItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnRewardDetailsButtonClicked
struct UFortCollectionBookPageDetailsWidget_OnRewardDetailsButtonClicked_Params
{
	class UCommonButton*                               ClickedButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
struct UFortCollectionBookPageDetailsWidget_OnPageProgressionUpdated_Params
{
	int                                                TotalFilledSlots;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalSlots;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
struct UFortCollectionBookPageDetailsWidget_OnDetailsPageChanged_Params
{
	class UFortCollectionBookPage*                     InNewDetailsPage;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
struct UFortCollectionBookPageDetailsWidget_HandleRewardDetailsModalWidgetDeactivated_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageListWidget.SetupAsPage
struct UFortCollectionBookPageListWidget_SetupAsPage_Params
{
	class UFortCollectionBookPage*                     Page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageListWidget.SetupAsCategory
struct UFortCollectionBookPageListWidget_SetupAsCategory_Params
{
	class UFortCollectionBookCategory*                 Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageListWidget.OnSlotItemComplete
struct UFortCollectionBookPageListWidget_OnSlotItemComplete_Params
{
	class UFortAccountItem*                            SlottedItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
struct UFortCollectionBookPageListWidget_OnPageDetailsUpdated_Params
{
	int                                                NumAvailableSlots;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPageListWidget.OnExpansionChanged
struct UFortCollectionBookPageListWidget_OnExpansionChanged_Params
{
	bool                                               bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
struct UFortCollectionBookPrimaryPanel_OnSummonInfoPanelExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
struct UFortCollectionBookPrimaryPanel_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
struct UFortCollectionBookPrimaryPanel_OnCollectionBookSectionClicked_Params
{
	class UFortCollectionBookSection*                  ClickedSection;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
struct UFortCollectionBookPrimaryPanel_OnCollectionBookPageSelected_Params
{
	class UFortCollectionBookPage*                     SelectedPage;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
struct UFortCollectionBookPrimaryPanel_OnCollectionBookPageClicked_Params
{
	class UFortCollectionBookPage*                     ClickedPage;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
struct UFortCollectionBookPrimaryPanel_OnBackActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPrimaryPanel.HandleSectionTileClicked
struct UFortCollectionBookPrimaryPanel_HandleSectionTileClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
struct UFortCollectionBookProgressWidget_OnSlottedItemOperationComplete_Params
{
	class UFortAccountItem*                            ItemSlotted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.OnDetailsButtonClicked
struct UFortCollectionBookProgressWidget_OnDetailsButtonClicked_Params
{
	class UCommonButton*                               ClickedButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
struct UFortCollectionBookProgressWidget_OnCollectionBookPreviewXPChange_Params
{
	float                                              PreviewCompletionPct;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
struct UFortCollectionBookProgressWidget_OnCollectionBookPageSelected_Params
{
	class UFortCollectionBookPage*                     SelectedPage;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
struct UFortCollectionBookProgressWidget_OnCollectionBookLevelProgressionChanged_Params
{
	float                                              NewCompletionPct;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
struct UFortCollectionBookProgressWidget_OnCollectionBookLevelChanged_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
struct UFortCollectionBookProgressWidget_HandleDetailsModalWidgetDeactivated_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
struct UFortCollectionBookRecycleSlotResultsWidget_SetCurrentItemToRecycle_Params
{
	class UFortAccountItem*                            InItemToRecycle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookRewardCardWidget.SetRewards
struct UFortCollectionBookRewardCardWidget_SetRewards_Params
{
	struct FFortRewardInfo                             Rewards;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction FortniteUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
struct UFortCollectionBookRewardCardWidget_OnDisplayedItemChangedEvent__DelegateSignature_Params
{
	class UFortItem*                                   DisplayedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookRewardCardWidget.HasRewards
struct UFortCollectionBookRewardCardWidget_HasRewards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookRewardCardWidget.ClearRewards
struct UFortCollectionBookRewardCardWidget_ClearRewards_Params
{
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
struct UFortCollectionBookSectionPanel_OnSlottedItemOperationComplete_Params
{
	class UFortAccountItem*                            SlottedItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotPickerItemSelected
struct UFortCollectionBookSectionPanel_OnSlotPickerItemSelected_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotPickerItemHovered
struct UFortCollectionBookSectionPanel_OnSlotPickerItemHovered_Params
{
	class UFortItem*                                   HoveredItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotItemConfirmationCompleted
struct UFortCollectionBookSectionPanel_OnSlotItemConfirmationCompleted_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (Parm)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotItemComplete
struct UFortCollectionBookSectionPanel_OnSlotItemComplete_Params
{
	class UFortAccountItem*                            SlottedItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
struct UFortCollectionBookSectionPanel_OnSlotItemActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
struct UFortCollectionBookSectionPanel_OnSlotButtonSelected_Params
{
	class UFortCollectionBookSlotButton*               SlotButton;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSlotButtonCommitted
struct UFortCollectionBookSectionPanel_OnSlotButtonCommitted_Params
{
	class UFortCollectionBookSlotButton*               SlotButton;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnSectionChanged
struct UFortCollectionBookSectionPanel_OnSectionChanged_Params
{
	class UFortCollectionBookSection*                  Section;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
struct UFortCollectionBookSectionPanel_OnOpenPickerActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
struct UFortCollectionBookSectionPanel_OnLogAllowedItemsActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnItemInspectAction__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableItemActions;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaceholderItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnItemAction__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
struct UFortCollectionBookSectionPanel_OnInspectActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnInputMethodChanged
struct UFortCollectionBookSectionPanel_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionPanel.OnBackActionExecuted
struct UFortCollectionBookSectionPanel_OnBackActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSlotWidget.OnSlottedItemOperationComplete
struct UFortCollectionBookSlotWidget_OnSlottedItemOperationComplete_Params
{
	class UFortAccountItem*                            ItemSlotted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSlotWidget.OnItemDestroyed
struct UFortCollectionBookSlotWidget_OnItemDestroyed_Params
{
};

// DelegateFunction FortniteUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature
struct UFortCollectionBookSlotWidget_FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature_Params
{
};

// Function FortniteUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
struct UFortCollectionBookSectionTileWidget_OnSectionSlotUpdate_Params
{
	int                                                NumFilledSlots;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSlots;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState                           SectionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSectionTileWidget.OnItemSlotted
struct UFortCollectionBookSectionTileWidget_OnItemSlotted_Params
{
	class UFortAccountItem*                            ItemSlotted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSlotButton.OnSlottedItemUpdated
struct UFortCollectionBookSlotButton_OnSlottedItemUpdated_Params
{
};

// Function FortniteUI.FortCollectionBookSlotView.OnSlotButtonCommitted
struct UFortCollectionBookSlotView_OnSlotButtonCommitted_Params
{
	class UCommonButton*                               CommittedButton;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSlotView.OnSlotButtonClicked
struct UFortCollectionBookSlotView_OnSlotButtonClicked_Params
{
	class UCommonButton*                               ClickedButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
struct UFortCollectionBookSlotView_OnSelectedSlotButtonChanged_Params
{
	class UCommonButton*                               SelectedButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.UnsummonDefender
struct UFortDefenderConfigPanel_UnsummonDefender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.SpawnDefender
struct UFortDefenderConfigPanel_SpawnDefender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.IsWeaponSelectionValid
struct UFortDefenderConfigPanel_IsWeaponSelectionValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.HasWeaponForSelectedDefender
struct UFortDefenderConfigPanel_HasWeaponForSelectedDefender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.HasAnyDefenders
struct UFortDefenderConfigPanel_HasAnyDefenders_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.GetSourceSchematic
struct UFortDefenderConfigPanel_GetSourceSchematic_Params
{
	class UFortWorldItemDefinition*                    ItemDefUsedForCrafting;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortSchematicItemDefinition*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.GetDefenderPawnWeaponItem
struct UFortDefenderConfigPanel_GetDefenderPawnWeaponItem_Params
{
	class AFortAIPawn*                                 DefenderPawn;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.GetCompatibleAmmoDef
struct UFortDefenderConfigPanel_GetCompatibleAmmoDef_Params
{
	class UFortWorldItemDefinition*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.GetCompatibleAmmo
struct UFortDefenderConfigPanel_GetCompatibleAmmo_Params
{
	class UFortWorldItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.GetAmmoCountFromPlayer
struct UFortDefenderConfigPanel_GetAmmoCountFromPlayer_Params
{
	class UFortWorldItemDefinition*                    AmmoItemDef;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderConfigPanel.GetAmmoCountFromDefender
struct UFortDefenderConfigPanel_GetAmmoCountFromDefender_Params
{
	class UFortWorldItemDefinition*                    AmmoItemDef;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.StartExpedition
struct UFortExpeditionBuildSquadWidget_StartExpedition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.SetData
struct UFortExpeditionBuildSquadWidget_SetData_Params
{
	class UFortExpeditionItem*                         InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
struct UFortExpeditionBuildSquadWidget_SetCurrentSquadId_Params
{
	struct FName                                       SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.OnStartExpeditionCompleted
struct UFortExpeditionBuildSquadWidget_OnStartExpeditionCompleted_Params
{
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker
struct UFortExpeditionBuildSquadWidget_OnRequestClosePicker_Params
{
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget
struct UFortExpeditionBuildSquadWidget_OnRefreshBuildSquadWidget_Params
{
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
struct UFortExpeditionBuildSquadWidget_IsSquadSlotLocked_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
struct UFortExpeditionBuildSquadWidget_IsExpeditionValidToStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.HandleStartExpeditionCompleted
struct UFortExpeditionBuildSquadWidget_HandleStartExpeditionCompleted_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
struct UFortExpeditionBuildSquadWidget_HandleDifferentSquadSlotSelected_Params
{
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
struct UFortExpeditionBuildSquadWidget_ClearTemporaryExpeditionSquadState_Params
{
	bool                                               bPreviewOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionDetailsWidget.SetData
struct UFortExpeditionDetailsWidget_SetData_Params
{
	class UFortExpeditionItem*                         InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionDetailsWidget.SetCurrentSquadId
struct UFortExpeditionDetailsWidget_SetCurrentSquadId_Params
{
	struct FName                                       SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionDetailsWidget.OnAbandonExpeditionCompleted
struct UFortExpeditionDetailsWidget_OnAbandonExpeditionCompleted_Params
{
};

// Function FortniteUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
struct UFortExpeditionDetailsWidget_HandleAbandonExpeditionCompleted_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionDetailsWidget.AbandonExpedition
struct UFortExpeditionDetailsWidget_AbandonExpedition_Params
{
};

// Function FortniteUI.FortExpeditionExpiresWidget.SetData
struct UFortExpeditionExpiresWidget_SetData_Params
{
	class UFortExpeditionItem*                         InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
struct UFortExpeditionExpiresWidget_OnExpeditionExpirationUpdated_Params
{
};

// Function FortniteUI.FortExpeditionListItemWidget.OnItemChanged
struct UFortExpeditionListItemWidget_OnItemChanged_Params
{
};

// Function FortniteUI.FortExpeditionListViewWidget.SetExpeditionListSortType
struct UFortExpeditionListViewWidget_SetExpeditionListSortType_Params
{
	EFortExpeditionListSort                            InSortType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionListViewWidget.HandleListItemSelected
struct UFortExpeditionListViewWidget_HandleListItemSelected_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionListViewWidget.GetExpeditionListSortName
struct UFortExpeditionListViewWidget_GetExpeditionListSortName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs
struct UFortExpeditionOverviewWidget_UpdateExpeditionTabs_Params
{
};

// Function FortniteUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
struct UFortExpeditionOverviewWidget_OnExpeditionTabSelected_Params
{
	struct FName                                       TabNameID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh
struct UFortExpeditionOverviewWidget_OnExpeditionOverviewRefresh_Params
{
};

// Function FortniteUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
struct UFortExpeditionOverviewWidget_HandleExpeditionTabSelected_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
struct UFortExpeditionOverviewWidget_HandleExpeditionTabButtonCreated_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionPickVehicleWidget.SetData
struct UFortExpeditionPickVehicleWidget_SetData_Params
{
	class UFortExpeditionItem*                         InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionReturnsWidget.SetData
struct UFortExpeditionReturnsWidget_SetData_Params
{
	class UFortExpeditionItem*                         InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
struct UFortExpeditionReturnsWidget_OnExpeditionInProgressUpdated_Params
{
};

// Function FortniteUI.FortExpeditionRewardsWidget.RefreshRewardsUI
struct UFortExpeditionRewardsWidget_RefreshRewardsUI_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExpeditionSucceeded;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortExpeditionRewardsWidget.ProcessNextReward
struct UFortExpeditionRewardsWidget_ProcessNextReward_Params
{
};

// Function FortniteUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
struct UFortExpeditionRewardsWidget_HandleCollectionExpeditionCompleted_Params
{
	bool                                               bMcpSuccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExpeditionSuccess;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates
struct UFortExpeditionSummaryWidget_UnbindInventoryDelegates_Params
{
};

// Function FortniteUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget
struct UFortExpeditionSummaryWidget_OnRefreshSummaryWidget_Params
{
};

// Function FortniteUI.FortExpeditionSummaryWidget.BindInventoryDelegates
struct UFortExpeditionSummaryWidget_BindInventoryDelegates_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
struct UFortExpeditionUtilities_TotalUnseenExpeditionsForTab_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       TabNameID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.IsSquadOnExpedition
struct UFortExpeditionUtilities_IsSquadOnExpedition_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
struct UFortExpeditionUtilities_GetVehicleTagRequiredForExpedition_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
struct UFortExpeditionUtilities_GetVehicleTagFromSquadId_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGameplayTag                                OutFoundVehicleTag;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
struct UFortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLandVehicles;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutLandVehiclesAvailable;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSeaVehicles;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSeaVehiclesAvailable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutAirVehicles;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutAirVehiclesAvailable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetMatchedCriteriaTags
struct UFortExpeditionUtilities_GetMatchedCriteriaTags_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SlottedItems;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FGameplayTag>                        OutMatchedCriteria;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
struct UFortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements_Params
{
	struct FGameplayTagContainer                       RequirementTags;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutExpeditionSquadIds;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadPower
struct UFortExpeditionUtilities_GetExpeditionSquadPower_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
struct UFortExpeditionUtilities_GetAllExpeditionSquadIds_Params
{
	TArray<struct FName>                               OutExpeditionSquadIds;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortExpeditionUtilities.CalculateTotalPower
struct UFortExpeditionUtilities_CalculateTotalPower_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UFortItem*>                           SlottedItems;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
struct UFortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SlottedItems;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              GlobalPowerMod;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SlottedItemMods;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
struct UFortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalPower;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.AreExpeditionsUnlocked
struct UFortExpeditionUtilities_AreExpeditionsUnlocked_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
struct UFortExpeditionUtilities_AreAnyExpeditionsComplete_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayOutroTransitionBP
struct UFortSkillTreeCanvasEntityInterface_PlayOutroTransitionBP_Params
{
	EFortAnimSpeed                                     AnimSpeed;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayIntroTransitionBP
struct UFortSkillTreeCanvasEntityInterface_PlayIntroTransitionBP_Params
{
	EFortAnimSpeed                                     AnimSpeed;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasNode.TryGetStaticSkillTreeNodeData
struct UFortSkillTreeCanvasNode_TryGetStaticSkillTreeNodeData_Params
{
	struct FHomebaseNode                               OutNodeData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasNode.TryGetSkillTreeNodeState
struct UFortSkillTreeCanvasNode_TryGetSkillTreeNodeState_Params
{
	struct FHomebaseNodeState                          OutNodeState;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasNode.TryGetNodeDisplayData
struct UFortSkillTreeCanvasNode_TryGetNodeDisplayData_Params
{
	struct FFortSkillTreeNodeDisplayData               OutDisplayData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasNode.HandleSkillTreeNodeStateChanged
struct UFortSkillTreeCanvasNode_HandleSkillTreeNodeStateChanged_Params
{
};

// Function FortniteUI.FortKeybindWidget.UpdateKeybindWidget
struct UFortKeybindWidget_UpdateKeybindWidget_Params
{
};

// Function FortniteUI.FortKeybindWidget.Update
struct UFortKeybindWidget_Update_Params
{
};

// Function FortniteUI.FortKeybindWidget.StopHoldProgress
struct UFortKeybindWidget_StopHoldProgress_Params
{
	struct FName                                       HoldActionName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompletedSuccessfully;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.StartHoldProgress
struct UFortKeybindWidget_StartHoldProgress_Params
{
	struct FName                                       HoldActionName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HoldDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.SetShowProgressCountDown
struct UFortKeybindWidget_SetShowProgressCountDown_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.SetForcedHoldKeybindStatus
struct UFortKeybindWidget_SetForcedHoldKeybindStatus_Params
{
	EFortKeybindForcedHoldStatus                       InForcedHoldKeybindStatus;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.SetForcedHoldKeybind
struct UFortKeybindWidget_SetForcedHoldKeybind_Params
{
	bool                                               InForcedHoldKeybind;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.SetBoundAction
struct UFortKeybindWidget_SetBoundAction_Params
{
	struct FName                                       NewBoundAction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.IsHoldKeybind
struct UFortKeybindWidget_IsHoldKeybind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortKeybindWidget.GetBrushForKey
struct UFortKeybindWidget_GetBrushForKey_Params
{
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemInspectionScreen.OpenItemInspect
struct UFortItemInspectionScreen_OpenItemInspect_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EFortItemInspectionMode                            Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAllowUpgrading;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAllowEvolution;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAllowFavorite;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTemporaryItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.TryGetSkillTreePageStaticData
struct UFortSkillTreeViewer_TryGetSkillTreePageStaticData_Params
{
	struct FHomebaseNodePage                           OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.ShowPage
struct UFortSkillTreeViewer_ShowPage_Params
{
	struct FName                                       SkillTreePageId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EFortAnimSpeed                                     TransitionSpeed;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortSkillTreeViewer.OnNodeSelectionChanged__DelegateSignature
struct UFortSkillTreeViewer_OnNodeSelectionChanged__DelegateSignature_Params
{
};

// Function FortniteUI.FortSkillTreeViewer.NavigateTo
struct UFortSkillTreeViewer_NavigateTo_Params
{
	struct FName                                       SkillTreeNodeId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ShouldSelectNode;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EFortAnimSpeed                                     TransitionSpeed;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.HandleViewParametersChangedBP
struct UFortSkillTreeViewer_HandleViewParametersChangedBP_Params
{
};

// Function FortniteUI.FortSkillTreeViewer.HandleNodeSelectionChangedBP
struct UFortSkillTreeViewer_HandleNodeSelectionChangedBP_Params
{
};

// Function FortniteUI.FortSkillTreeViewer.HandleDifferentPageShown
struct UFortSkillTreeViewer_HandleDifferentPageShown_Params
{
};

// Function FortniteUI.FortSkillTreeViewer.HandleBackOutAction
struct UFortSkillTreeViewer_HandleBackOutAction_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.GetViewParameters
struct UFortSkillTreeViewer_GetViewParameters_Params
{
	struct FVector2D                                   OutPanOffset;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              OutZoomLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.GetSelectedNodeId
struct UFortSkillTreeViewer_GetSelectedNodeId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.GetPageTotalNodes
struct UFortSkillTreeViewer_GetPageTotalNodes_Params
{
	struct FName                                       SkillTreePageId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.GetPageLocked
struct UFortSkillTreeViewer_GetPageLocked_Params
{
	struct FName                                       SkillTreePageId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.GetPageAquiredNodes
struct UFortSkillTreeViewer_GetPageAquiredNodes_Params
{
	struct FName                                       SkillTreePageId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.GetCurrenciesNeededForPage
struct UFortSkillTreeViewer_GetCurrenciesNeededForPage_Params
{
	struct FName                                       SkillTreePageId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UFortItemDefinition*>                 OutCurrencies;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortSkillTreeViewer.DrillDownToSubPage
struct UFortSkillTreeViewer_DrillDownToSubPage_Params
{
	struct FName                                       DrillDownSkillTreeNodeId;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EFortAnimSpeed                                     TransitionSpeed;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.CanBackOutOfSubPage
struct UFortSkillTreeViewer_CanBackOutOfSubPage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeViewer.BackOutOfSubPage
struct UFortSkillTreeViewer_BackOutOfSubPage_Params
{
	EFortAnimSpeed                                     TransitionSpeed;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIDataConfiguration.GetDefenderSubtypeIconMultiSizeBrushByTag
struct UFortUIDataConfiguration_GetDefenderSubtypeIconMultiSizeBrushByTag_Params
{
	struct FGameplayTag                                DefenderSubtypeTag;                                       // (ConstParm, Parm)
	class UFortMultiSizeBrushAsset*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.ViewVaultItemFromDefinition
struct UFortFrontEndContext_ViewVaultItemFromDefinition_Params
{
	class UFortItemDefinition*                         ItemToViewDefinition;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.ViewVaultItem
struct UFortFrontEndContext_ViewVaultItem_Params
{
	class UFortItem*                                   ItemToView;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.UpdateNewAccountItemBangCounts
struct UFortFrontEndContext_UpdateNewAccountItemBangCounts_Params
{
	class UFortInventoryContext*                       InventoryContext;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.TryGetAttributeInfo
struct UFortFrontEndContext_TryGetAttributeInfo_Params
{
	struct FGameplayAttribute                          GameplayAttribute;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortAttributeInfo                          OutAttribute;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SkipInitialBenchmark
struct UFortFrontEndContext_SkipInitialBenchmark_Params
{
};

// Function FortniteUI.FortFrontEndContext.ShouldShowLoginMessage
struct UFortFrontEndContext_ShouldShowLoginMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.ShouldRunInitialBenchmark
struct UFortFrontEndContext_ShouldRunInitialBenchmark_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SetSelectedTheater
struct UFortFrontEndContext_SetSelectedTheater_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortFrontEndContext.SetSeenLoginMessage
struct UFortFrontEndContext_SetSeenLoginMessage_Params
{
};

// Function FortniteUI.FortFrontEndContext.SetPersonalHeroChoice
struct UFortFrontEndContext_SetPersonalHeroChoice_Params
{
	class UFortHero*                                   Hero;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SetHeroChoice
struct UFortFrontEndContext_SetHeroChoice_Params
{
	int                                                PartyMemberIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortHero*                                   Hero;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SetFrontEndVisibility
struct UFortFrontEndContext_SetFrontEndVisibility_Params
{
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SetFrontEndCamera
struct UFortFrontEndContext_SetFrontEndCamera_Params
{
	EFrontEndCamera                                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SendPlayQuestAnalytic
struct UFortFrontEndContext_SendPlayQuestAnalytic_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SendFrontendEnteredEvent
struct UFortFrontEndContext_SendFrontendEnteredEvent_Params
{
};

// Function FortniteUI.FortFrontEndContext.SelectTileForQuest
struct UFortFrontEndContext_SelectTileForQuest_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCriticalMissionDifficultyOverrideMin;                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutCriticalMissionDifficultyOverrideMax;                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SelectGadgetForSlot
struct UFortFrontEndContext_SelectGadgetForSlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         GadgetDefinition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.SelectDefaultTheaterTile
struct UFortFrontEndContext_SelectDefaultTheaterTile_Params
{
};

// Function FortniteUI.FortFrontEndContext.SelectDefaultTheater
struct UFortFrontEndContext_SelectDefaultTheater_Params
{
};

// Function FortniteUI.FortFrontEndContext.RunBenchmarkAndApplyBestSettings
struct UFortFrontEndContext_RunBenchmarkAndApplyBestSettings_Params
{
};

// Function FortniteUI.FortFrontEndContext.PushContentWidget_Adv
struct UFortFrontEndContext_PushContentWidget_Adv_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.PlayLevelUpEffect
struct UFortFrontEndContext_PlayLevelUpEffect_Params
{
};

// Function FortniteUI.FortFrontEndContext.PlayEvolutionEffect
struct UFortFrontEndContext_PlayEvolutionEffect_Params
{
};

// Function FortniteUI.FortFrontEndContext.IsActiveTileMissionValid
struct UFortFrontEndContext_IsActiveTileMissionValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetUITestingClass
struct UFortFrontEndContext_GetUITestingClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetTileMissionDetails
struct UFortFrontEndContext_GetTileMissionDetails_Params
{
	class AFortTheaterMapTile*                         Tile;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortMissionDetails                         MissionDetails;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterType
struct UFortFrontEndContext_GetTheaterType_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
	EFortTheaterType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterRegionCount
struct UFortFrontEndContext_GetTheaterRegionCount_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterName
struct UFortFrontEndContext_GetTheaterName_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterData
struct UFortFrontEndContext_GetTheaterData_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
	struct FFortTheaterMapData                         OutTheaterData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterId
struct UFortFrontEndContext_GetSelectedTheaterId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterData
struct UFortFrontEndContext_GetSelectedTheaterData_Params
{
	struct FFortTheaterMapData                         OutTheaterData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetSelectableGadgets
struct UFortFrontEndContext_GetSelectableGadgets_Params
{
	TArray<class UFortWorldItem*>                      SelectableGadgets;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<class UFortWorldItem*>                      LastSelectedGadgets;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortFrontEndContext.GetReturnToFrontendBehavior
struct UFortFrontEndContext_GetReturnToFrontendBehavior_Params
{
	EFortReturnToFrontendBehavior                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetRequirementText
struct UFortFrontEndContext_GetRequirementText_Params
{
	struct FFortRequirementsInfo                       InRequirements;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetRecommendedTeamDifficulties
struct UFortFrontEndContext_GetRecommendedTeamDifficulties_Params
{
	TArray<struct FGameDifficultyInfo>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetRecommendedDifficultyIndexesInAvailableDifficulties
struct UFortFrontEndContext_GetRecommendedDifficultyIndexesInAvailableDifficulties_Params
{
	bool                                               bIncludeMissionAlertTiles;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostStructureUpgradeCost
struct UFortFrontEndContext_GetOutpostStructureUpgradeCost_Params
{
	int                                                TheaterSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortOutpostItemDefinition*                  OutpostStructure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               OutWorldItems;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FFortItemQuantityPair>               OutAccountItems;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostStructureMaxLevel
struct UFortFrontEndContext_GetOutpostStructureMaxLevel_Params
{
	int                                                TheaterSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortOutpostItemDefinition*                  OutpostStructure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostCoreLevelByTheaterId
struct UFortFrontEndContext_GetOutpostCoreLevelByTheaterId_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
	int                                                OutCoreLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostCoreLevelByItemDefinition
struct UFortFrontEndContext_GetOutpostCoreLevelByItemDefinition_Params
{
	class UFortOutpostItemDefinition*                  OutpostCoreItemDef;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutCoreLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetMCPRegion
struct UFortFrontEndContext_GetMCPRegion_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetMaxAvailableDifficulty
struct UFortFrontEndContext_GetMaxAvailableDifficulty_Params
{
	bool                                               bIncludeMissionAlertTiles;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameDifficultyInfo                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetItemFromItemQuantityPair
struct UFortFrontEndContext_GetItemFromItemQuantityPair_Params
{
	struct FFortItemQuantityPair                       InPair;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortItemDefinition*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnForCurrentDisplayedItem
struct UFortFrontEndContext_GetHeroPlayerPawnForCurrentDisplayedItem_Params
{
	class AFortPlayerPawn*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnByIndex
struct UFortFrontEndContext_GetHeroPlayerPawnByIndex_Params
{
	int                                                PartyMemberIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetHarvestingToolForLevel
struct UFortFrontEndContext_GetHarvestingToolForLevel_Params
{
	int                                                TheaterSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InHarvestingOptimizerLevel;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFrontEndCamera
struct UFortFrontEndContext_GetFrontEndCamera_Params
{
	EFrontEndCamera                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFocusedTile
struct UFortFrontEndContext_GetFocusedTile_Params
{
	class AFortTheaterMapTile*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFocusedOrActiveTileMissionDetails
struct UFortFrontEndContext_GetFocusedOrActiveTileMissionDetails_Params
{
	struct FFortMissionDetails                         MissionDetails;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFeatureState
struct UFortFrontEndContext_GetFeatureState_Params
{
	EFortFrontEndFeature                               Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EFortFrontEndFeatureState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorStoredGooAmount
struct UFortFrontEndContext_GetFabricatorStoredGooAmount_Params
{
	int                                                TheaterSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorIncomingGooAmount
struct UFortFrontEndContext_GetFabricatorIncomingGooAmount_Params
{
	int                                                TheaterSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorDisintegrationSecondsRemaining
struct UFortFrontEndContext_GetFabricatorDisintegrationSecondsRemaining_Params
{
	int                                                TheaterSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetDesiredPlayButtonCamera
struct UFortFrontEndContext_GetDesiredPlayButtonCamera_Params
{
	EFrontEndCamera                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetDefenderSquadIDByTheaterID
struct UFortFrontEndContext_GetDefenderSquadIDByTheaterID_Params
{
	struct FString                                     TheaterId;                                                // (Parm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetCurrentTheaterName
struct UFortFrontEndContext_GetCurrentTheaterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetAvailableDifficulties
struct UFortFrontEndContext_GetAvailableDifficulties_Params
{
	bool                                               bIncludeMissionAlertTiles;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameDifficultyInfo>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetAttributeIcon
struct UFortFrontEndContext_GetAttributeIcon_Params
{
	struct FFortAttributeInfo                          InAttribute;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       InRequiredTags;                                           // (Parm)
	struct FFortMultiSizeBrush                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetAttributeDisplayName
struct UFortFrontEndContext_GetAttributeDisplayName_Params
{
	struct FFortAttributeInfo                          InAttribute;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       InRequiredTags;                                           // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetAttributeDescription
struct UFortFrontEndContext_GetAttributeDescription_Params
{
	struct FFortAttributeInfo                          InAttribute;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       InRequiredTags;                                           // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortFrontEndContext.GetAllTheaterData
struct UFortFrontEndContext_GetAllTheaterData_Params
{
	TArray<struct FFortTheaterMapData>                 OutAllTheaterData;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetActiveTileMissionDetails
struct UFortFrontEndContext_GetActiveTileMissionDetails_Params
{
	struct FFortMissionDetails                         MissionDetails;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetActiveTile
struct UFortFrontEndContext_GetActiveTile_Params
{
	class AFortTheaterMapTile*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.GetAccountLevelUpRewards
struct UFortFrontEndContext_GetAccountLevelUpRewards_Params
{
	TArray<struct FFortItemQuantityPair>               Rewards;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                AccountLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.ForceSetFeatureState
struct UFortFrontEndContext_ForceSetFeatureState_Params
{
	EFortFrontEndFeature                               Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EFortFrontEndFeatureState                          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.ClearSelectedTheater
struct UFortFrontEndContext_ClearSelectedTheater_Params
{
};

// Function FortniteUI.FortFrontEndContext.CanFindTileForQuest
struct UFortFrontEndContext_CanFindTileForQuest_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.CanCompleteQuestInFocusedOrActiveTileMission
struct UFortFrontEndContext_CanCompleteQuestInFocusedOrActiveTileMission_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.CanCompleteQuestInActiveTileMission
struct UFortFrontEndContext_CanCompleteQuestInActiveTileMission_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortFrontEndContext.BindToFeatureStateAndInitialize
struct UFortFrontEndContext_BindToFeatureStateAndInitialize_Params
{
	EFortFrontEndFeature                               Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGridPickerTile.SetData
struct UFortGridPickerTile_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridPickerTile.OnMouseLeave
struct UFortGridPickerTile_OnMouseLeave_Params
{
};

// Function FortniteUI.FortGridPickerTile.OnMouseEnter
struct UFortGridPickerTile_OnMouseEnter_Params
{
};

// Function FortniteUI.FortGridPickerTile.OnClicked
struct UFortGridPickerTile_OnClicked_Params
{
};

// Function FortniteUI.FortGridPickerTile.ForwardClicked
struct UFortGridPickerTile_ForwardClicked_Params
{
};

// Function FortniteUI.FortGridWidgetBase.SetTileWidth
struct UFortGridWidgetBase_SetTileWidth_Params
{
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridWidgetBase.SetTilesDown
struct UFortGridWidgetBase_SetTilesDown_Params
{
	int                                                Down;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridWidgetBase.SetTilesAcross
struct UFortGridWidgetBase_SetTilesAcross_Params
{
	int                                                Across;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridWidgetBase.SetTilePadding
struct UFortGridWidgetBase_SetTilePadding_Params
{
	struct FMargin                                     Padding;                                                  // (Parm)
};

// Function FortniteUI.FortGridWidgetBase.SetTileHeight
struct UFortGridWidgetBase_SetTileHeight_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage
struct UFortGridWidgetBase_SetPeekOverflowTilePercentage_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridWidgetBase.SetDataProvider
struct UFortGridWidgetBase_SetDataProvider_Params
{
	TArray<class UObject*>                             Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortGridWidgetBase.SetClearWidgetType
struct UFortGridWidgetBase_SetClearWidgetType_Params
{
	class UClass*                                      InClearWidgetType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridWidgetBase.GetTiles
struct UFortGridWidgetBase_GetTiles_Params
{
	TArray<class UFortGridPickerTile*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGridWidgetBase.GetTileForObject
struct UFortGridWidgetBase_GetTileForObject_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortGridPickerTile*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortGridPickerButton.SetIsOpen
struct UFortGridPickerButton_SetIsOpen_Params
{
	bool                                               ShouldBeOpen;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortGridPickerButton.OnIsGridPickerOpenChanged__DelegateSignature
struct UFortGridPickerButton_OnIsGridPickerOpenChanged__DelegateSignature_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGridPickerButton.OnButtonClicked
struct UFortGridPickerButton_OnButtonClicked_Params
{
};

// DelegateFunction FortniteUI.FortGridPickerButton.CreateGridWidget__DelegateSignature
struct UFortGridPickerButton_CreateGridWidget__DelegateSignature_Params
{
	class UFortGridPickerGrid*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.TriggerHerosStickies
struct UFortHeroManagementContext_TriggerHerosStickies_Params
{
};

// Function FortniteUI.FortHeroManagementContext.SetHeroName
struct UFortHeroManagementContext_SetHeroName_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.SetCurrentHero
struct UFortHeroManagementContext_SetCurrentHero_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepthFromID
struct UFortHeroManagementContext_RequestSetTraitDepthFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepth
struct UFortHeroManagementContext_RequestSetTraitDepth_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.RequestCreateHero
struct UFortHeroManagementContext_RequestCreateHero_Params
{
	class UFortHeroType*                               HeroType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<EFortCustomGender>                     Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbilityFromID
struct UFortHeroManagementContext_RedeemPrevAbilityFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbility
struct UFortHeroManagementContext_RedeemPrevAbility_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilitiesFromID
struct UFortHeroManagementContext_RedeemAllAbilitiesFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilities
struct UFortHeroManagementContext_RedeemAllAbilities_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbilityFromID
struct UFortHeroManagementContext_PurchaseNextAbilityFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbility
struct UFortHeroManagementContext_PurchaseNextAbility_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.MarkHeroAsSeen
struct UFortHeroManagementContext_MarkHeroAsSeen_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlocked
struct UFortHeroManagementContext_IsSkillTreeUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.IsShowingStatsScreen
struct UFortHeroManagementContext_IsShowingStatsScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.IsCreateHeroEnabled
struct UFortHeroManagementContext_IsCreateHeroEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetXPRequiredForHeroLevel
struct UFortHeroManagementContext_GetXPRequiredForHeroLevel_Params
{
	int                                                HeroLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetTraitDepthFromID
struct UFortHeroManagementContext_GetTraitDepthFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetTraitDepth
struct UFortHeroManagementContext_GetTraitDepth_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Depth;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPointsFromID
struct UFortHeroManagementContext_GetNumUnspentAbilityPointsFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPoints
struct UFortHeroManagementContext_GetNumUnspentAbilityPoints_Params
{
	int                                                NumAbilityPoints;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetNumHeroTraits
struct UFortHeroManagementContext_GetNumHeroTraits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCostFromID
struct UFortHeroManagementContext_GetNextAbilityCostFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCost
struct UFortHeroManagementContext_GetNextAbilityCost_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetMaxNameLength
struct UFortHeroManagementContext_GetMaxNameLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetHeroLevelAtXP
struct UFortHeroManagementContext_GetHeroLevelAtXP_Params
{
	int                                                Xp;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetHeroDataFromID
struct UFortHeroManagementContext_GetHeroDataFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	struct FHeroUIData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortHeroManagementContext.GetHeroData
struct UFortHeroManagementContext_GetHeroData_Params
{
	struct FHeroUIData                                 HeroData;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetDisplayStats
struct UFortHeroManagementContext_GetDisplayStats_Params
{
	TArray<struct FFortGameplayEffectModifierDescription> Stats;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortHeroManagementContext.GetCurrentHeroID
struct UFortHeroManagementContext_GetCurrentHeroID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetCoreAbilities
struct UFortHeroManagementContext_GetCoreAbilities_Params
{
	TArray<class UFortAbilityKit*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArrayFromID
struct UFortHeroManagementContext_GetAttributeValuesArrayFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	TArray<struct FGameplayAttribute>                  Attributes;                                               // (Parm, ZeroConstructor)
	TArray<float>                                      Values;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               bUseProxy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArray
struct UFortHeroManagementContext_GetAttributeValuesArray_Params
{
	TArray<struct FGameplayAttribute>                  Attributes;                                               // (Parm, ZeroConstructor)
	TArray<float>                                      Values;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               bUseProxy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValueFromID
struct UFortHeroManagementContext_GetAttributeValueFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	struct FGameplayAttribute                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bUseProxy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValue
struct UFortHeroManagementContext_GetAttributeValue_Params
{
	struct FGameplayAttribute                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bUseProxy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetAllHeroIDs
struct UFortHeroManagementContext_GetAllHeroIDs_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortHeroManagementContext.GetAbilitySystemComponent
struct UFortHeroManagementContext_GetAbilitySystemComponent_Params
{
	class UFortAbilitySystemComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetAbilityCostFromID
struct UFortHeroManagementContext_GetAbilityCostFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TraitDepth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GetAbilityCost
struct UFortHeroManagementContext_GetAbilityCost_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TraitDepth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.GenerateRandomHeroName
struct UFortHeroManagementContext_GenerateRandomHeroName_Params
{
	class UDataTable*                                  NameTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortHeroManagementContext.FocusOnHero
struct UFortHeroManagementContext_FocusOnHero_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortHeroManagementContext.CheckHeroNameValidity
struct UFortHeroManagementContext_CheckHeroNameValidity_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	ENameStatus                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanRedeemAllAbilities
struct UFortHeroManagementContext_CanRedeemAllAbilities_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepthFromID
struct UFortHeroManagementContext_CanModifyTraitDepthFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepth
struct UFortHeroManagementContext_CanModifyTraitDepth_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbilityFromID
struct UFortHeroManagementContext_CanAffordNextAbilityFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbility
struct UFortHeroManagementContext_CanAffordNextAbility_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordAbilityFromID
struct UFortHeroManagementContext_CanAffordAbilityFromID_Params
{
	struct FString                                     HeroId;                                                   // (Parm, ZeroConstructor)
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TraitDepth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordAbility
struct UFortHeroManagementContext_CanAffordAbility_Params
{
	int                                                TraitIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TraitDepth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroNotificationHandler.OnFortItemUpdated
struct UFortHeroNotificationHandler_OnFortItemUpdated_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.SetSupportTypeToRepresent
struct UFortHeroSupportPerkWidget_SetSupportTypeToRepresent_Params
{
	EFortSupportBonusType                              InSupportTypeToRepresent;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.SetState
struct UFortHeroSupportPerkWidget_SetState_Params
{
	EFortSupportPerkWidgetState                        InState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.SetHeroToRepresent
struct UFortHeroSupportPerkWidget_SetHeroToRepresent_Params
{
	class UFortHero*                                   InHeroToRepresent;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.OnSupportTypeUpdated
struct UFortHeroSupportPerkWidget_OnSupportTypeUpdated_Params
{
};

// Function FortniteUI.FortHeroSupportPerkWidget.OnStateChanged
struct UFortHeroSupportPerkWidget_OnStateChanged_Params
{
};

// Function FortniteUI.FortHeroSupportPerkWidget.OnHeroUpdated
struct UFortHeroSupportPerkWidget_OnHeroUpdated_Params
{
};

// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkUnlocked
struct UFortHeroSupportPerkWidget_IsPerkUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkInCorrectSlot
struct UFortHeroSupportPerkWidget_IsPerkInCorrectSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkHighlighted
struct UFortHeroSupportPerkWidget_IsPerkHighlighted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkEmpty
struct UFortHeroSupportPerkWidget_IsPerkEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.IsPerkActive
struct UFortHeroSupportPerkWidget_IsPerkActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkWidget.IsHeroInSupportSlot
struct UFortHeroSupportPerkWidget_IsHeroInSupportSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.TryGetHomebaseNodeState
struct UFortHomebaseNodeItemUtilities_TryGetHomebaseNodeState_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseNodeState                          OutNodeState;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen
struct UFortHomebaseNodeItemUtilities_IsSquadSlotUnseen_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlot;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer
struct UFortHomebaseNodeItemUtilities_IsHomebaseNodeItemUnseenForTagContainer_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodePageNames
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodePageNames_Params
{
	TArray<struct FName>                               NodePages;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItems
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItems_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortHomebaseNodeItem*>               NodeItems;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemNameForTagContainer_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForTagContainer_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortHomebaseNodeItem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForSquadSlot_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlot;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortHomebaseNodeItem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItem
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItem_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeID;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UFortHomebaseNodeItem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType
struct UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadType_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EFortHomebaseSquadType                             SquadType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId
struct UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadId_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.SetShowHeroHeadAccessoriesInClientSettingsRecord
struct UFortHomebaseUIContext_SetShowHeroHeadAccessoriesInClientSettingsRecord_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.SetShowHeroHeadAccessoriesForLocalPlayer
struct UFortHomebaseUIContext_SetShowHeroHeadAccessoriesForLocalPlayer_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.SetShowHeroBackpackInClientSettingsRecord
struct UFortHomebaseUIContext_SetShowHeroBackpackInClientSettingsRecord_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.SetShowHeroBackpackForLocalPlayer
struct UFortHomebaseUIContext_SetShowHeroBackpackForLocalPlayer_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortHomebaseUIContext.OnSquadSlotChanged__DelegateSignature
struct UFortHomebaseUIContext_OnSquadSlotChanged__DelegateSignature_Params
{
	struct FName                                       SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortHomebaseUIContext.OnNodesPurchased__DelegateSignature
struct UFortHomebaseUIContext_OnNodesPurchased__DelegateSignature_Params
{
	struct FName                                       NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.IsInEarlyGame
struct UFortHomebaseUIContext_IsInEarlyGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.IsAnySquadSlotUnlocked
struct UFortHomebaseUIContext_IsAnySquadSlotUnlocked_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetWorkerSetBonusEffectModifiers
struct UFortHomebaseUIContext_GetWorkerSetBonusEffectModifiers_Params
{
	struct FGameplayTag                                SetBonusTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FFortAttributeModifierDisplayData>   OutModifiers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortHomebaseUIContext.GetSquadIcon
struct UFortHomebaseUIContext_GetSquadIcon_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortMultiSizeBrush                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortHomebaseUIContext.GetShowHeroHeadAccessoriesForLocalPlayer
struct UFortHomebaseUIContext_GetShowHeroHeadAccessoriesForLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetShowHeroBackpackForLocalPlayer
struct UFortHomebaseUIContext_GetShowHeroBackpackForLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetRootSkillTreePageId
struct UFortHomebaseUIContext_GetRootSkillTreePageId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetRootSkillTreeNodeId
struct UFortHomebaseUIContext_GetRootSkillTreeNodeId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetQuestNodeColour
struct UFortHomebaseUIContext_GetQuestNodeColour_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortHomebaseUIContext.GetNodeTagBonusesForDisplay
struct UFortHomebaseUIContext_GetNodeTagBonusesForDisplay_Params
{
	struct FName                                       NodeID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortTagUIData>                      OutGrantedTagsUIData;                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetNodeDescription
struct UFortHomebaseUIContext_GetNodeDescription_Params
{
	struct FName                                       NodeID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutDescription;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetNodeAttributeBonusesForDisplay
struct UFortHomebaseUIContext_GetNodeAttributeBonusesForDisplay_Params
{
	struct FName                                       NodeID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortDisplayAttribute>               OutDisplayAttributes;                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetLocalPlayerHasHeroHeadAccessories
struct UFortHomebaseUIContext_GetLocalPlayerHasHeroHeadAccessories_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetLocalPlayerHasHeroBackpack
struct UFortHomebaseUIContext_GetLocalPlayerHasHeroBackpack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetItemsInSquad
struct UFortHomebaseUIContext_GetItemsInSquad_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveEmptySquadSlots;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortHomebaseUIContext.GetItemInSquadSlot
struct UFortHomebaseUIContext_GetItemInSquadSlot_Params
{
	struct FName                                       SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameRootSkillTreePageId
struct UFortHomebaseUIContext_GetEarlyGameRootSkillTreePageId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameRootSkillTreeNodeId
struct UFortHomebaseUIContext_GetEarlyGameRootSkillTreeNodeId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameNodeProgressionState
struct UFortHomebaseUIContext_GetEarlyGameNodeProgressionState_Params
{
	int                                                OutOwnedNodeCount;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutRequiredNodeCountToLeaveEarlyGame;                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseUIContext.GetEarlyGameNodePageId
struct UFortHomebaseUIContext_GetEarlyGameNodePageId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHomeCMSScreenBase.OnTilesLoaded
struct UFortHomeCMSScreenBase_OnTilesLoaded_Params
{
};

// Function FortniteUI.FortHomeCMSScreenBase.AreTilesLoaded
struct UFortHomeCMSScreenBase_AreTilesLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDCenterPopupMessageWidget.UpdateState
struct UFortHUDCenterPopupMessageWidget_UpdateState_Params
{
};

// Function FortniteUI.FortHUDCenterPopupMessageWidget.OnModalDisplayed
struct UFortHUDCenterPopupMessageWidget_OnModalDisplayed_Params
{
	ECenterPopupMessageStateEnum                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonActivatablePanel*                     ModalPopup;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortHUDCenterPopupMessageWidget.GetCenterPopupMessageState
struct UFortHUDCenterPopupMessageWidget_GetCenterPopupMessageState_Params
{
	ECenterPopupMessageStateEnum                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.UpdateTrapAttachedToBuilding
struct UFortHUDContext_UpdateTrapAttachedToBuilding_Params
{
};

// Function FortniteUI.FortHUDContext.ShouldOnlyShowNextPrevBuildingSlotKeybinds
struct UFortHUDContext_ShouldOnlyShowNextPrevBuildingSlotKeybinds_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.SetIndicatorsState
struct UFortHUDContext_SetIndicatorsState_Params
{
	EFortIndicatorState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.SetIndicatorsAllowed
struct UFortHUDContext_SetIndicatorsAllowed_Params
{
	bool                                               bIndicatorsAllowed;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.SetHUDElementVisibility
struct UFortHUDContext_SetHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HUDElementTags;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bHideElements;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.SetCursorModeLocked
struct UFortHUDContext_SetCursorModeLocked_Params
{
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.RequestMgmtMenuTab
struct UFortHUDContext_RequestMgmtMenuTab_Params
{
	struct FName                                       TabName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.RemovePointOfInterest
struct UFortHUDContext_RemovePointOfInterest_Params
{
	class AActor*                                      PointOfInterest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.IsInCursorMode
struct UFortHUDContext_IsInCursorMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.HandleLocalPlayerViewTargetChanged
struct UFortHUDContext_HandleLocalPlayerViewTargetChanged_Params
{
};

// Function FortniteUI.FortHUDContext.HandleLocalPlayerPlaceChanged
struct UFortHUDContext_HandleLocalPlayerPlaceChanged_Params
{
};

// Function FortniteUI.FortHUDContext.HandleLocalPlayerKillsChanged
struct UFortHUDContext_HandleLocalPlayerKillsChanged_Params
{
};

// Function FortniteUI.FortHUDContext.HandleLocalPawnSpawned
struct UFortHUDContext_HandleLocalPawnSpawned_Params
{
};

// Function FortniteUI.FortHUDContext.HandleLocalPawnRevived
struct UFortHUDContext_HandleLocalPawnRevived_Params
{
};

// Function FortniteUI.FortHUDContext.HandleLocalPawnDied
struct UFortHUDContext_HandleLocalPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortHUDContext.HandleFocusedBuildingHealthChanged
struct UFortHUDContext_HandleFocusedBuildingHealthChanged_Params
{
};

// Function FortniteUI.FortHUDContext.GetTeamCornerstone
struct UFortHUDContext_GetTeamCornerstone_Params
{
	TEnumAsByte<EFortTeam>                             Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPvPBaseCornerstone*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetScoreDisplayFactor
struct UFortHUDContext_GetScoreDisplayFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetPotentialBadges
struct UFortHUDContext_GetPotentialBadges_Params
{
	TArray<struct FFortBadgeCount>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortHUDContext.GetPlayerStateZone
struct UFortHUDContext_GetPlayerStateZone_Params
{
	class AFortPlayerStateZone*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetMissionRewards
struct UFortHUDContext_GetMissionRewards_Params
{
	TArray<class UFortItem*>                           MissionRewards;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<class UFortItem*>                           MissionAlertRewards;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortHUDContext.GetMissionOverviewObjectives
struct UFortHUDContext_GetMissionOverviewObjectives_Params
{
	TArray<struct FZoneLoadingScreenHeadingConfig>     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortHUDContext.GetMissionManager
struct UFortHUDContext_GetMissionManager_Params
{
	class AFortMissionManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetKillerVisualInfoFromDeathReport
struct UFortHUDContext_GetKillerVisualInfoFromDeathReport_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortKillerVisualInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortHUDContext.GetIndicatorsState
struct UFortHUDContext_GetIndicatorsState_Params
{
	EFortIndicatorState                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetGameStateZone
struct UFortHUDContext_GetGameStateZone_Params
{
	class AFortGameStateZone*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetFocusedMission
struct UFortHUDContext_GetFocusedMission_Params
{
	class AFortMission*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetFocusedBuildingInfo
struct UFortHUDContext_GetFocusedBuildingInfo_Params
{
	struct FFortFocusedBuildingInfo                    OutBuildingInfo;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetEarnedBadges
struct UFortHUDContext_GetEarnedBadges_Params
{
	TArray<struct FEarnedBadgeEntry>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortHUDContext.GetCurrentHero
struct UFortHUDContext_GetCurrentHero_Params
{
	class UFortHero*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetCurrentBasicMissionInfo
struct UFortHUDContext_GetCurrentBasicMissionInfo_Params
{
	struct FFortBasicMissionInfo                       BasicMissionInfo;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.GetBluGloManager
struct UFortHUDContext_GetBluGloManager_Params
{
	class AFortBluGloManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.ForwardOnWeaponEquipped
struct UFortHUDContext_ForwardOnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.ForwardOnNumSurvivorsRescuedChanged
struct UFortHUDContext_ForwardOnNumSurvivorsRescuedChanged_Params
{
	int                                                NumSurvivorsRescued;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.ForwardOnMissionsUpdated
struct UFortHUDContext_ForwardOnMissionsUpdated_Params
{
};

// Function FortniteUI.FortHUDContext.ForwardOnAbilityDecisionWindowStackUpdated
struct UFortHUDContext_ForwardOnAbilityDecisionWindowStackUpdated_Params
{
};

// Function FortniteUI.FortHUDContext.EnterCursorMode
struct UFortHUDContext_EnterCursorMode_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.EnterCameraMode
struct UFortHUDContext_EnterCameraMode_Params
{
};

// Function FortniteUI.FortHUDContext.AreIndicatorsEnabled
struct UFortHUDContext_AreIndicatorsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.AreHUDElementsVisible
struct UFortHUDContext_AreHUDElementsVisible_Params
{
	struct FGameplayTagContainer                       HUDElementTags;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortHUDContext.AddPointOfInterest
struct UFortHUDContext_AddPointOfInterest_Params
{
	class AActor*                                      PointOfInterest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (Parm)
	class UTexture2D*                                  DisplayImage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDGamePhaseChangingBase.UpdateMessaging
struct UAthenaHUDGamePhaseChangingBase_UpdateMessaging_Params
{
	EAthenaGamePhaseStep                               Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       MESSAGE;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       TimeText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.AthenaHUDGamePhaseChangingBase.HandleGamePhaseStepChanged
struct UAthenaHUDGamePhaseChangingBase_HandleGamePhaseStepChanged_Params
{
	EAthenaGamePhaseStep                               Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDGamePhaseChangingBase.GamePhaseStepChanged
struct UAthenaHUDGamePhaseChangingBase_GamePhaseStepChanged_Params
{
	EAthenaGamePhaseStep                               Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDPlayerActionAlertBase.RequestNextAlert
struct UAthenaHUDPlayerActionAlertBase_RequestNextAlert_Params
{
};

// Function FortniteUI.AthenaHUDPlayerActionAlertBase.AlertPlayer
struct UAthenaHUDPlayerActionAlertBase_AlertPlayer_Params
{
	EAthenaPlayerActionAlert                           Alert;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DetailText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortCraftingBarWidget.SetHideCraftingBar
struct UFortCraftingBarWidget_SetHideCraftingBar_Params
{
	bool                                               bInHideCraftBar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCraftingBarWidget.OnCompletedSetHidden
struct UFortCraftingBarWidget_OnCompletedSetHidden_Params
{
};

// Function FortniteUI.FortCraftingBarWidget.HandlePlayerStoppedCrafting
struct UFortCraftingBarWidget_HandlePlayerStoppedCrafting_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCraftFailCause                                CraftFailureCause;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCraftingBarWidget.HandlePlayerStartedCrafting
struct UFortCraftingBarWidget_HandlePlayerStartedCrafting_Params
{
};

// Function FortniteUI.FortHUDObjectiveSizeInterface.GetHeightEstimate
struct UFortHUDObjectiveSizeInterface_GetHeightEstimate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMissionTrackerList.UpdateVisibility
struct UFortMissionTrackerList_UpdateVisibility_Params
{
};

// Function FortniteUI.FortMissionTrackerList.HandleSizeEstimateChanged
struct UFortMissionTrackerList_HandleSizeEstimateChanged_Params
{
	class UObject*                                     ChangedElement;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMissionTrackerList.HandleMissionsUpdated
struct UFortMissionTrackerList_HandleMissionsUpdated_Params
{
};

// Function FortniteUI.FortQuestTrackerList.HandleSizeEstimateChanged
struct UFortQuestTrackerList_HandleSizeEstimateChanged_Params
{
	class UObject*                                     ChangedElement;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortQuestTrackerList.HandleQuestsUpdated
struct UFortQuestTrackerList_HandleQuestsUpdated_Params
{
};

// Function FortniteUI.FortQuestTrackerList.HandleQuestEntryCreated
struct UFortQuestTrackerList_HandleQuestEntryCreated_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortQuestTrackerList.HandlePinnedQuestsChanged
struct UFortQuestTrackerList_HandlePinnedQuestsChanged_Params
{
};

// Function FortniteUI.FortQuestTrackerList.HandleHUDFinalObjectiveHidden
struct UFortQuestTrackerList_HandleHUDFinalObjectiveHidden_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortQuestTrackerList.GetQuestsToDisplay
struct UFortQuestTrackerList_GetQuestsToDisplay_Params
{
	TArray<class UFortQuestItem*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortMissionTracker.RefreshSizeEstimate
struct UFortMissionTracker_RefreshSizeEstimate_Params
{
};

// Function FortniteUI.FortMissionTracker.HandleSizeEstimateChanged
struct UFortMissionTracker_HandleSizeEstimateChanged_Params
{
	class UObject*                                     ChangedElement;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMissionTracker.HandleDebugHUDObjectiveHeightChanged
struct UFortMissionTracker_HandleDebugHUDObjectiveHeightChanged_Params
{
	bool                                               bIsDebugging;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortReticle.OnWeaponEquipped
struct UFortReticle_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortReticle.OnReticleColorChanged
struct UFortReticle_OnReticleColorChanged_Params
{
};

// Function FortniteUI.FortReticle.OnPawnSet
struct UFortReticle_OnPawnSet_Params
{
};

// Function FortniteUI.FortReticle.OnContextualReticleChanged
struct UFortReticle_OnContextualReticleChanged_Params
{
};

// Function FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetHealthChanged
struct UFortHUDTargetUnderReticleWidget_OnTargetHealthChanged_Params
{
};

// Function FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetChanged
struct UFortHUDTargetUnderReticleWidget_OnTargetChanged_Params
{
};

// Function FortniteUI.FortHUDTargetUnderReticleWidget.HandleOnHUDTargetUnderReticle
struct UFortHUDTargetUnderReticleWidget_HandleOnHUDTargetUnderReticle_Params
{
	TScriptInterface<class UFortHUDTargetUnderReticleInterface> NewTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkIndicator.SetSupportTypeToRepresent
struct UFortHeroSupportPerkIndicator_SetSupportTypeToRepresent_Params
{
	EFortSupportBonusType                              SupportTypeToRepresent;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortHeroSupportPerkIndicator.SetItemToRepresent
struct UFortHeroSupportPerkIndicator_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCategoryIndicator.SetOrdinalOfCategoryToRepresent
struct UFortItemCategoryIndicator_SetOrdinalOfCategoryToRepresent_Params
{
	EFortItemCategoryOrdinal                           ItemCategoryOrdinal;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCategoryIndicator.SetLabelColorOverride
struct UFortItemCategoryIndicator_SetLabelColorOverride_Params
{
	struct FLinearColor                                InLabelColorOverride;                                     // (ConstParm, Parm, IsPlainOldData)
};

// Function FortniteUI.FortItemCategoryIndicator.SetItemToRepresent
struct UFortItemCategoryIndicator_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCategoryIndicator.ClearLabelColorOverride
struct UFortItemCategoryIndicator_ClearLabelColorOverride_Params
{
};

// Function FortniteUI.FortInventoryContext.WillQuickBarAcceptItem
struct UFortInventoryContext_WillQuickBarAcceptItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EFortQuickBars                                     InQuickBar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.UnlockSchematic
struct UFortInventoryContext_UnlockSchematic_Params
{
	class UFortSchematicItemDefinition*                SchematicDefinition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.UnlockAllSchematics
struct UFortInventoryContext_UnlockAllSchematics_Params
{
};

// Function FortniteUI.FortInventoryContext.SortAccountItemArrayForTransmog
struct UFortInventoryContext_SortAccountItemArrayForTransmog_Params
{
	TArray<class UFortAccountItem*>                    VaultItems;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortAccountItem*>                    SortedItems;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.SetSchematicPinned
struct UFortInventoryContext_SetSchematicPinned_Params
{
	class UFortSchematicItem*                          Schematic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.RemoveItemFromQuickBar
struct UFortInventoryContext_RemoveItemFromQuickBar_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.MakeItemQuantityPair
struct UFortInventoryContext_MakeItemQuantityPair_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortItemQuantityPair                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.LockAllSchematics
struct UFortInventoryContext_LockAllSchematics_Params
{
};

// Function FortniteUI.FortInventoryContext.IsTrapAvailableForBuilding
struct UFortInventoryContext_IsTrapAvailableForBuilding_Params
{
	class ABuildingSMActor*                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.IsSlotHidden
struct UFortInventoryContext_IsSlotHidden_Params
{
	EFortQuickBars                                     InQuickBar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.IsSchematicPinned
struct UFortInventoryContext_IsSchematicPinned_Params
{
	class UFortSchematicItem*                          Schematic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.IsRecyclable
struct UFortInventoryContext_IsRecyclable_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.HasTrapReadyForBuilding
struct UFortInventoryContext_HasTrapReadyForBuilding_Params
{
	class ABuildingSMActor*                            BuildingToAttachTo;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.HasGameplayTagContainerExact
struct UFortInventoryContext_HasGameplayTagContainerExact_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.HasGameplayTagContainer
struct UFortInventoryContext_HasGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.HasEvolutions
struct UFortInventoryContext_HasEvolutions_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetWorldItemListForDeployableBaseThePlayerIsIn
struct UFortInventoryContext_GetWorldItemListForDeployableBaseThePlayerIsIn_Params
{
	TArray<class UFortWorldItem*>                      Items;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FFortItemListFilter                         FilterSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortInventoryContext.GetWorldItemList
struct UFortInventoryContext_GetWorldItemList_Params
{
	TArray<class UFortWorldItem*>                      Items;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FFortItemListFilter                         FilterSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortInventoryContext.GetVoucherResourceItemDefinition
struct UFortInventoryContext_GetVoucherResourceItemDefinition_Params
{
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetVaultItemLimitStatus
struct UFortInventoryContext_GetVaultItemLimitStatus_Params
{
	EVaultItemLimitStatus                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetVaultItemLimit
struct UFortInventoryContext_GetVaultItemLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetUserFriendlyTags
struct UFortInventoryContext_GetUserFriendlyTags_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetTrapAttachTypeName
struct UFortInventoryContext_GetTrapAttachTypeName_Params
{
	class ABuildingSMActor*                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetTransmogSacrificeDataFromItemDefintion
struct UFortInventoryContext_GetTransmogSacrificeDataFromItemDefintion_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransmogSacrifice                          OutTransmogData;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetTransformKeys
struct UFortInventoryContext_GetTransformKeys_Params
{
	EConversionControlKeyRequest                       RequestType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryContentSortType                          SortType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortAccountItem*>                    TransformKeys;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.GetTotalItemQuantityByDefinition
struct UFortInventoryContext_GetTotalItemQuantityByDefinition_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetTierText
struct UFortInventoryContext_GetTierText_Params
{
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetSupportBonusPerks
struct UFortInventoryContext_GetSupportBonusPerks_Params
{
	class UFortHero*                                   Hero;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortUIPerk>                         SupportBonusPerks;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetStorageOverflowFromAddingItem
struct UFortInventoryContext_GetStorageOverflowFromAddingItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetStorageNumItems
struct UFortInventoryContext_GetStorageNumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetStorageCapacity
struct UFortInventoryContext_GetStorageCapacity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetSchematicResourceItemDefinition
struct UFortInventoryContext_GetSchematicResourceItemDefinition_Params
{
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetSchematicItemList
struct UFortInventoryContext_GetSchematicItemList_Params
{
	TArray<class UFortSchematicItem*>                  Items;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FFortItemListFilter                         FilterSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortInventoryContext.GetResourceItemDefinition
struct UFortInventoryContext_GetResourceItemDefinition_Params
{
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortResourceItemDefinition*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetResourceIcon
struct UFortInventoryContext_GetResourceIcon_Params
{
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetResourceCount
struct UFortInventoryContext_GetResourceCount_Params
{
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetRecyclingWarningText
struct UFortInventoryContext_GetRecyclingWarningText_Params
{
	EItemRecyclingWarning                              Warning;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WereAnyItemsAnimate;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetRecyclingCatalystDisplayName
struct UFortInventoryContext_GetRecyclingCatalystDisplayName_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetRecycleRestrictionReasonText
struct UFortInventoryContext_GetRecycleRestrictionReasonText_Params
{
	EItemRecyclingRestrictionReason                    Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetQuickBarSlottedItem
struct UFortInventoryContext_GetQuickBarSlottedItem_Params
{
	EFortQuickBars                                     InQuickBar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetQuickbarFocus
struct UFortInventoryContext_GetQuickbarFocus_Params
{
	EFortQuickBars                                     OutQuickBar;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSlot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSecondarySlot;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutPreviousFocusedSlot;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetPinnedSchematicList
struct UFortInventoryContext_GetPinnedSchematicList_Params
{
	TArray<class UFortSchematicItem*>                  PinnedItems;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.GetPersonnelResourceItemDefinition
struct UFortInventoryContext_GetPersonnelResourceItemDefinition_Params
{
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetNumInInventory
struct UFortInventoryContext_GetNumInInventory_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeReserved;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetItemTierRecyclingWarningThreshold
struct UFortInventoryContext_GetItemTierRecyclingWarningThreshold_Params
{
	TEnumAsByte<EFortItemTier>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetItemRarityRecyclingWarningThreshold
struct UFortInventoryContext_GetItemRarityRecyclingWarningThreshold_Params
{
	EFortRarity                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetItemLevelRecyclingWarningThreshold
struct UFortInventoryContext_GetItemLevelRecyclingWarningThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetItemInstancesByDefinition
struct UFortInventoryContext_GetItemInstancesByDefinition_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.GetHomebaseUnlockedTransmogKeys
struct UFortInventoryContext_GetHomebaseUnlockedTransmogKeys_Params
{
	TArray<class UFortAccountItem*>                    TransmogKeys;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.GetHeroResourceItemDefinition
struct UFortInventoryContext_GetHeroResourceItemDefinition_Params
{
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetHeroAbilityPerks
struct UFortInventoryContext_GetHeroAbilityPerks_Params
{
	class UFortHero*                                   Hero;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortUIPerk>                         HeroAbilityPerks;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetGameplayTagByIndex
struct UFortInventoryContext_GetGameplayTagByIndex_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetEvolveRestrictionReasonText
struct UFortInventoryContext_GetEvolveRestrictionReasonText_Params
{
	EItemEvolutionRestrictionReason                    Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetEquippedWeapon
struct UFortInventoryContext_GetEquippedWeapon_Params
{
	class AFortWeapon*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetDisassembleRestrictionReasonText
struct UFortInventoryContext_GetDisassembleRestrictionReasonText_Params
{
	EItemDisassembleRestrictionReason                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetDeployableBaseOverflowFromAddingItem
struct UFortInventoryContext_GetDeployableBaseOverflowFromAddingItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetDeployableBaseItemCounts
struct UFortInventoryContext_GetDeployableBaseItemCounts_Params
{
	int                                                ItemsCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemsCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OverflowItemsCount;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition
struct UFortInventoryContext_GetCurrentResourceItemDefinition_Params
{
	class UFortResourceItemDefinition*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetCurrentResourceCount
struct UFortInventoryContext_GetCurrentResourceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition
struct UFortInventoryContext_GetCurrentAmmoItemDefinition_Params
{
	class UFortWorldItemDefinition*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetCountOfVaultLimitedItems
struct UFortInventoryContext_GetCountOfVaultLimitedItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetCountOfHeroItems
struct UFortInventoryContext_GetCountOfHeroItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetConversionRecipesFromItemDefintion
struct UFortInventoryContext_GetConversionRecipesFromItemDefintion_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRecipe>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortInventoryContext.GetBackpackOverflowFromAddingItem
struct UFortInventoryContext_GetBackpackOverflowFromAddingItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetBackpackItemCounts
struct UFortInventoryContext_GetBackpackItemCounts_Params
{
	int                                                ItemsCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemsCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OverflowItemsCount;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.GetAccountItemsByType
struct UFortInventoryContext_GetAccountItemsByType_Params
{
	EFortItemType                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortAccountItem*>                    Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.GetAccountItemsByFilterType
struct UFortInventoryContext_GetAccountItemsByFilterType_Params
{
	struct FString                                     SearchText;                                               // (ConstParm, Parm, ZeroConstructor)
	EInventoryContentSortType                          SortType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EFortInventoryFilter                               SubType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortAccountItem*>                    OutItemList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.EquipItem
struct UFortInventoryContext_EquipItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.EnumerateRecyclingWarningsForItems
struct UFortInventoryContext_EnumerateRecyclingWarningsForItems_Params
{
	TArray<class UFortItem*>                           Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EItemRecyclingWarning>                      OutWarnings;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortInventoryContext.DropItemOnQuickBar
struct UFortInventoryContext_DropItemOnQuickBar_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EFortQuickBars                                     TargetQuickbar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.DropItemOnPlayerOrWorld
struct UFortInventoryContext_DropItemOnPlayerOrWorld_Params
{
	class UFortWorldItem*                              ItemBeingDropped;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerState*                            InDestinationPlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     OwnerWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGeometry                                   InGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.DropItem
struct UFortInventoryContext_DropItem_Params
{
	class UFortWorldItem*                              ItemBeingDropped;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.DoesItemMatchFilter
struct UFortInventoryContext_DoesItemMatchFilter_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortItemListFilter                         FilterSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.DisassembleItem
struct UFortInventoryContext_DisassembleItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CraftSchematic
struct UFortInventoryContext_CraftSchematic_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCraftFailCause                                FailCause;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CraftAndSlotSchematic
struct UFortInventoryContext_CraftAndSlotSchematic_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PostCraftSlot;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCraftFailCause                                FailCause;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CanRecycle
struct UFortInventoryContext_CanRecycle_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EItemRecyclingRestrictionReason>            OutRestrictionReasons;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CanPinSchematic
struct UFortInventoryContext_CanPinSchematic_Params
{
	class UFortSchematicItem*                          Schematic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CanEvolve
struct UFortInventoryContext_CanEvolve_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EItemEvolutionRestrictionReason>            OutRestrictionReasons;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CanDisassembleItem
struct UFortInventoryContext_CanDisassembleItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EItemDisassembleRestrictionReason>          OutRestrictionReasons;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.CanCraftSchematic
struct UFortInventoryContext_CanCraftSchematic_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCraftFailCause                                FailCause;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.AreRecipeRequirementsMet
struct UFortInventoryContext_AreRecipeRequirementsMet_Params
{
	TArray<struct FFortItemQuantityPair>               RecipeCosts;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.AreAnyItemsUnseenForInventoryFilter
struct UFortInventoryContext_AreAnyItemsUnseenForInventoryFilter_Params
{
	EFortFrontendInventoryFilter                       FilterType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.AreAnyItemsAnimate
struct UFortInventoryContext_AreAnyItemsAnimate_Params
{
	TArray<class UFortItem*>                           Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortInventoryContext.ActivateItem
struct UFortInventoryContext_ActivateItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemCardUtilities.GetCardDimensions
struct UFortItemCardUtilities_GetCardDimensions_Params
{
	EFortItemType                                      ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  CardSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsReward;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseNewItemCardSizes;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemCooldownWidget.SetItem
struct UFortItemCooldownWidget_SetItem_Params
{
	class UFortWorldItem*                              InWorldItem;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCooldownWidget.OnWorldItemDestroyed
struct UFortItemCooldownWidget_OnWorldItemDestroyed_Params
{
};

// Function FortniteUI.FortItemCooldownWidget.OnCooldownStopped
struct UFortItemCooldownWidget_OnCooldownStopped_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCooldownWidget.OnCooldownStarted
struct UFortItemCooldownWidget_OnCooldownStarted_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCountTextBlock.SetOverrideValue
struct UFortItemCountTextBlock_SetOverrideValue_Params
{
	int                                                InOverrideValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCountTextBlock.SetItemDefinition
struct UFortItemCountTextBlock_SetItemDefinition_Params
{
	class UFortItemDefinition*                         InItemDefinition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCountTextBlock.SetCountStyle
struct UFortItemCountTextBlock_SetCountStyle_Params
{
	EFortItemCountStyle                                InCountStyle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCountTextBlock.InterpolateOverrideToValue
struct UFortItemCountTextBlock_InterpolateOverrideToValue_Params
{
	int                                                TargetValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumInterpolationDuration;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumChangeRate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutroOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCountTextBlock.HandleItemCountChanged
struct UFortItemCountTextBlock_HandleItemCountChanged_Params
{
	class UFortItemDefinition*                         Definition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailElementWidget.HandleShouldPreviewUpgradingItemChanged
struct UFortItemDetailElementWidget_HandleShouldPreviewUpgradingItemChanged_Params
{
};

// Function FortniteUI.FortItemDetailElementWidget.HandlePreDifferentItemToDetailSet
struct UFortItemDetailElementWidget_HandlePreDifferentItemToDetailSet_Params
{
};

// Function FortniteUI.FortItemDetailElementWidget.HandlePreDifferentItemToCompareWithSet
struct UFortItemDetailElementWidget_HandlePreDifferentItemToCompareWithSet_Params
{
};

// Function FortniteUI.FortItemDetailElementWidget.HandlePostDifferentItemToDetailSet
struct UFortItemDetailElementWidget_HandlePostDifferentItemToDetailSet_Params
{
};

// Function FortniteUI.FortItemDetailElementWidget.HandlePostDifferentItemToCompareWithSet
struct UFortItemDetailElementWidget_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function FortniteUI.FortItemDetailElementWidget.HandleInspectModeChanged
struct UFortItemDetailElementWidget_HandleInspectModeChanged_Params
{
};

// Function FortniteUI.FortItemDetailsHostPanel.ShouldPreviewUpgradingItem
struct UFortItemDetailsHostPanel_ShouldPreviewUpgradingItem_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsHostPanel.SetScrollWidget
struct UFortItemDetailsHostPanel_SetScrollWidget_Params
{
};

// Function FortniteUI.FortItemDetailsHostPanel.SetItemViewContext
struct UFortItemDetailsHostPanel_SetItemViewContext_Params
{
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsHostPanel.SetItemToDetail
struct UFortItemDetailsHostPanel_SetItemToDetail_Params
{
	class UFortItem*                                   ItemToDetail;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsHostPanel.SetItemToCompareWith
struct UFortItemDetailsHostPanel_SetItemToCompareWith_Params
{
	class UFortItem*                                   ItemToCompareWith;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsHostPanel.SetInspectMode
struct UFortItemDetailsHostPanel_SetInspectMode_Params
{
	EFortItemInspectionMode                            InspectMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsHostPanel.HandleShouldPreviewUpgradingItemChangedBP
struct UFortItemDetailsHostPanel_HandleShouldPreviewUpgradingItemChangedBP_Params
{
};

// Function FortniteUI.FortItemDetailsHostPanel.HandleInspectModeChanged
struct UFortItemDetailsHostPanel_HandleInspectModeChanged_Params
{
};

// Function FortniteUI.FortItemDetailsHostPanel.HandleDifferentItemToDetailSet
struct UFortItemDetailsHostPanel_HandleDifferentItemToDetailSet_Params
{
};

// Function FortniteUI.FortItemDetailsHostPanel.HandleDifferentItemToCompareSet
struct UFortItemDetailsHostPanel_HandleDifferentItemToCompareSet_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
struct UFortSquadSlotItemDetailElementWidget_HandlePostDifferentSquadSlotSetBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP
struct UFortSquadSlotSurvivorTraitMatchesDetailWidget_HandleTraitValuesUpdatedBP_Params
{
};

// Function FortniteUI.FortItemDetailsActivatablePanel.HandleDifferentItemToDetailSetBP
struct UFortItemDetailsActivatablePanel_HandleDifferentItemToDetailSetBP_Params
{
};

// Function FortniteUI.FortItemDetailsActivatablePanel.HandleDifferentItemToCompareSetBP
struct UFortItemDetailsActivatablePanel_HandleDifferentItemToCompareSetBP_Params
{
};

// Function FortniteUI.FortItemDetailsActivatablePanel.HandleConsumeItemProgressChangedBP
struct UFortItemDetailsActivatablePanel_HandleConsumeItemProgressChangedBP_Params
{
};

// Function FortniteUI.FortItemDetailsModeActivatablePanel.HandleOnActiveWidgetChanged
struct UFortItemDetailsModeActivatablePanel_HandleOnActiveWidgetChanged_Params
{
	class UWidget*                                     ActiveWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementItemDetailsPanel.HandleHostSet
struct UFortItemManagementItemDetailsPanel_HandleHostSet_Params
{
};

// Function FortniteUI.FortItemManagementItemDetailsPanel.HandleHasItemMarkedForMulchingChanged
struct UFortItemManagementItemDetailsPanel_HandleHasItemMarkedForMulchingChanged_Params
{
};

// Function FortniteUI.FortItemManagementMulchDetailsPanel.HandleSetOfItemsToMulchChangedBP
struct UFortItemManagementMulchDetailsPanel_HandleSetOfItemsToMulchChangedBP_Params
{
};

// Function FortniteUI.FortItemManagementMulchDetailsPanel.HandleHostSet
struct UFortItemManagementMulchDetailsPanel_HandleHostSet_Params
{
};

// Function FortniteUI.FortItemManagementMulchDetailsPanel.GetItemsToMulch
struct UFortItemManagementMulchDetailsPanel_GetItemsToMulch_Params
{
	TArray<class UFortItem*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemManagementMulchDetailsPanel.GetItemCountsToMulch
struct UFortItemManagementMulchDetailsPanel_GetItemCountsToMulch_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemManagementMulchDetailsPanel.CommitMulch
struct UFortItemManagementMulchDetailsPanel_CommitMulch_Params
{
};

// Function FortniteUI.FortItemManagementModeDetailsPanel.HandleHostSet
struct UFortItemManagementModeDetailsPanel_HandleHostSet_Params
{
};

// Function FortniteUI.FortItemManagementModeDetailsPanel.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementModeDetailsPanel_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function FortniteUI.FortItemManagementModeDetailsPanel.GetItemManagementMode
struct UFortItemManagementModeDetailsPanel_GetItemManagementMode_Params
{
	EFortItemManagementMode                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsPanel.SetItemToDetail
struct UFortItemDetailsPanel_SetItemToDetail_Params
{
	class UFortItem*                                   ItemToDetail;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsPanel.SetItemToCompareWith
struct UFortItemDetailsPanel_SetItemToCompareWith_Params
{
	class UFortItem*                                   ItemToCompareWith;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsPanel.HandleItemToDetailChanged
struct UFortItemDetailsPanel_HandleItemToDetailChanged_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsPanel.HandleItemToCompareWithChanged
struct UFortItemDetailsPanel_HandleItemToCompareWithChanged_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemDetailsPanel.HandleDifferentItemToDetailSet
struct UFortItemDetailsPanel_HandleDifferentItemToDetailSet_Params
{
};

// Function FortniteUI.FortItemDetailsPanel.HandleDifferentItemToCompareSet
struct UFortItemDetailsPanel_HandleDifferentItemToCompareSet_Params
{
};

// Function FortniteUI.FortItemDetailsPanel.HandleCursorModeChanged
struct UFortItemDetailsPanel_HandleCursorModeChanged_Params
{
	bool                                               bCursorModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CustomWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemDisplayNameText.SetItemToRepresent
struct UFortItemDisplayNameText_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemIcon.SetShadowColorAndOpacity
struct UFortItemIcon_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, IsPlainOldData)
};

// Function FortniteUI.FortItemIcon.SetOpacity
struct UFortItemIcon_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemIcon.SetItemDefinition
struct UFortItemIcon_SetItemDefinition_Params
{
	class UFortItemDefinition*                         InItemDefinition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemIcon.SetColorAndOpacity
struct UFortItemIcon_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, IsPlainOldData)
};

// Function FortniteUI.FortItemIcon.SetBrushSize
struct UFortItemIcon_SetBrushSize_Params
{
	TEnumAsByte<EFortBrushSize>                        InBrushSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.SetSortType
struct UFortItemManagementInventoryPanel_SetSortType_Params
{
	EInventoryContentSortType                          SortType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.SetFilter
struct UFortItemManagementInventoryPanel_SetFilter_Params
{
	struct FName                                       FilterName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.RefreshCraftingSort
struct UFortItemManagementInventoryPanel_RefreshCraftingSort_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleSetOfItemsToMulchChangedBP
struct UFortItemManagementInventoryPanel_HandleSetOfItemsToMulchChangedBP_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleQuickBarChangedBP
struct UFortItemManagementInventoryPanel_HandleQuickBarChangedBP_Params
{
	EFortQuickBars                                     QuickBarType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleItemWidgetCreated
struct UFortItemManagementInventoryPanel_HandleItemWidgetCreated_Params
{
	class UUserWidget*                                 ItemWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryUpdatedEvent
struct UFortItemManagementInventoryPanel_HandleInventoryUpdatedEvent_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemSelected
struct UFortItemManagementInventoryPanel_HandleInventoryItemSelected_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemHovered
struct UFortItemManagementInventoryPanel_HandleInventoryItemHovered_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemDoubleClicked
struct UFortItemManagementInventoryPanel_HandleInventoryItemDoubleClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleInventoryItemClicked
struct UFortItemManagementInventoryPanel_HandleInventoryItemClicked_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleFilterTabSelected
struct UFortItemManagementInventoryPanel_HandleFilterTabSelected_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleFilterTabButtonCreated
struct UFortItemManagementInventoryPanel_HandleFilterTabButtonCreated_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleDifferentSortTypeSetBP
struct UFortItemManagementInventoryPanel_HandleDifferentSortTypeSetBP_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementInventoryPanel_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleDifferentFrontendInventoryFilterSetBP
struct UFortItemManagementInventoryPanel_HandleDifferentFrontendInventoryFilterSetBP_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleDifferentFilterSetBP
struct UFortItemManagementInventoryPanel_HandleDifferentFilterSetBP_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleCursorModeChangedBP
struct UFortItemManagementInventoryPanel_HandleCursorModeChangedBP_Params
{
	bool                                               bCursorModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleCursorModeChanged
struct UFortItemManagementInventoryPanel_HandleCursorModeChanged_Params
{
	bool                                               bCursorModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementInventoryPanel.HandleCraftItemStarted
struct UFortItemManagementInventoryPanel_HandleCraftItemStarted_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.GetUpgradeItemDefinitionsForCurrentInventory
struct UFortItemManagementInventoryPanel_GetUpgradeItemDefinitionsForCurrentInventory_Params
{
	TArray<class UFortItemDefinition*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemManagementInventoryPanel.GetSupportedSortTypesForCurrentInventory
struct UFortItemManagementInventoryPanel_GetSupportedSortTypesForCurrentInventory_Params
{
	TArray<EInventoryContentSortType>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemManagementInventoryPanel.GetQualifiedFilterDisplayName
struct UFortItemManagementInventoryPanel_GetQualifiedFilterDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortItemManagementInventoryPanel.CycleSortType
struct UFortItemManagementInventoryPanel_CycleSortType_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.AdvanceSelection
struct UFortItemManagementInventoryPanel_AdvanceSelection_Params
{
};

// Function FortniteUI.FortItemManagementInventoryPanel.AddItemStackToMulch
struct UFortItemManagementInventoryPanel_AddItemStackToMulch_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCollectionBookPicker.SlotItemConfirmationComplete
struct UFortCollectionBookPicker_SlotItemConfirmationComplete_Params
{
	class UFortItem*                                   CommittedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (Parm)
};

// DelegateFunction FortniteUI.FortCollectionBookPicker.OnSlotItemConfirmed__DelegateSignature
struct UFortCollectionBookPicker_OnSlotItemConfirmed__DelegateSignature_Params
{
	class UFortItem*                                   ItemToSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (Parm)
};

// Function FortniteUI.FortCollectionBookPicker.GetCurrentSlottedItem
struct UFortCollectionBookPicker_GetCurrentSlottedItem_Params
{
	class UFortAccountItem*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderSlotItemPicker.PopulateDefenderSlotItems
struct UFortDefenderSlotItemPicker_PopulateDefenderSlotItems_Params
{
	class UFortDefenderItem*                           DefenderItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortDefenderSlotItemPicker.HandleItemWidgetCreated
struct UFortDefenderSlotItemPicker_HandleItemWidgetCreated_Params
{
	class UUserWidget*                                 ItemWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortOutpostStorageItemPicker.UseFilters
struct UFortOutpostStorageItemPicker_UseFilters_Params
{
	TArray<EFortItemType>                              ItemTypes;                                                // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortOutpostStorageItemPicker.UseFilter
struct UFortOutpostStorageItemPicker_UseFilter_Params
{
	EFortItemType                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTransformKeyPicker.RebuildTransformKeys
struct UFortTransformKeyPicker_RebuildTransformKeys_Params
{
	TArray<class UObject*>                             InDataProvider;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortTransformSlotItemPicker.RebuildSlottableItems
struct UFortTransformSlotItemPicker_RebuildSlottableItems_Params
{
	TArray<EFortInventoryFilter>                       ItemFilters;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EFortItemType                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           ItemsToIgnore;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortTrapDefenderItemPicker.HandleSelectionCommittedBP
struct UFortTrapDefenderItemPicker_HandleSelectionCommittedBP_Params
{
	class UFortItem*                                   CommittedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.SetPreviewData
struct UFortItemQuantityListEntryBase_SetPreviewData_Params
{
	struct FFortItemEntryPreviewData                   PreviewData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortItemQuantityListEntryBase.SetItemInstanceAndQuantity
struct UFortItemQuantityListEntryBase_SetItemInstanceAndQuantity_Params
{
	struct FFortItemInstanceQuantityPair               ItemQuantityPair;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ShouldTreatAsReset;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.SetItemDefinitionAndQuantity
struct UFortItemQuantityListEntryBase_SetItemDefinitionAndQuantity_Params
{
	struct FFortItemQuantityPair                       ItemQuantityPair;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ShouldTreatAsReset;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.PreviewStarted
struct UFortItemQuantityListEntryBase_PreviewStarted_Params
{
};

// Function FortniteUI.FortItemQuantityListEntryBase.PreviewEnded
struct UFortItemQuantityListEntryBase_PreviewEnded_Params
{
};

// Function FortniteUI.FortItemQuantityListEntryBase.IsBeingPreviewed
struct UFortItemQuantityListEntryBase_IsBeingPreviewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.HandleDifferentItemOrQuantitySetBP
struct UFortItemQuantityListEntryBase_HandleDifferentItemOrQuantitySetBP_Params
{
	bool                                               IsBeingReset;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.GetPreviewData
struct UFortItemQuantityListEntryBase_GetPreviewData_Params
{
	struct FFortItemEntryPreviewData                   OutPreviewData;                                           // (Parm, OutParm)
};

// Function FortniteUI.FortItemQuantityListEntryBase.GetItemInstance
struct UFortItemQuantityListEntryBase_GetItemInstance_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.GetItemDefinition
struct UFortItemQuantityListEntryBase_GetItemDefinition_Params
{
	class UFortItemDefinition*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListEntryBase.ClearPreviewData
struct UFortItemQuantityListEntryBase_ClearPreviewData_Params
{
};

// Function FortniteUI.FortItemQuantityListBase.SetItemToCompareDefinitionsAndQuantities
struct UFortItemQuantityListBase_SetItemToCompareDefinitionsAndQuantities_Params
{
	TArray<struct FFortItemQuantityPair>               ItemToCompareQuantityPairs;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortItemQuantityListBase.SetItemInstancesAndQuantities
struct UFortItemQuantityListBase_SetItemInstancesAndQuantities_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       ItemQuantityPairs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ShouldResetWidgets;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListBase.SetItemInspectMode
struct UFortItemQuantityListBase_SetItemInspectMode_Params
{
	EFortItemInspectionMode                            InspectMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListBase.SetItemDefinitionsAndQuantities
struct UFortItemQuantityListBase_SetItemDefinitionsAndQuantities_Params
{
	TArray<struct FFortItemQuantityPair>               ItemQuantityPairs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ShouldResetWidgets;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListBase.OnItemInspectModeChanged
struct UFortItemQuantityListBase_OnItemInspectModeChanged_Params
{
};

// Function FortniteUI.FortItemQuantityListBase.IsEmptyList
struct UFortItemQuantityListBase_IsEmptyList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemQuantityListBase.GetItemDefinitions
struct UFortItemQuantityListBase_GetItemDefinitions_Params
{
	TArray<class UFortItemDefinition*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemQuantityListBase.AddListEntry
struct UFortItemQuantityListBase_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase*              ListEntry;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemRatingIndicator.SetItemViewContext
struct UFortItemRatingIndicator_SetItemViewContext_Params
{
	TScriptInterface<class UFortItemViewContextInterface> ItemViewContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemRatingIndicator.SetItemToRepresent
struct UFortItemRatingIndicator_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemRatingIndicator.SetItemToCompareWith
struct UFortItemRatingIndicator_SetItemToCompareWith_Params
{
	class UFortItem*                                   ItemToCompareWith;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemRatingIndicator.HandleViewModelChanged
struct UFortItemRatingIndicator_HandleViewModelChanged_Params
{
};

// Function FortniteUI.AthenaInventoryFortItemTileButtonBase.HandleEquipSlotChanged
struct UAthenaInventoryFortItemTileButtonBase_HandleEquipSlotChanged_Params
{
	int                                                EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementItemTileButton.HandleItemMulchStateChanged
struct UFortItemManagementItemTileButton_HandleItemMulchStateChanged_Params
{
};

// Function FortniteUI.FortItemManagementItemTileButton.HandleItemChangedBP
struct UFortItemManagementItemTileButton_HandleItemChangedBP_Params
{
};

// Function FortniteUI.FortItemManagementItemTileButton.HandleHasItemToDetailChanged
struct UFortItemManagementItemTileButton_HandleHasItemToDetailChanged_Params
{
};

// Function FortniteUI.FortItemManagementItemTileButton.HandleHasItemToCompareDetailsWithChanged
struct UFortItemManagementItemTileButton_HandleHasItemToCompareDetailsWithChanged_Params
{
};

// Function FortniteUI.FortItemManagementItemTileButton.HandleEquipSlotChanged
struct UFortItemManagementItemTileButton_HandleEquipSlotChanged_Params
{
	int                                                EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemManagementItemTileButton.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementItemTileButton_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function FortniteUI.FortItemManagementItemTileButton.GetItemManagementMode
struct UFortItemManagementItemTileButton_GetItemManagementMode_Params
{
	EFortItemManagementMode                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderItemTileButton.HandleEquipSlotChanged
struct UFortDefenderItemTileButton_HandleEquipSlotChanged_Params
{
	int                                                EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
struct UFortSquadSlotItemPickerTileButton_HandleSlottingRestrictionReasonsChanged_Params
{
};

// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
struct UFortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad_Params
{
	struct FHomebaseSquadSlotId                        SquadSlotId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
struct UFortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons_Params
{
	TArray<EFortSquadSlottingRestrictionReason>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemTransform.ProcessPendingSeenTransformKeys
struct UFortItemTransform_ProcessPendingSeenTransformKeys_Params
{
};

// Function FortniteUI.FortItemView.SetItemToRepresent
struct UFortItemView_SetItemToRepresent_Params
{
	class UFortItem*                                   NewItemToRepresent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemView.SetInspectMode
struct UFortItemView_SetInspectMode_Params
{
	EFortItemInspectionMode                            NewInspectMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortJournalQuestDetails.SetCurrentQuest
struct UFortJournalQuestDetails_SetCurrentQuest_Params
{
	class UFortQuestItem*                              InCurrentQuest;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP
struct UFortJournalQuestDetails_HandleCurrentQuestChangedBP_Params
{
};

// Function FortniteUI.FortJournalQuestDetails.GetVisibleObjectives
struct UFortJournalQuestDetails_GetVisibleObjectives_Params
{
	TArray<class UFortQuestObjectiveInfo*>             VisibleObjectives;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortJournalQuestDetails.GetRewards
struct UFortJournalQuestDetails_GetRewards_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       OutRewards;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FFortItemInstanceQuantityPair>       OutSelectableRewards;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortJournalQuestDetails.GetFutureObjectives
struct UFortJournalQuestDetails_GetFutureObjectives_Params
{
	TArray<class UFortQuestObjectiveInfo*>             FutureObjectives;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortJournalQuestDetails.GetActiveMissionTileType
struct UFortJournalQuestDetails_GetActiveMissionTileType_Params
{
	EFortTheaterMapTileType                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortJournalQuestDetails.CanPlayQuest
struct UFortJournalQuestDetails_CanPlayQuest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
struct UFortJournalQuestDetails_CanPartyLeaderPlayQuest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortJournalQuestDetails.CanGotoQuest
struct UFortJournalQuestDetails_CanGotoQuest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortJournalQuestProgressBar.HandleNewQuestObjectiveBP
struct UFortJournalQuestProgressBar_HandleNewQuestObjectiveBP_Params
{
};

// Function FortniteUI.FortJournalQuestProgressBar.GetProgressDetails
struct UFortJournalQuestProgressBar_GetProgressDetails_Params
{
	struct FText                                       OutNumerator;                                             // (Parm, OutParm)
	struct FText                                       OutDenominator;                                           // (Parm, OutParm)
	float                                              OutFraction;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLeaderboardContext.CanShowStats
struct UFortLeaderboardContext_CanShowStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortLeaderboardContext.CanShowLeaderboards
struct UFortLeaderboardContext_CanShowLeaderboards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortLeaderboardEntryWidget.OnLeaderboardEntryDataSet
struct UFortLeaderboardEntryWidget_OnLeaderboardEntryDataSet_Params
{
};

// Function FortniteUI.FortLegacySlateBridgeWidget.UpdateSlateWidget
struct UFortLegacySlateBridgeWidget_UpdateSlateWidget_Params
{
	EFortLegacySlateWidget                             SlateWidgetType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLegacySlateBridgeWidget.SetOnCloseHandler
struct UFortLegacySlateBridgeWidget_SetOnCloseHandler_Params
{
	struct FScriptDelegate                             OnCloseHandler;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortLevelIndicator.SetShouldShowMaximumLevel
struct UFortLevelIndicator_SetShouldShowMaximumLevel_Params
{
	bool                                               InShouldShowMaximumLevel;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLevelIndicator.SetItemToRepresent
struct UFortLevelIndicator_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLevelIndicator.SetItemForComparison
struct UFortLevelIndicator_SetItemForComparison_Params
{
	class UFortItem*                                   ItemForComparison;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLevelIndicator.HandleItemToRepresentChanged
struct UFortLevelIndicator_HandleItemToRepresentChanged_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLevelIndicator.HandleItemForComparisonChanged
struct UFortLevelIndicator_HandleItemForComparisonChanged_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortListView.SetItemSelected
struct UFortListView_SetItemSelected_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListView.SetIndexSelected
struct UFortListView_SetIndexSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListView.SetDataProvider
struct UFortListView_SetDataProvider_Params
{
	TArray<class UObject*>                             NewData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortListView.RemoveItemAt
struct UFortListView_RemoveItemAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortListView.GetItemAt
struct UFortListView_GetItemAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListView.GetIndexForItem
struct UFortListView_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListView.ClearSelection
struct UFortListView_ClearSelection_Params
{
};

// Function FortniteUI.FortListView.Clear
struct UFortListView_Clear_Params
{
};

// Function FortniteUI.FortListView.AddItem
struct UFortListView_AddItem_Params
{
	class UObject*                                     NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLobby.OnPlayerClicked
struct UFortLobby_OnPlayerClicked_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLobby.OnNavigationRight
struct UFortLobby_OnNavigationRight_Params
{
};

// Function FortniteUI.FortLobby.OnNavigationLeft
struct UFortLobby_OnNavigationLeft_Params
{
};

// Function FortniteUI.FortLobby.OnEndCursorOverPlayer
struct UFortLobby_OnEndCursorOverPlayer_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLobby.OnBeginCursorOverPlayer
struct UFortLobby_OnBeginCursorOverPlayer_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortLoginAccountSelect.ChooseLoginAccountType
struct UFortLoginAccountSelect_ChooseLoginAccountType_Params
{
	EFortLoginAccountType                              LoginAccountType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMainTabsScreenBase.HandleRefreshSkillTreeNodePage
struct UFortMainTabsScreenBase_HandleRefreshSkillTreeNodePage_Params
{
};

// Function FortniteUI.FortMainTabsScreenBase.HandleMainTabSelected
struct UFortMainTabsScreenBase_HandleMainTabSelected_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMainTabsScreenBase.HandleMainTabCreated
struct UFortMainTabsScreenBase_HandleMainTabCreated_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortMainTabsScreenBase.HandleFeatureStateChanged
struct UFortMainTabsScreenBase_HandleFeatureStateChanged_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMainTabsScreenBase.HandleFeatureNavigateRequest
struct UFortMainTabsScreenBase_HandleFeatureNavigateRequest_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMainTabsScreenBase.ConstructTabs
struct UFortMainTabsScreenBase_ConstructTabs_Params
{
};

// Function FortniteUI.FortMaterialProgressBar.SetStyle
struct UFortMaterialProgressBar_SetStyle_Params
{
	class UClass*                                      BarStyle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMaterialProgressBar.SetProgressBarSectionPercent
struct UFortMaterialProgressBar_SetProgressBarSectionPercent_Params
{
	TEnumAsByte<EFortMaterialProgressBarSection>       BarSection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMaterialProgressBar.SetProgressBarSectionColor
struct UFortMaterialProgressBar_SetProgressBarSectionColor_Params
{
	TEnumAsByte<EFortMaterialProgressBarSection>       BarSection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	EFortMaterialProgressBarSectionColorNumber         ColorNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMaterialProgressBar.SetBackgroundColor
struct UFortMaterialProgressBar_SetBackgroundColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function FortniteUI.FortMicIndicatorWidget.SetPlayerUniqueId
struct UFortMicIndicatorWidget_SetPlayerUniqueId_Params
{
	struct FUniqueNetIdRepl                            InPlayerUniqueId;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortMicIndicatorWidget.OnPlayerTalkingChanged
struct UFortMicIndicatorWidget_OnPlayerTalkingChanged_Params
{
	bool                                               bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMuted
struct UFortMicIndicatorWidget_OnPlayerMuted_Params
{
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMicAvailable
struct UFortMicIndicatorWidget_OnPlayerMicAvailable_Params
{
	bool                                               bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMissionSelect.NavigateMissionTiles
struct UFortMissionSelect_NavigateMissionTiles_Params
{
	EUINavigation                                      Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMissionTrackerEntry.UpdateVisibility
struct UFortMissionTrackerEntry_UpdateVisibility_Params
{
};

// Function FortniteUI.FortMissionTrackerEntry.OnMissionSet
struct UFortMissionTrackerEntry_OnMissionSet_Params
{
};

// Function FortniteUI.FortMissionTrackerEntry.HandleObjectivesChanged
struct UFortMissionTrackerEntry_HandleObjectivesChanged_Params
{
};

// Function FortniteUI.FortMissionTrackerSubEntry.OnObjectiveSet
struct UFortMissionTrackerSubEntry_OnObjectiveSet_Params
{
};

// Function FortniteUI.FortMissionTrackerSubEntry.OnHiddenByHeightConstraintChanged
struct UFortMissionTrackerSubEntry_OnHiddenByHeightConstraintChanged_Params
{
};

// Function FortniteUI.FortMissionTrackerSubEntry.NotifyVisibilityChanged
struct UFortMissionTrackerSubEntry_NotifyVisibilityChanged_Params
{
};

// Function FortniteUI.FortMtxStoreOfferBase.GetTileImage
struct UFortMtxStoreOfferBase_GetTileImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetStoreOfferType
struct UFortMtxStoreOfferBase_GetStoreOfferType_Params
{
	EFortMtxStoreOfferType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetSalePrice
struct UFortMtxStoreOfferBase_GetSalePrice_Params
{
	struct FText                                       SalePrice;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetOfferId
struct UFortMtxStoreOfferBase_GetOfferId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetNormalPrice
struct UFortMtxStoreOfferBase_GetNormalPrice_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetName
struct UFortMtxStoreOfferBase_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetGradient
struct UFortMtxStoreOfferBase_GetGradient_Params
{
	struct FFortMtxGradient                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetDetailsImage
struct UFortMtxStoreOfferBase_GetDetailsImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetDetailsAttributes
struct UFortMtxStoreOfferBase_GetDetailsAttributes_Params
{
	TArray<struct FFortMtxDetailsAttribute>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetDescription
struct UFortMtxStoreOfferBase_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetBonusQuantity
struct UFortMtxStoreOfferBase_GetBonusQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetBaseQuantity
struct UFortMtxStoreOfferBase_GetBaseQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreOfferBase.GetBackground
struct UFortMtxStoreOfferBase_GetBackground_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreRootBase.OnStartReadingOffers
struct UFortMtxStoreRootBase_OnStartReadingOffers_Params
{
};

// Function FortniteUI.FortMtxStoreRootBase.OnOffersGenerated
struct UFortMtxStoreRootBase_OnOffersGenerated_Params
{
};

// Function FortniteUI.FortMtxStoreRootBase.OnMtxOfferGenerated
struct UFortMtxStoreRootBase_OnMtxOfferGenerated_Params
{
	class UFortMtxStoreOfferBase*                      MtxOffer;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreRootBase.NoOffersAvailable
struct UFortMtxStoreRootBase_NoOffersAvailable_Params
{
};

// Function FortniteUI.FortMtxStoreRootBase.HandleMtxPackagesRead
struct UFortMtxStoreRootBase_HandleMtxPackagesRead_Params
{
	TArray<struct FMtxPackage>                         Offers;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortMtxStoreRootBase.GetStoreOfferType
struct UFortMtxStoreRootBase_GetStoreOfferType_Params
{
	struct FMtxPackage                                 Package;                                                  // (Parm)
	EFortMtxStoreOfferType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMtxStoreRootBase.AreOffersLoaded
struct UFortMtxStoreRootBase_AreOffersLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeImage.SetMultiSizeBrush
struct UFortMultiSizeImage_SetMultiSizeBrush_Params
{
	struct FFortMultiSizeBrush                         MultiSizeBrush;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortMultiSizeImage.SetColorAndOpacity
struct UFortMultiSizeImage_SetColorAndOpacity_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortMultiSizeImage.SetBrushSize
struct UFortMultiSizeImage_SetBrushSize_Params
{
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortComparisonResultIndicator.SetComparisonResult
struct UFortComparisonResultIndicator_SetComparisonResult_Params
{
	EFortBuffState                                     ComparisonResult;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSimpleItemConditionIconIndicator.ShouldCollapseWhenConditionIsFalse
struct UFortSimpleItemConditionIconIndicator_ShouldCollapseWhenConditionIsFalse_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSimpleItemConditionIconIndicator.SetItemToRepresent
struct UFortSimpleItemConditionIconIndicator_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSimpleItemConditionIconIndicator.GetItemToRepresent
struct UFortSimpleItemConditionIconIndicator_GetItemToRepresent_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNumericTextBlock.IsInterpolatingNumber
struct UFortNumericTextBlock_IsInterpolatingNumber_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNumericTextBlock.InterpolateSet
struct UFortNumericTextBlock_InterpolateSet_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InUpdateLength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InReportEndEarly;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortNumericTextBlock.GetCurrentValue
struct UFortNumericTextBlock_GetCurrentValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNumericTextBlock.DirectlySet
struct UFortNumericTextBlock_DirectlySet_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortOptionsTab.UpdateOptionsTab
struct UFortOptionsTab_UpdateOptionsTab_Params
{
};

// Function FortniteUI.FortOptionsTab.IsXboxPlatform
struct UFortOptionsTab_IsXboxPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsTab.IsPS4Platform
struct UFortOptionsTab_IsPS4Platform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsTab.IsAthena
struct UFortOptionsTab_IsAthena_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortOptionsTab.CenterOnTab
struct UFortOptionsTab_CenterOnTab_Params
{
};

// Function FortniteUI.FortAudioOptions.SoundFXVolumeChanged
struct UFortAudioOptions_SoundFXVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.ShowQuality
struct UFortAudioOptions_ShowQuality_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.ShowChatVolume
struct UFortAudioOptions_ShowChatVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.SetVoiceChatPTTEnabled
struct UFortAudioOptions_SetVoiceChatPTTEnabled_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.SetVoiceChatEnabled
struct UFortAudioOptions_SetVoiceChatEnabled_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.SetSubtitlesEnabled
struct UFortAudioOptions_SetSubtitlesEnabled_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.SetQuality
struct UFortAudioOptions_SetQuality_Params
{
	int                                                NewQuality;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.MusicVolumeChanged
struct UFortAudioOptions_MusicVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetVoiceChatPTTEnabled
struct UFortAudioOptions_GetVoiceChatPTTEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetVoiceChatEnabled
struct UFortAudioOptions_GetVoiceChatEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetSubtitlesEnabled
struct UFortAudioOptions_GetSubtitlesEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetSoundFXVolumeValue
struct UFortAudioOptions_GetSoundFXVolumeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetQuality
struct UFortAudioOptions_GetQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetMusicVolumeValue
struct UFortAudioOptions_GetMusicVolumeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetDialogVolumeValue
struct UFortAudioOptions_GetDialogVolumeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.GetChatVolumeValue
struct UFortAudioOptions_GetChatVolumeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.DialogVolumeChanged
struct UFortAudioOptions_DialogVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortAudioOptions.ChatVolumeChanged
struct UFortAudioOptions_ChatVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.UpdatePossibleLanguages
struct UFortGameOptions_UpdatePossibleLanguages_Params
{
};

// Function FortniteUI.FortGameOptions.UpdateHUDSettings
struct UFortGameOptions_UpdateHUDSettings_Params
{
	struct FGameplayTag                                HUDMapping;                                               // (Parm)
	bool                                               NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.UpdateGammaSettings
struct UFortGameOptions_UpdateGammaSettings_Params
{
	float                                              GammaValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.TargetingToggleChanged
struct UFortGameOptions_TargetingToggleChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.TargetingMultiplierValueChanged
struct UFortGameOptions_TargetingMultiplierValueChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.TapInteractChanged
struct UFortGameOptions_TapInteractChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.SprintToggleChanged
struct UFortGameOptions_SprintToggleChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.SprintCancelsReloadChanged
struct UFortGameOptions_SprintCancelsReloadChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.ShouldShowSafeZoneOption
struct UFortGameOptions_ShouldShowSafeZoneOption_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.SetControllerPlatform
struct UFortGameOptions_SetControllerPlatform_Params
{
	struct FString                                     InControllerPlatform;                                     // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortGameOptions.ScopedMultiplierValueChanged
struct UFortGameOptions_ScopedMultiplierValueChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.SafeZoneChanged
struct UFortGameOptions_SafeZoneChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.RegionChanged
struct UFortGameOptions_RegionChanged_Params
{
	int                                                NewRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.OnForceFeedbackChanged
struct UFortGameOptions_OnForceFeedbackChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged
struct UFortGameOptions_OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.MouseSensitivityChanged
struct UFortGameOptions_MouseSensitivityChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.LookInversionChanged
struct UFortGameOptions_LookInversionChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.LanguageChanged
struct UFortGameOptions_LanguageChanged_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.Initialize
struct UFortGameOptions_Initialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetTargetingToggleState
struct UFortGameOptions_GetTargetingToggleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetTargetingMultiplierValue
struct UFortGameOptions_GetTargetingMultiplierValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetTapInteractState
struct UFortGameOptions_GetTapInteractState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetSprintToggleState
struct UFortGameOptions_GetSprintToggleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetSprintCancelsReloadState
struct UFortGameOptions_GetSprintCancelsReloadState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetScopedMultiplierValue
struct UFortGameOptions_GetScopedMultiplierValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetSafeZoneValue
struct UFortGameOptions_GetSafeZoneValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetRegionDisplayNames
struct UFortGameOptions_GetRegionDisplayNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGameOptions.GetPossibleLanguages
struct UFortGameOptions_GetPossibleLanguages_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGameOptions.GetMouseSensitivityValue
struct UFortGameOptions_GetMouseSensitivityValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetLookInversionState
struct UFortGameOptions_GetLookInversionState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetListWidget
struct UFortGameOptions_GetListWidget_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetHUDSettings
struct UFortGameOptions_GetHUDSettings_Params
{
	struct FGameplayTag                                HUDMapping;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetGammaSettings
struct UFortGameOptions_GetGammaSettings_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetGamepadTargetingMultiplierValue
struct UFortGameOptions_GetGamepadTargetingMultiplierValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetGamepadScopedMultiplierValue
struct UFortGameOptions_GetGamepadScopedMultiplierValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetGamepadLookSensitivityValue
struct UFortGameOptions_GetGamepadLookSensitivityValue_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetForceFeedbackState
struct UFortGameOptions_GetForceFeedbackState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState
struct UFortGameOptions_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetFirstPersonCameraState
struct UFortGameOptions_GetFirstPersonCameraState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetDefaultGammaSettings
struct UFortGameOptions_GetDefaultGammaSettings_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetCurrentRegion
struct UFortGameOptions_GetCurrentRegion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetCurrentLanguage
struct UFortGameOptions_GetCurrentLanguage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GetControllerPlatform
struct UFortGameOptions_GetControllerPlatform_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortGameOptions.GetAutoEquipState
struct UFortGameOptions_GetAutoEquipState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GamepadTargetingMultiplierValueChanged
struct UFortGameOptions_GamepadTargetingMultiplierValueChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GamepadScopedMultiplierValueChanged
struct UFortGameOptions_GamepadScopedMultiplierValueChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GamepadLookSensitivityYChanged
struct UFortGameOptions_GamepadLookSensitivityYChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.GamepadLookSensitivityXChanged
struct UFortGameOptions_GamepadLookSensitivityXChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.FirstPersonCameraChanged
struct UFortGameOptions_FirstPersonCameraChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortGameOptions.ConstructHUDTagList
struct UFortGameOptions_ConstructHUDTagList_Params
{
};

// Function FortniteUI.FortGameOptions.AutoEquipChanged
struct UFortGameOptions_AutoEquipChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInputOptions.HandleUsingGamepadChanged
struct UFortInputOptions_HandleUsingGamepadChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortInputOptions.GetListWidget
struct UFortInputOptions_GetListWidget_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortInputOptions.GetBindedKeyNameBP
struct UFortInputOptions_GetBindedKeyNameBP_Params
{
	int                                                KeyBind;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPrimary;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortInputOptions.ConstructKeyBindList
struct UFortInputOptions_ConstructKeyBindList_Params
{
};

// Function FortniteUI.FortInputOptions.ChangeBinding
struct UFortInputOptions_ChangeBinding_Params
{
	bool                                               IsPrimarySlot;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        NewKey;                                                   // (Parm)
};

// Function FortniteUI.FortVideoOptions.WindowModeChanged
struct UFortVideoOptions_WindowModeChanged_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ViewDistanceQualityChanged
struct UFortVideoOptions_ViewDistanceQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.UseVsyncChanged
struct UFortVideoOptions_UseVsyncChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.TextureQualityChanged
struct UFortVideoOptions_TextureQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ShowGrassChanged
struct UFortVideoOptions_ShowGrassChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ShowFPSChanged
struct UFortVideoOptions_ShowFPSChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ShadowQualityChanged
struct UFortVideoOptions_ShadowQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ResolutionChanged
struct UFortVideoOptions_ResolutionChanged_Params
{
	int                                                NewResolution;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.PostProcessQualityChanged
struct UFortVideoOptions_PostProcessQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.OnQualitySelectorChanged
struct UFortVideoOptions_OnQualitySelectorChanged_Params
{
	int                                                ValueRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.MotionBlurChanged
struct UFortVideoOptions_MotionBlurChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.IsWindowedFullscreen
struct UFortVideoOptions_IsWindowedFullscreen_Params
{
	int                                                CurrentMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.InitializeValues
struct UFortVideoOptions_InitializeValues_Params
{
};

// Function FortniteUI.FortVideoOptions.GetViewDistanceQuality
struct UFortVideoOptions_GetViewDistanceQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetUseVsync
struct UFortVideoOptions_GetUseVsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetTextureQuality
struct UFortVideoOptions_GetTextureQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetShowGrass
struct UFortVideoOptions_GetShowGrass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetShowFPS
struct UFortVideoOptions_GetShowFPS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetShadowQuality
struct UFortVideoOptions_GetShadowQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetPostProcessQuality
struct UFortVideoOptions_GetPostProcessQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetPossibleWindowModes
struct UFortVideoOptions_GetPossibleWindowModes_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortVideoOptions.GetPossibleFPS
struct UFortVideoOptions_GetPossibleFPS_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortVideoOptions.GetPossibleDisplayResolutions
struct UFortVideoOptions_GetPossibleDisplayResolutions_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortVideoOptions.GetMotionBlur
struct UFortVideoOptions_GetMotionBlur_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetEffectsQuality
struct UFortVideoOptions_GetEffectsQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetDiscreteResolutionQuality
struct UFortVideoOptions_GetDiscreteResolutionQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetCurrentWindowMode
struct UFortVideoOptions_GetCurrentWindowMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetCurrentFPS
struct UFortVideoOptions_GetCurrentFPS_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetCurrentDisplayResolution
struct UFortVideoOptions_GetCurrentDisplayResolution_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.GetAntiAliasingQuality
struct UFortVideoOptions_GetAntiAliasingQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.FrameRateLimitChanged
struct UFortVideoOptions_FrameRateLimitChanged_Params
{
	int                                                FrameRateLimit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.EffectsQualityChanged
struct UFortVideoOptions_EffectsQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.DiscreteResolutionQualityChanged
struct UFortVideoOptions_DiscreteResolutionQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.AntiAliasingQualityChanged
struct UFortVideoOptions_AntiAliasingQualityChanged_Params
{
	int                                                ButtonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPartyTreeItemBase.OnSocialItemSet
struct UFortPartyTreeItemBase_OnSocialItemSet_Params
{
};

// Function FortniteUI.FortPartyTreeItemBase.ExpansionChanged
struct UFortPartyTreeItemBase_ExpansionChanged_Params
{
	bool                                               bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.SetTooltipContext
struct UFortPerkWidget_NUI_SetTooltipContext_Params
{
	class UFortTooltipContext*                         TooltipContext;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.OnPerkUpdated
struct UFortPerkWidget_NUI_OnPerkUpdated_Params
{
};

// Function FortniteUI.FortPerkWidget_NUI.IsTierPerk
struct UFortPerkWidget_NUI_IsTierPerk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.IsPerkUnlocked
struct UFortPerkWidget_NUI_IsPerkUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.IsPerkHighlighted
struct UFortPerkWidget_NUI_IsPerkHighlighted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.IsPerkEmpty
struct UFortPerkWidget_NUI_IsPerkEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.HasAbility
struct UFortPerkWidget_NUI_HasAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.GetTooltipTitle
struct UFortPerkWidget_NUI_GetTooltipTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortPerkWidget_NUI.GetTooltipDescription
struct UFortPerkWidget_NUI_GetTooltipDescription_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortPerkWidget_NUI.GetSupportBonusType
struct UFortPerkWidget_NUI_GetSupportBonusType_Params
{
	EFortSupportBonusType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.GetRequiredLevel
struct UFortPerkWidget_NUI_GetRequiredLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.GetPerkTier
struct UFortPerkWidget_NUI_GetPerkTier_Params
{
	TEnumAsByte<EFortItemTier>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.GetIcon
struct UFortPerkWidget_NUI_GetIcon_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget_NUI.GetCombinedTooltipDescription
struct UFortPerkWidget_NUI_GetCombinedTooltipDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortPerkTierWidget_NUI.ProcessPerks
struct UFortPerkTierWidget_NUI_ProcessPerks_Params
{
};

// Function FortniteUI.FortPerkTierWidget_NUI.OnGeneratePerk
struct UFortPerkTierWidget_NUI_OnGeneratePerk_Params
{
	struct FFortUIPerk                                 Perk;                                                     // (Parm)
	class UFortPerkWidget_NUI*                         PerkWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortPerksWidget_NUI.SetState
struct UFortPerksWidget_NUI_SetState_Params
{
	EFortPerksWidgetState                              InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortHero*                                   InEvolutionOption;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPerksWidget_NUI.SetHero
struct UFortPerksWidget_NUI_SetHero_Params
{
	class UFortHero*                                   InHero;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPerksWidget_NUI.ProcessPerkTiers
struct UFortPerksWidget_NUI_ProcessPerkTiers_Params
{
};

// Function FortniteUI.FortPerksWidget_NUI.ProcessPerks
struct UFortPerksWidget_NUI_ProcessPerks_Params
{
};

// Function FortniteUI.FortPerksWidget_NUI.OnStateChanged
struct UFortPerksWidget_NUI_OnStateChanged_Params
{
};

// Function FortniteUI.FortPerksWidget_NUI.OnHeroChanged
struct UFortPerksWidget_NUI_OnHeroChanged_Params
{
};

// Function FortniteUI.FortPerksWidget_NUI.OnGeneratePerkTier
struct UFortPerksWidget_NUI_OnGeneratePerkTier_Params
{
	struct FFortUIPerkTier                             FortPerkTier;                                             // (Parm)
	class UFortPerkTierWidget_NUI*                     PerkTierWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortPerksWidget_NUI.OnGeneratePerk
struct UFortPerksWidget_NUI_OnGeneratePerk_Params
{
	struct FFortUIPerk                                 FortPerk;                                                 // (Parm)
	class UFortPerkWidget_NUI*                         PerkWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.UseLeftThumbstick
struct UFortPickerContext_UseLeftThumbstick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.SetFortPickerData
struct UFortPickerContext_SetFortPickerData_Params
{
	class UFortPickerData*                             Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.RestoreInputAxes
struct UFortPickerContext_RestoreInputAxes_Params
{
};

// Function FortniteUI.FortPickerContext.PickerOptionAccepted
struct UFortPickerContext_PickerOptionAccepted_Params
{
	int                                                Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.PickerCanceled
struct UFortPickerContext_PickerCanceled_Params
{
};

// Function FortniteUI.FortPickerContext.GetRadialPickerOptionItem
struct UFortPickerContext_GetRadialPickerOptionItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionEnabled;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.GetRadialPickerOptionImageAndLabel
struct UFortPickerContext_GetRadialPickerOptionImageAndLabel_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // (Parm, OutParm)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
	bool                                               bOptionEnabled;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.GetNumPickerOptions
struct UFortPickerContext_GetNumPickerOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.GetListPickerOption
struct UFortPickerContext_GetListPickerOption_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPickerContext.DoesRadialCloseOnRelease
struct UFortPickerContext_DoesRadialCloseOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerProfileBannerEditor.SetBannerIcon
struct UFortPlayerProfileBannerEditor_SetBannerIcon_Params
{
	struct FName                                       Icon;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerProfileBannerEditor.SetBannerColor
struct UFortPlayerProfileBannerEditor_SetBannerColor_Params
{
	struct FName                                       Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerProfileBannerEditor.RefreshBannerEditor
struct UFortPlayerProfileBannerEditor_RefreshBannerEditor_Params
{
};

// Function FortniteUI.FortPlayerProfileBannerEditor.HandleEditorDeactivated
struct UFortPlayerProfileBannerEditor_HandleEditorDeactivated_Params
{
};

// Function FortniteUI.FortPlayerProfileBannerEditor.HandleEditorActivated
struct UFortPlayerProfileBannerEditor_HandleEditorActivated_Params
{
};

// Function FortniteUI.FortPlayerProfileBannerEditor.CommitChosenIconAndColor
struct UFortPlayerProfileBannerEditor_CommitChosenIconAndColor_Params
{
};

// Function FortniteUI.FortPlayerTrackerBase.UpdateBasedOnId
struct UFortPlayerTrackerBase_UpdateBasedOnId_Params
{
};

// Function FortniteUI.FortPlayerTrackerBase.SetUniqueIdInternal
struct UFortPlayerTrackerBase_SetUniqueIdInternal_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortPlayerTrackerBase.SetUniqueId
struct UFortPlayerTrackerBase_SetUniqueId_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortPlayerTrackerBase.SetTeamMember
struct UFortPlayerTrackerBase_SetTeamMember_Params
{
	int                                                InPlayerIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.ResetPartyEvents
struct UFortPlayerTrackerBase_ResetPartyEvents_Params
{
};

// Function FortniteUI.FortPlayerTrackerBase.OnPlayerInfoChanged
struct UFortPlayerTrackerBase_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo                         NewInfo;                                                  // (Parm)
};

// Function FortniteUI.FortPlayerTrackerBase.HasModifiedStats
struct UFortPlayerTrackerBase_HasModifiedStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberStateChangedId
struct UFortPlayerTrackerBase_HandleTeamMemberStateChangedId_Params
{
	struct FFortTeamMemberInfo                         NewInfo;                                                  // (Parm)
};

// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberStateChanged
struct UFortPlayerTrackerBase_HandleTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         NewInfo;                                                  // (Parm)
};

// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberRemoved
struct UFortPlayerTrackerBase_HandleTeamMemberRemoved_Params
{
	int                                                RemovedIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.HandleTeamMemberAdded
struct UFortPlayerTrackerBase_HandleTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         NewInfo;                                                  // (Parm)
};

// Function FortniteUI.FortPlayerTrackerBase.HandlePartyLeft
struct UFortPlayerTrackerBase_HandlePartyLeft_Params
{
};

// Function FortniteUI.FortPlayerTrackerBase.HandleOnPlayerIdUpdated
struct UFortPlayerTrackerBase_HandleOnPlayerIdUpdated_Params
{
	struct FUniqueNetIdRepl                            NewInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortPlayerTrackerBase.HandleOnLocalPlayerInfoUpdated
struct UFortPlayerTrackerBase_HandleOnLocalPlayerInfoUpdated_Params
{
	struct FFortTeamMemberInfo                         NewInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortPlayerTrackerBase.GetTech
struct UFortPlayerTrackerBase_GetTech_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetTeamTech
struct UFortPlayerTrackerBase_GetTeamTech_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetTeamResistance
struct UFortPlayerTrackerBase_GetTeamResistance_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetTeamOffense
struct UFortPlayerTrackerBase_GetTeamOffense_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetTeamFortitude
struct UFortPlayerTrackerBase_GetTeamFortitude_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetResistance
struct UFortPlayerTrackerBase_GetResistance_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetOffense
struct UFortPlayerTrackerBase_GetOffense_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetModifiedTech
struct UFortPlayerTrackerBase_GetModifiedTech_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetModifiedResistance
struct UFortPlayerTrackerBase_GetModifiedResistance_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetModifiedOffense
struct UFortPlayerTrackerBase_GetModifiedOffense_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetModifiedHomebaseRating
struct UFortPlayerTrackerBase_GetModifiedHomebaseRating_Params
{
	int                                                Rating;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressFraction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetModifiedFortitude
struct UFortPlayerTrackerBase_GetModifiedFortitude_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetHomebaseRating
struct UFortPlayerTrackerBase_GetHomebaseRating_Params
{
	int                                                Rating;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressFraction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPlayerTrackerBase.GetFortitude
struct UFortPlayerTrackerBase_GetFortitude_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortQuestExpiresWidget.SetData
struct UFortQuestExpiresWidget_SetData_Params
{
	class UFortQuestItem*                              InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
struct UFortQuestExpiresWidget_OnQuestExpirationUpdated_Params
{
};

// Function FortniteUI.FortQuestScreen.ProcessPendingSeenQuestItems
struct UFortQuestScreen_ProcessPendingSeenQuestItems_Params
{
};

// Function FortniteUI.FortQuestTrackerEntry.OnSetup
struct UFortQuestTrackerEntry_OnSetup_Params
{
};

// Function FortniteUI.FortQuestTrackerEntry.HandleObjectiveEntryCreated
struct UFortQuestTrackerEntry_HandleObjectiveEntryCreated_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortQuestTrackerEntry.HandleHUDObjectiveCompletion
struct UFortQuestTrackerEntry_HandleHUDObjectiveCompletion_Params
{
	class UFortQuestObjectiveInfo*                     QuestObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortQuestTrackerSubEntry.OnSetup
struct UFortQuestTrackerSubEntry_OnSetup_Params
{
};

// Function FortniteUI.FortQuestTrackerSubEntry.OnQuestsUpdated
struct UFortQuestTrackerSubEntry_OnQuestsUpdated_Params
{
};

// Function FortniteUI.FortQuestTrackerSubEntry.OnPlayObjectiveCompletedAnimation
struct UFortQuestTrackerSubEntry_OnPlayObjectiveCompletedAnimation_Params
{
};

// Function FortniteUI.FortQuestTrackerSubEntry.NotifyCompletionAnimationFinished
struct UFortQuestTrackerSubEntry_NotifyCompletionAnimationFinished_Params
{
};

// Function FortniteUI.FortQuestTrackerSubEntry.HandleQuestsUpdated
struct UFortQuestTrackerSubEntry_HandleQuestsUpdated_Params
{
};

// Function FortniteUI.FortQuestTreeItemWidget.SetupAsQuest
struct UFortQuestTreeItemWidget_SetupAsQuest_Params
{
	class UFortQuestItem*                              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortQuestTreeItemWidget.SetupAsCategory
struct UFortQuestTreeItemWidget_SetupAsCategory_Params
{
	class UFortQuestCategory*                          Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortQuestTreeItemWidget.OnQuestsUpdated
struct UFortQuestTreeItemWidget_OnQuestsUpdated_Params
{
};

// Function FortniteUI.FortQuestTreeItemWidget.HandleQuestsUpdated
struct UFortQuestTreeItemWidget_HandleQuestsUpdated_Params
{
};

// Function FortniteUI.FortQuestTreeItemWidget.ExpansionChanged
struct UFortQuestTreeItemWidget_ExpansionChanged_Params
{
	bool                                               bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRejoinWindowBase.StopTimeout
struct UFortRejoinWindowBase_StopTimeout_Params
{
};

// Function FortniteUI.FortRejoinWindowBase.StartTimeout
struct UFortRejoinWindowBase_StartTimeout_Params
{
	float                                              TimeoutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRejoinWindowBase.OnTimeoutTimeReached
struct UFortRejoinWindowBase_OnTimeoutTimeReached_Params
{
};

// Function FortniteUI.FortResultsSummaryScreenWidget.GetTotalScoreSortedScoreIndices
struct UFortResultsSummaryScreenWidget_GetTotalScoreSortedScoreIndices_Params
{
	class UFortUIScoreReport*                          ScoreReport;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutSortedScoreIndices;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortResultsTeleportScreenWidget.StartExitTimer
struct UFortResultsTeleportScreenWidget_StartExitTimer_Params
{
};

// Function FortniteUI.FortResultsTeleportScreenWidget.OnExitTimerFinished
struct UFortResultsTeleportScreenWidget_OnExitTimerFinished_Params
{
};

// Function FortniteUI.FortResultsTeleportScreenWidget.OnExitTimeRemainingUpdated
struct UFortResultsTeleportScreenWidget_OnExitTimeRemainingUpdated_Params
{
	int                                                TimeRemainingSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortResultsTeleportScreenWidget.OnExitTimePercentagePassedUpdated
struct UFortResultsTeleportScreenWidget_OnExitTimePercentagePassedUpdated_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortResultsWidget.TriggerSetupTeleportCameraEvent
struct UFortResultsWidget_TriggerSetupTeleportCameraEvent_Params
{
};

// Function FortniteUI.FortResultsWidget.SendEndOfRoundUpVoteAnalytic
struct UFortResultsWidget_SendEndOfRoundUpVoteAnalytic_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     TargetPlayerName;                                         // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortResultsWidget.SendEndOfRoundScreenAnalytic
struct UFortResultsWidget_SendEndOfRoundScreenAnalytic_Params
{
	struct FString                                     ScreenName;                                               // (Parm, ZeroConstructor)
	bool                                               Skipped;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSpent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortResultsWidget.SendEndOfRoundFriendInviteAnalytic
struct UFortResultsWidget_SendEndOfRoundFriendInviteAnalytic_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     TargetPlayerName;                                         // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortResultsWidget.RequestExitZone
struct UFortResultsWidget_RequestExitZone_Params
{
};

// Function FortniteUI.FortResultsWidget.LogXPData
struct UFortResultsWidget_LogXPData_Params
{
};

// Function FortniteUI.FortResultsWidget.IsDataFinalized
struct UFortResultsWidget_IsDataFinalized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortResultsWidget.GetZoneCompletionResult
struct UFortResultsWidget_GetZoneCompletionResult_Params
{
	EFortCompletionResult                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortResultsWidget.GetTotalMissionPointsEarned
struct UFortResultsWidget_GetTotalMissionPointsEarned_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortResultsWidget.GetRewardsByType
struct UFortResultsWidget_GetRewardsByType_Params
{
	EFortRewardItemType                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           OutRewards;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortRewardNotificationData.GetIconBrush
struct UFortRewardNotificationData_GetIconBrush_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm, OutParm)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardCollectionBookData.GetIconBrush
struct UFortRewardCollectionBookData_GetIconBrush_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm, OutParm)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardEpicQuestData.GetIconBrush
struct UFortRewardEpicQuestData_GetIconBrush_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm, OutParm)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardExpeditionData.GetIconBrush
struct UFortRewardExpeditionData_GetIconBrush_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm, OutParm)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardQuestData.GetIconBrush
struct UFortRewardQuestData_GetIconBrush_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm, OutParm)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.SetPrimaryActionText
struct UFortRewardNotificationWidget_SetPrimaryActionText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function FortniteUI.FortRewardNotificationWidget.SetPrimaryActionHidden
struct UFortRewardNotificationWidget_SetPrimaryActionHidden_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
struct UFortRewardNotificationWidget_SetPrimaryActionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.ResetAllRewardData
struct UFortRewardNotificationWidget_ResetAllRewardData_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
struct UFortRewardNotificationWidget_OnPrimaryActionTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortRewardNotificationWidget.OnPrimaryActionHidden
struct UFortRewardNotificationWidget_OnPrimaryActionHidden_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnPrimaryActionEnabled
struct UFortRewardNotificationWidget_OnPrimaryActionEnabled_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnPrimaryActionDisabled
struct UFortRewardNotificationWidget_OnPrimaryActionDisabled_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnNavigationUp
struct UFortRewardNotificationWidget_OnNavigationUp_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnNavigationRight
struct UFortRewardNotificationWidget_OnNavigationRight_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnNavigationLeft
struct UFortRewardNotificationWidget_OnNavigationLeft_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.OnNavigationDown
struct UFortRewardNotificationWidget_OnNavigationDown_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.IsPrimaryActionHidden
struct UFortRewardNotificationWidget_IsPrimaryActionHidden_Params
{
	bool                                               bHidden;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
struct UFortRewardNotificationWidget_IsPrimaryActionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.InspectItem
struct UFortRewardNotificationWidget_InspectItem_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.AddQuestData
struct UFortRewardNotificationWidget_AddQuestData_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.AddMissionData
struct UFortRewardNotificationWidget_AddMissionData_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.AddMissionAlertData
struct UFortRewardNotificationWidget_AddMissionAlertData_Params
{
};

// Function FortniteUI.FortRewardNotificationWidget.AddExpeditionData
struct UFortRewardNotificationWidget_AddExpeditionData_Params
{
	class UFortExpeditionItem*                         ExpeditionItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.AddEpicQuestData
struct UFortRewardNotificationWidget_AddEpicQuestData_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationWidget.AddCollectionBookData
struct UFortRewardNotificationWidget_AddCollectionBookData_Params
{
	struct FFortCollectionBookRewards                  CollectionBookRewards;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortRewardNotificationSubWidget.TransitionOutBegin
struct UFortRewardNotificationSubWidget_TransitionOutBegin_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.TransitionOut
struct UFortRewardNotificationSubWidget_TransitionOut_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.TransitionInBegin
struct UFortRewardNotificationSubWidget_TransitionInBegin_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.TransitionIn
struct UFortRewardNotificationSubWidget_TransitionIn_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.SetPrimaryActionText
struct UFortRewardNotificationSubWidget_SetPrimaryActionText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function FortniteUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden
struct UFortRewardNotificationSubWidget_SetPrimaryActionHidden_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
struct UFortRewardNotificationSubWidget_SetPrimaryActionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
struct UFortRewardNotificationSubWidget_SetInputActionHandlerState_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
struct UFortRewardNotificationSubWidget_RemoveInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function FortniteUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers
struct UFortRewardNotificationSubWidget_RemoveAllInputActionHandlers_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnPrimaryAction
struct UFortRewardNotificationSubWidget_OnPrimaryAction_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnNavigationUp
struct UFortRewardNotificationSubWidget_OnNavigationUp_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnNavigationRight
struct UFortRewardNotificationSubWidget_OnNavigationRight_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnNavigationLeft
struct UFortRewardNotificationSubWidget_OnNavigationLeft_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnNavigationDown
struct UFortRewardNotificationSubWidget_OnNavigationDown_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnDeactivated
struct UFortRewardNotificationSubWidget_OnDeactivated_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.OnActivated
struct UFortRewardNotificationSubWidget_OnActivated_Params
{
};

// Function FortniteUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
struct UFortRewardNotificationSubWidget_IsPrimaryActionHidden_Params
{
	bool                                               bHidden;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
struct UFortRewardNotificationSubWidget_IsPrimaryActionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationSubWidget.InspectItem
struct UFortRewardNotificationSubWidget_InspectItem_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationSubWidget.Init
struct UFortRewardNotificationSubWidget_Init_Params
{
	class UFortRewardNotificationWidget*               MainWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortRewardNotificationSubWidget.AddInputActionHandler
struct UFortRewardNotificationSubWidget_AddInputActionHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             CommittedEvent;                                           // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortRewardConversationWidget.IsValidConversation
struct UFortRewardConversationWidget_IsValidConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardConversationWidget.GetDataFromSentence
struct UFortRewardConversationWidget_GetDataFromSentence_Params
{
	struct FFortConversationSentence                   Sentence;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	class UTexture2D*                                  TalkingHeadTexture;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
struct UFortRewardExpeditionWidget_OnCollectExpeditionCompleted_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortRewardExpeditionWidget.CollectExpedition
struct UFortRewardExpeditionWidget_CollectExpedition_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRewardNewQuestWidget.IsValidConversation
struct UFortRewardNewQuestWidget_IsValidConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortRewardNewQuestWidget.GetDataFromSentence
struct UFortRewardNewQuestWidget_GetDataFromSentence_Params
{
	struct FFortConversationSentence                   Sentence;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	class UTexture2D*                                  TalkingHeadTexture;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortRichTextBlock.SetText
struct UFortRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function FortniteUI.FortSignInWidget.UpdateSignInButton
struct UFortSignInWidget_UpdateSignInButton_Params
{
};

// Function FortniteUI.FortSignInWidget.StartSignIn
struct UFortSignInWidget_StartSignIn_Params
{
};

// Function FortniteUI.FortSkillTreeCanvas.HandleNodeButtonClicked
struct UFortSkillTreeCanvas_HandleNodeButtonClicked_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvas.HandleButtonGroupSelectionCleared
struct UFortSkillTreeCanvas_HandleButtonGroupSelectionCleared_Params
{
};

// Function FortniteUI.FortSkillTreeCanvas.HandleButtonGroupSelectionChanged
struct UFortSkillTreeCanvas_HandleButtonGroupSelectionChanged_Params
{
	class UCommonButton*                               SelectedButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasSlot.SetZOrder
struct UFortSkillTreeCanvasSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasSlot.SetPosition
struct UFortSkillTreeCanvasSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                               // (Parm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasSlot.GetZOrder
struct UFortSkillTreeCanvasSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasSlot.GetPosition
struct UFortSkillTreeCanvasSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeCanvasSlot.GetBasePosition
struct UFortSkillTreeCanvasSlot_GetBasePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreePageSelectorButton.TryGetStaticSkillTreePageData
struct UFortSkillTreePageSelectorButton_TryGetStaticSkillTreePageData_Params
{
	struct FHomebaseNodePage                           OutStaticData;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreePageSelectorButton.TryGetSkillTreeNodeState
struct UFortSkillTreePageSelectorButton_TryGetSkillTreeNodeState_Params
{
	struct FName                                       NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseNodeState                          OutNodeState;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreePageSelectorButton.IsSkillTreePageLocked
struct UFortSkillTreePageSelectorButton_IsSkillTreePageLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreePageSelectorButton.HandleRefreshSkillTreeNodePage
struct UFortSkillTreePageSelectorButton_HandleRefreshSkillTreeNodePage_Params
{
};

// Function FortniteUI.FortSkillTreePageSelectorButton.HandleDifferentSkillTreePageSet
struct UFortSkillTreePageSelectorButton_HandleDifferentSkillTreePageSet_Params
{
};

// Function FortniteUI.FortSkillTreePageSelectorButton.GetButtonNodeCompletionText
struct UFortSkillTreePageSelectorButton_GetButtonNodeCompletionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortSkillTreeLandingPage.SetupEventBasedSkillTreePages
struct UFortSkillTreeLandingPage_SetupEventBasedSkillTreePages_Params
{
	TArray<struct FString>                             ActiveEventFlags;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortSkillTreeLandingPage.CreateAndAddPageButton
struct UFortSkillTreeLandingPage_CreateAndAddPageButton_Params
{
	struct FName                                       SkillTreePageId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ESkillTreePageType                                 PageType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewRow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortSkillTreePageSelectorButton*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeLandingPage.ClearEventSkillTrees
struct UFortSkillTreeLandingPage_ClearEventSkillTrees_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetSkillTreeNodeState
struct UFortSkillTreeNodeDetailsPanel_TryGetSkillTreeNodeState_Params
{
	struct FHomebaseNodeState                          OutNodeState;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetNodeSquadAttributeData
struct UFortSkillTreeNodeDetailsPanel_TryGetNodeSquadAttributeData_Params
{
	struct FHomebaseNode                               HomebaseNode;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Name;                                                     // (Parm, OutParm)
	struct FText                                       Description;                                              // (Parm, OutParm)
	struct FFortMultiSizeBrush                         Brush;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetNodeDisplayDataFromID
struct UFortSkillTreeNodeDetailsPanel_TryGetNodeDisplayDataFromID_Params
{
	struct FName                                       HomeBaseNodeID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortSkillTreeNodeDisplayData               OutDisplayData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.TryGetNodeDisplayData
struct UFortSkillTreeNodeDetailsPanel_TryGetNodeDisplayData_Params
{
	struct FHomebaseNode                               HomebaseNode;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortSkillTreeNodeDisplayData               OutDisplayData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.SetSkillTreeNodeToRepresent
struct UFortSkillTreeNodeDetailsPanel_SetSkillTreeNodeToRepresent_Params
{
	struct FName                                       SkillTreeNodeId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.HasSkillTreeNodeToRepresent
struct UFortSkillTreeNodeDetailsPanel_HasSkillTreeNodeToRepresent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.HandleSkillTreeNodeStateChanged
struct UFortSkillTreeNodeDetailsPanel_HandleSkillTreeNodeStateChanged_Params
{
};

// Function FortniteUI.FortSkillTreeNodeDetailsPanel.HandleDifferentSkillTreeNodeToRepresentSetBP
struct UFortSkillTreeNodeDetailsPanel_HandleDifferentSkillTreeNodeToRepresentSetBP_Params
{
};

// Function FortniteUI.FortSkillTreePageWidget.TryGetStaticSkillTreePageData
struct UFortSkillTreePageWidget_TryGetStaticSkillTreePageData_Params
{
	struct FHomebaseNodePage                           OutStaticData;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreePageWidget.PlayOutroTransitionBP
struct UFortSkillTreePageWidget_PlayOutroTransitionBP_Params
{
	EFortAnimSpeed                                     AnimSpeed;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSkillTreePageWidget.PlayIntroTransitionBP
struct UFortSkillTreePageWidget_PlayIntroTransitionBP_Params
{
	EFortAnimSpeed                                     AnimSpeed;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSocialListView.SetList
struct UFortSocialListView_SetList_Params
{
	TArray<class UFortSocialItem*>                     InList;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortSplashScreenWidget.ShouldBypassSplashScreen
struct UFortSplashScreenWidget_ShouldBypassSplashScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSplashScreenWidget.ResetFromAccountLinkingFlow
struct UFortSplashScreenWidget_ResetFromAccountLinkingFlow_Params
{
};

// Function FortniteUI.FortSplashScreenWidget.OnGameBootableInviteReceived
struct UFortSplashScreenWidget_OnGameBootableInviteReceived_Params
{
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSplashScreenWidget.CloseSplashScreen
struct UFortSplashScreenWidget_CloseSplashScreen_Params
{
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadIcon.SetSquad
struct UFortSquadIcon_SetSquad_Params
{
	struct FName                                       InName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadIcon.HandleDifferentSquadSetBP
struct UFortSquadIcon_HandleDifferentSquadSetBP_Params
{
};

// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleClearDefenderSquadDetailsBP_Params
{
};

// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP_Params
{
	struct FFortLandingPageDefenderSummaryInfo         DefenderSummaryInfo;                                      // (Parm)
};

// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP_Params
{
	struct FFortLandingPageDefenderSummaryInfo         DefenderSummaryInfo;                                      // (Parm)
};

// Function FortniteUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
struct UFortSquadLandingPageDefenderSquadDetails_SetDefenderSquadInfo_Params
{
	struct FFortLandingPageDefenderSummaryInfo         DefenderSummaryInfo;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
struct UFortSquadLandingPageDefenderSquadDetails_HandleDefenderSquadInfoSetBP_Params
{
	struct FFortLandingPageDefenderSummaryInfo         DefenderSummaryInfo;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
struct UFortSquadLandingPageDefenderSquadDetails_HandleAddDefenderSquadMemberBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
struct UFortSquadLandingPageDefenderSquadDetailsLocked_SetDefenderSquadInfo_Params
{
	struct FFortLandingPageDefenderSummaryInfo         DefenderSummaryInfo;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP
struct UFortSquadLandingPageSurvivorSummary_HandleClearSetBonusSummaryLineItemsBP_Params
{
};

// Function FortniteUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
struct UFortSquadLandingPageSurvivorSummary_HandleAddSetBonusSummaryLineItemBP_Params
{
	struct FFortAttributeModifierAccumulation          AttributeModifierAccumulation;                            // (Parm)
};

// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
struct UFortDefenderSquadSelectorButton_TryGetTheaterUniqueId_Params
{
	struct FString                                     OutTheaterUniqueId;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               OutIsUnlocked;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
struct UFortDefenderSquadSelectorButton_TryGetPowerLevel_Params
{
	int                                                OutPowerLevel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
struct UFortSurvivorSquadSelectorButton_TryGetSummaryStats_Params
{
	struct FFortSurvivorSquadSelectorButtonSummaryStats OutSummaryStats;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
struct UFortSurvivorSquadSelectorButton_TryGetSquadMembers_Params
{
	TArray<class UFortWorker*>                         OutSquadMembers;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
struct UFortSurvivorSquadSelectorButton_TryGetPersonalityMatches_Params
{
	struct FFortSurvivorSquadSelectorButtonPersonalityMatches OutPersonalityMatches;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
struct UFortSquadSlotDetailsPanel_TryGetItemToPreviewInSlot_Params
{
	class UFortItem*                                   OutItemToPreviewInSlot;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotDetailsPanel.SetScrollWidget
struct UFortSquadSlotDetailsPanel_SetScrollWidget_Params
{
};

// Function FortniteUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotDetailsPanel_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
struct UFortSquadSlotDetailsPanel_IsSquadSlotLockedBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP
struct UFortSquadSlotDetailsPanel_HandleSquadSlotStateChangedBP_Params
{
};

// Function FortniteUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP
struct UFortSquadSlotDetailsPanel_HandleSquadSlotRestrictionFactorsChangedBP_Params
{
};

// Function FortniteUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP
struct UFortSquadSlotDetailsPanel_HandleDifferentSquadSlotSetBP_Params
{
};

// Function FortniteUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
struct UFortSquadSlotDetailsPanel_GetSlottingRestrictionReasons_Params
{
	TArray<EFortSquadSlottingRestrictionReason>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
struct UFortSquadSlotDetailsPanel_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotDetailsPanel_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated
struct UFortSquadSlotSelectorButton_SquadSlotWidgetUpdated_Params
{
};

// Function FortniteUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotSelectorButton_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
struct UFortSquadSlotSelectorButton_IsSquadSlotLockedBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP
struct UFortSquadSlotSelectorButton_HandlePreDifferentSquadSlotSetBP_Params
{
};

// Function FortniteUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP
struct UFortSquadSlotSelectorButton_HandlePostDifferentSquadSlotSetBP_Params
{
};

// Function FortniteUI.FortSquadSlotSelectorButton.GetInPreviewMode
struct UFortSquadSlotSelectorButton_GetInPreviewMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotSelectorButton_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.TryGetStaticSquadDataBP
struct UFortSquadSlotsView_TryGetStaticSquadDataBP_Params
{
	struct FHomebaseSquad                              OutSquadData;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.SetIsSelectionLocked
struct UFortSquadSlotsView_SetIsSelectionLocked_Params
{
	bool                                               ShouldSelectionBeLocked;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.SetInPreviewMode
struct UFortSquadSlotsView_SetInPreviewMode_Params
{
	bool                                               bPreview;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.SetIdOfSquadToManageBP
struct UFortSquadSlotsView_SetIdOfSquadToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.SelectSlot
struct UFortSquadSlotsView_SelectSlot_Params
{
	int                                                SquadSlotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortSquadSlotsView.OnRequestOpenSquadSlot__DelegateSignature
struct UFortSquadSlotsView_OnRequestOpenSquadSlot__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
struct UFortSquadSlotsView_OnDifferentSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.HandleSelectedButtonChanged
struct UFortSquadSlotsView_HandleSelectedButtonChanged_Params
{
	class UCommonButton*                               SelectedButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.HandleHoveredButtonChanged
struct UFortSquadSlotsView_HandleHoveredButtonChanged_Params
{
	class UCommonButton*                               HoveredButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.HandleButtonClicked
struct UFortSquadSlotsView_HandleButtonClicked_Params
{
	class UCommonButton*                               CommittedButton;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
struct UFortSquadSlotsView_GetIndexOfSelectedSquadSlot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.GetIdOfSquadToManageBP
struct UFortSquadSlotsView_GetIdOfSquadToManageBP_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
struct UFortSquadSlotsView_CreateAndAddSquadSlotButton_Params
{
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseSquadSlot                          SquadSlotDefinition;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWidget*                                     OutSquadSlotButtonHost;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortSquadSlotSelectorButton*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotWidget_SetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotWidget.SetCardSize
struct UFortSquadSlotWidget_SetCardSize_Params
{
	EFortItemCardSize                                  CardSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotWidget.IsSquadSlotLockedBP
struct UFortSquadSlotWidget_IsSquadSlotLockedBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotWidget.GetItemInSquadSlotBP
struct UFortSquadSlotWidget_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotWidget_GetIdOfSquadSlotToManageBP_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.IsTierPerk
struct UFortPerkWidget_IsTierPerk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.IsPerkUnlocked
struct UFortPerkWidget_IsPerkUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.IsPerkHighlighted
struct UFortPerkWidget_IsPerkHighlighted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.HasAbility
struct UFortPerkWidget_HasAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.GetTooltipTitle
struct UFortPerkWidget_GetTooltipTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortPerkWidget.GetTooltipDescription
struct UFortPerkWidget_GetTooltipDescription_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortPerkWidget.GetSupportBonusType
struct UFortPerkWidget_GetSupportBonusType_Params
{
	EFortSupportBonusType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.GetRequiredLevel
struct UFortPerkWidget_GetRequiredLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.GetPerkTier
struct UFortPerkWidget_GetPerkTier_Params
{
	TEnumAsByte<EFortItemTier>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortPerkWidget.GetIcon
struct UFortPerkWidget_GetIcon_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
struct UFortSurvivorSquadStatMatchBase_OnStatMatchUpdated_Params
{
	struct FFortUISurvivorSquadStatMatch               UpdatedMatch;                                             // (Parm)
};

// Function FortniteUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
struct UFortSurvivorSquadStatMatchesBase_TryGetStaticSquadDataBP_Params
{
	struct FHomebaseSquad                              OutSquadData;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
struct UFortSurvivorSquadStatMatchesBase_SetSummaryView_Params
{
	bool                                               bInSummaryView;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
struct UFortSurvivorSquadStatMatchesBase_SetIdOfSquadToManageBP_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP
struct UFortSurvivorSquadStatMatchesBase_HandleDifferentSquadSetBP_Params
{
};

// Function FortniteUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
struct UFortSurvivorSquadStatMatchesBase_GetIdOfSquadToManageBP_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
struct UFortSurvivorSquadStatMatchesBase_AddStatMatch_Params
{
	class UFortSurvivorSquadStatMatchBase*             SetBonus;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortSquadStatsWidgetBase.RequestStatsUpdate
struct UFortSquadStatsWidgetBase_RequestStatsUpdate_Params
{
};

// Function FortniteUI.FortSquadStatsWidgetBase.RequestShowPreviewStats
struct UFortSquadStatsWidgetBase_RequestShowPreviewStats_Params
{
};

// Function FortniteUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged
struct UFortSquadStatsWidgetBase_HandleSquadSlottingPreviewStateChanged_Params
{
};

// Function FortniteUI.FortSquadStatsWidgetBase.GetLocalPlayerId
struct UFortSquadStatsWidgetBase_GetLocalPlayerId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP
struct UFortSquadStatValueWithIcon_HandleDifferentAttributeSetBP_Params
{
};

// Function FortniteUI.FortStatIcon.SetAttribute
struct UFortStatIcon_SetAttribute_Params
{
	struct FGameplayAttribute                          InAttribute;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortStatIcon.HandleDifferentAttributeSetBP
struct UFortStatIcon_HandleDifferentAttributeSetBP_Params
{
};

// Function FortniteUI.FortStoreContext.RealMoneyPurchaseStart
struct UFortStoreContext_RealMoneyPurchaseStart_Params
{
};

// Function FortniteUI.FortStoreContext.RealMoneyPurchaseFinished
struct UFortStoreContext_RealMoneyPurchaseFinished_Params
{
};

// Function FortniteUI.FortStoreContext.OpenWebPayment
struct UFortStoreContext_OpenWebPayment_Params
{
	struct FString                                     AttemptedMTXOfferId;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.MakePurchase
struct UFortStoreContext_MakePurchase_Params
{
	struct FCardPackOffer                              Offer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECardPackPurchaseError                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.MakeChoice
struct UFortStoreContext_MakeChoice_Params
{
	int                                                ChoiceIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.IsWaitingForMcp
struct UFortStoreContext_IsWaitingForMcp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.GetTimeUntilMarketplaceRefresh
struct UFortStoreContext_GetTimeUntilMarketplaceRefresh_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortStoreContext.GetTimeUntilDailyLimitReset
struct UFortStoreContext_GetTimeUntilDailyLimitReset_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortStoreContext.GetStoreState
struct UFortStoreContext_GetStoreState_Params
{
	EFortStoreState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.GetRarityColor
struct UFortStoreContext_GetRarityColor_Params
{
	EFortRarity                                        Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.GetPreviousState
struct UFortStoreContext_GetPreviousState_Params
{
	EFortStoreState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.GetNumUnopenedCardPacksRemaining
struct UFortStoreContext_GetNumUnopenedCardPacksRemaining_Params
{
	class UFortCardPackItemDefinition*                 PackType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.GetCard
struct UFortStoreContext_GetCard_Params
{
	int                                                CardIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCard                                       ResultOut;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.GetAccountItems
struct UFortStoreContext_GetAccountItems_Params
{
	TArray<class UFortAccountItemDefinition*>          AccountItemDefinitions;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortAccountItem*>                    AccountItems;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortStoreContext.FreshenCache
struct UFortStoreContext_FreshenCache_Params
{
};

// Function FortniteUI.FortStoreContext.FireInteractionAnalyticsEvent
struct UFortStoreContext_FireInteractionAnalyticsEvent_Params
{
	struct FString                                     Interaction;                                              // (Parm, ZeroConstructor)
	struct FString                                     Details;                                                  // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortStoreContext.ExitWebPayment
struct UFortStoreContext_ExitWebPayment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.ExitSummary
struct UFortStoreContext_ExitSummary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.ExitRealMoneyStore
struct UFortStoreContext_ExitRealMoneyStore_Params
{
};

// Function FortniteUI.FortStoreContext.ExitCurrencyStore
struct UFortStoreContext_ExitCurrencyStore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.ExitCardPackStore
struct UFortStoreContext_ExitCardPackStore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.ErrorOccurred
struct UFortStoreContext_ErrorOccurred_Params
{
	struct FString                                     ErrorAnalytics;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.EnterRealMoneyStore
struct UFortStoreContext_EnterRealMoneyStore_Params
{
};

// Function FortniteUI.FortStoreContext.EnterCurrencyStore
struct UFortStoreContext_EnterCurrencyStore_Params
{
	struct FString                                     AttemptedPurchaseCardPackId;                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.EnterCardPackStore
struct UFortStoreContext_EnterCardPackStore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.DismissError
struct UFortStoreContext_DismissError_Params
{
};

// Function FortniteUI.FortStoreContext.ChoiceResultComplete
struct UFortStoreContext_ChoiceResultComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardPackOpeningComplete
struct UFortStoreContext_CardPackOpeningComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardPackDestroyComplete
struct UFortStoreContext_CardPackDestroyComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardFrontRevealComplete
struct UFortStoreContext_CardFrontRevealComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardFlipComplete
struct UFortStoreContext_CardFlipComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardExitComplete
struct UFortStoreContext_CardExitComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardEntryComplete
struct UFortStoreContext_CardEntryComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardBackRevealComplete
struct UFortStoreContext_CardBackRevealComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreContext.CardAddedToSummaryComplete
struct UFortStoreContext_CardAddedToSummaryComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortStoreSummary.SetCards
struct UFortStoreSummary_SetCards_Params
{
	TArray<struct FCard>                               Cards;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortSubGameSelectBase.GetShortDescription
struct UFortSubGameSelectBase_GetShortDescription_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ShortDescription;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSubGameSelectBase.GetFullDescription
struct UFortSubGameSelectBase_GetFullDescription_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FullDescription;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortSubGameSelectButtonBase.UpdateButtonState
struct UFortSubGameSelectButtonBase_UpdateButtonState_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
struct UFortSurvivorSquadSummaryStatItem_SetAttributeModifierAccumulation_Params
{
	struct FFortAttributeModifierAccumulation          Accumulation;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortTextStyleList.GetTextStyles
struct UFortTextStyleList_GetTextStyles_Params
{
	TArray<TAssetPtr<class UClass>>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTheaterSelect.OnNavigationRight
struct UFortTheaterSelect_OnNavigationRight_Params
{
};

// Function FortniteUI.FortTheaterSelect.OnNavigationLeft
struct UFortTheaterSelect_OnNavigationLeft_Params
{
};

// Function FortniteUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
struct UFortTheaterSelect_GetTheaterRecommendedRatingRange_Params
{
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
	int                                                Minimum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Maximum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTheaterSelect.GetSurvivalCMSText
struct UFortTheaterSelect_GetSurvivalCMSText_Params
{
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       Body;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTierIndicator.SetPreviewState
struct UFortTierIndicator_SetPreviewState_Params
{
	int                                                TierIncrease;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTierIndicator.SetItemToRepresent
struct UFortTierIndicator_SetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTierIndicator.SetInterPipPadding
struct UFortTierIndicator_SetInterPipPadding_Params
{
	float                                              InterPipPadding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTierIndicator.SetBrushSize
struct UFortTierIndicator_SetBrushSize_Params
{
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTierIndicator.ClearPreviewState
struct UFortTierIndicator_ClearPreviewState_Params
{
};

// Function FortniteUI.FortTooltipUIContext.GetUpgradeStats
struct UFortTooltipUIContext_GetUpgradeStats_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortDisplayAttribute>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTooltipUIContext.GetUIDataForTag
struct UFortTooltipUIContext_GetUIDataForTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortTagUIData                              OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetTooltipStats
struct UFortTooltipUIContext_GetTooltipStats_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortDisplayAttribute>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTooltipUIContext.GetTooltipStat
struct UFortTooltipUIContext_GetTooltipStat_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Token;                                                    // (ConstParm, Parm)
	struct FFortDisplayAttribute                       OutDisplayAttribute;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetTooltipAttributes
struct UFortTooltipUIContext_GetTooltipAttributes_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayAttribute>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTooltipUIContext.GetDisplayNameAndMultiBrushForTag
struct UFortTooltipUIContext_GetDisplayNameAndMultiBrushForTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutDisplayName;                                           // (Parm, OutParm)
	struct FFortMultiSizeBrush                         OutBrush;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetDescription
struct UFortTooltipUIContext_GetDescription_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               OutDescription;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetComparisonStats
struct UFortTooltipUIContext_GetComparisonStats_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ComparisonObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortDisplayAttribute>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTooltipUIContext.GetCombinedDescription
struct UFortTooltipUIContext_GetCombinedDescription_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext*                         TooltipContext;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutDescription;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.UpdateTutorialAnnouncement
struct UFortTutorialContext_UpdateTutorialAnnouncement_Params
{
	struct FFortClientAnnouncementData_Tutorial        AnnouncementData;                                         // (Parm)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.UnhideTutorialCallout
struct UFortTutorialContext_UnhideTutorialCallout_Params
{
	struct FName                                       WidgetName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.UnhideAllTutorialCallouts
struct UFortTutorialContext_UnhideAllTutorialCallouts_Params
{
};

// Function FortniteUI.FortTutorialContext.SkipTutorial
struct UFortTutorialContext_SkipTutorial_Params
{
};

// Function FortniteUI.FortTutorialContext.ShouldPromptToSkipTutorial
struct UFortTutorialContext_ShouldPromptToSkipTutorial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.OnNewAnnouncementStartedOnClient
struct UFortTutorialContext_OnNewAnnouncementStartedOnClient_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.HideTutorialCallout
struct UFortTutorialContext_HideTutorialCallout_Params
{
	struct FName                                       WidgetName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.GetTutorialCallouts
struct UFortTutorialContext_GetTutorialCallouts_Params
{
	TArray<struct FName>                               WidgetNames;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortTutorialContext.GetHiddenTutorialCallouts
struct UFortTutorialContext_GetHiddenTutorialCallouts_Params
{
	TArray<struct FName>                               WidgetNames;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortTutorialContext.EnableTutorialCallout
struct UFortTutorialContext_EnableTutorialCallout_Params
{
	struct FName                                       WidgetName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.DisableTutorialCallout
struct UFortTutorialContext_DisableTutorialCallout_Params
{
	struct FName                                       WidgetName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTutorialContext.ContinueTutorial
struct UFortTutorialContext_ContinueTutorial_Params
{
};

// Function FortniteUI.FortTutorialContext.ClearTutorialCallouts
struct UFortTutorialContext_ClearTutorialCallouts_Params
{
};

// Function FortniteUI.FortTwitchLogin.OnShowLoginError
struct UFortTwitchLogin_OnShowLoginError_Params
{
	struct FText                                       ErrorTitle;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ErrorMessage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortTwitchLogin.OnLoginStatusChanged
struct UFortTwitchLogin_OnLoginStatusChanged_Params
{
	bool                                               bLoggedIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AccountName;                                              // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortTwitchLogin.OnLoginFlowModalDismissed
struct UFortTwitchLogin_OnLoginFlowModalDismissed_Params
{
	class UFortTwitchLoginModalWidget*                 Modal;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortTwitchLogin.OnLoginFlowModalCreated
struct UFortTwitchLogin_OnLoginFlowModalCreated_Params
{
	class UFortTwitchLoginModalWidget*                 Modal;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortTwitchLogin.OnLinkedTwitchAccountChanged
struct UFortTwitchLogin_OnLinkedTwitchAccountChanged_Params
{
	struct FString                                     AccountName;                                              // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortTwitchLogin.Logout
struct UFortTwitchLogin_Logout_Params
{
};

// Function FortniteUI.FortTwitchLogin.Login
struct UFortTwitchLogin_Login_Params
{
};

// Function FortniteUI.FortTwitchLogin.IsLoggedIn
struct UFortTwitchLogin_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortTwitchLogin.GetLinkedTwitchAccountName
struct UFortTwitchLogin_GetLinkedTwitchAccountName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTwitchLogin.GetAccountName
struct UFortTwitchLogin_GetAccountName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortTwitchLogin.CancelLoginFlow
struct UFortTwitchLogin_CancelLoginFlow_Params
{
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaStringOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaStringOnOffer_Params
{
	struct FCardPackOffer                              Offer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaIntOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaIntOnOffer_Params
{
	struct FCardPackOffer                              Offer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaBoolOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaBoolOnOffer_Params
{
	struct FCardPackOffer                              Offer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               bDefaultValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageMultiSizeBrush
struct UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageMultiSizeBrush_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortMultiSizeBrush                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageBrush
struct UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageBrush_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageMultiSizeBrush
struct UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageMultiSizeBrush_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortMultiSizeBrush                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageBrush
struct UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageBrush_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIDataConfigurationContext.UseSpecificPinataWeapon
struct UFortUIDataConfigurationContext_UseSpecificPinataWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIDataConfigurationContext.IsLimitedToES2Features
struct UFortUIDataConfigurationContext_IsLimitedToES2Features_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIDataConfigurationContext.IsChatEnabled
struct UFortUIDataConfigurationContext_IsChatEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIDataConfigurationContext.GetFrontEndFFSettings
struct UFortUIDataConfigurationContext_GetFrontEndFFSettings_Params
{
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIDataConfigurationContext.AreSocialFeaturesEnabled
struct UFortUIDataConfigurationContext_AreSocialFeaturesEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIDataConfigurationContext.ArePartyFeaturesEnabled
struct UFortUIDataConfigurationContext_ArePartyFeaturesEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.UpdateStateWidgetContent
struct UFortUIManagerWidget_NUI_UpdateStateWidgetContent_Params
{
	class UFortUIStateWidget_NUI*                      StateWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.UnregisterStateTrigger
struct UFortUIManagerWidget_NUI_UnregisterStateTrigger_Params
{
	class UFortUIStateTrigger*                         TriggerToRemove;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.ShowErrorDialog
struct UFortUIManagerWidget_NUI_ShowErrorDialog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OperationDesc;                                            // (Parm)
	struct FText                                       DisplayMessage;                                           // (Parm)
	struct FString                                     ErrorCode;                                                // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortUIManagerWidget_NUI.ShouldBlockSubtitlePortrait
struct UFortUIManagerWidget_NUI_ShouldBlockSubtitlePortrait_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.SetStateContentDisplayed
struct UFortUIManagerWidget_NUI_SetStateContentDisplayed_Params
{
	bool                                               bDisplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.SetFrontEndVisibility
struct UFortUIManagerWidget_NUI_SetFrontEndVisibility_Params
{
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.ReleaseNotification
struct UFortUIManagerWidget_NUI_ReleaseNotification_Params
{
	class UFortUINotification*                         Notification;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.RegisterStateTrigger
struct UFortUIManagerWidget_NUI_RegisterStateTrigger_Params
{
	class UFortUIStateTrigger*                         StateTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.QueueActivatablePanelIntoModalLayer
struct UFortUIManagerWidget_NUI_QueueActivatablePanelIntoModalLayer_Params
{
	class UCommonActivatablePanel*                     Panel;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.QueueActionPanelIntoModalLayer
struct UFortUIManagerWidget_NUI_QueueActionPanelIntoModalLayer_Params
{
	class UFortActionHandlerPanel*                     Panel;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.PushContentWidgetAdvanced
struct UFortUIManagerWidget_NUI_PushContentWidgetAdvanced_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.PushContentWidget
struct UFortUIManagerWidget_NUI_PushContentWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.PopContentWidget
struct UFortUIManagerWidget_NUI_PopContentWidget_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.PopActivatablePanelInModalLayer
struct UFortUIManagerWidget_NUI_PopActivatablePanelInModalLayer_Params
{
	class UCommonActivatablePanel*                     Panel;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.OnStateStarted
struct UFortUIManagerWidget_NUI_OnStateStarted_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.OnStateEnded
struct UFortUIManagerWidget_NUI_OnStateEnded_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.OnShowConfirmation_NUI
struct UFortUIManagerWidget_NUI_OnShowConfirmation_NUI_Params
{
	struct FFortDialogDescription_NUI                  Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIManagerWidget_NUI.OnShowConfirmation
struct UFortUIManagerWidget_NUI_OnShowConfirmation_Params
{
	struct FFortDialogDescription                      Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction FortniteUI.FortUIManagerWidget_NUI.OnShouldBlockSubtitlePortraitChanged__DelegateSignature
struct UFortUIManagerWidget_NUI_OnShouldBlockSubtitlePortraitChanged__DelegateSignature_Params
{
	bool                                               bShouldBlockSubtitlePortrait;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortUIManagerWidget_NUI.OnEndSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_NUI_OnEndSpokenDialog__DelegateSignature_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.OnEndLatentWaitForConfirmationDialog
struct UFortUIManagerWidget_NUI_OnEndLatentWaitForConfirmationDialog_Params
{
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (Parm, OutParm, ReferenceParm)
};

// DelegateFunction FortniteUI.FortUIManagerWidget_NUI.OnBeginSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_NUI_OnBeginSpokenDialog__DelegateSignature_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Subtitle;                                                 // (Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.KillConfirmationDialog
struct UFortUIManagerWidget_NUI_KillConfirmationDialog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.IsStateContentDisplayed
struct UFortUIManagerWidget_NUI_IsStateContentDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.IncrementShouldBlockSubtitlePortrait
struct UFortUIManagerWidget_NUI_IncrementShouldBlockSubtitlePortrait_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.GetUINotificationQueue
struct UFortUIManagerWidget_NUI_GetUINotificationQueue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EFortNotificationQueueType                         QueueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUINotificationQueue*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.GetUINavigationManager
struct UFortUIManagerWidget_NUI_GetUINavigationManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUINavigationManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.GetUIManagerWidget
struct UFortUIManagerWidget_NUI_GetUIManagerWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUIManagerWidget_NUI*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.GetNavigationManager
struct UFortUIManagerWidget_NUI_GetNavigationManager_Params
{
	class UFortUINavigationManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.GetCurrentUIStateWidget
struct UFortUIManagerWidget_NUI_GetCurrentUIStateWidget_Params
{
	class UFortUIStateWidget_NUI*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.GetCachedWidget
struct UFortUIManagerWidget_NUI_GetCachedWidget_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.DisplayStateContent
struct UFortUIManagerWidget_NUI_DisplayStateContent_Params
{
	bool                                               bDisplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.DisplayErrorDialog
struct UFortUIManagerWidget_NUI_DisplayErrorDialog_Params
{
	struct FFortErrorInfo                              Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIManagerWidget_NUI.DecrementShouldBlockSubtitlePortrait
struct UFortUIManagerWidget_NUI_DecrementShouldBlockSubtitlePortrait_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.CreateUIStateTrigger
struct UFortUIManagerWidget_NUI_CreateUIStateTrigger_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUIStateTrigger*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.CreateNotification
struct UFortUIManagerWidget_NUI_CreateNotification_Params
{
	class UClass*                                      UINotificationClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUINotification*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget_NUI.CloseErrorWindow
struct UFortUIManagerWidget_NUI_CloseErrorWindow_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI.CloseConfirmationWindow
struct UFortUIManagerWidget_NUI_CloseConfirmationWindow_Params
{
};

// Function FortniteUI.FortUIManagerWidget_NUI._BPGetCurrentUIState
struct UFortUIManagerWidget_NUI__BPGetCurrentUIState_Params
{
	EFortUIState                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIMessageItemWidget.OnStackSizeChanged
struct UFortUIMessageItemWidget_OnStackSizeChanged_Params
{
	int                                                OldStackSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIMessageItemWidget.OnReturnedToPool
struct UFortUIMessageItemWidget_OnReturnedToPool_Params
{
};

// Function FortniteUI.FortUIMessageItemWidget.OnBeginRemove
struct UFortUIMessageItemWidget_OnBeginRemove_Params
{
};

// Function FortniteUI.FortUIMessageManager.HandleMessageRemoved
struct UFortUIMessageManager_HandleMessageRemoved_Params
{
	class UFortUIMessageItemWidget*                    MessageItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIMessageManager.HandleMessageDisplayed
struct UFortUIMessageManager_HandleMessageDisplayed_Params
{
	class UFortUIMessageItemWidget*                    MessageItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIMessageManager.GetNumDisplayedItems
struct UFortUIMessageManager_GetNumDisplayedItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIMessageManager.GetNextMessageInQueue
struct UFortUIMessageManager_GetNextMessageInQueue_Params
{
	class UFortUIMessageItemWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIMessageManager.AddMessageItem
struct UFortUIMessageManager_AddMessageItem_Params
{
	class UClass*                                      MessageItemClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUIMessageItemWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIMessagesPageBase.OnNotificationCleared
struct UFortUIMessagesPageBase_OnNotificationCleared_Params
{
	class UFortUINotification*                         ClearedMessage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIMessagesPageBase.OnMessageAvailable
struct UFortUIMessagesPageBase_OnMessageAvailable_Params
{
};

// Function FortniteUI.FortUIMessagesPageBase.FillMessagesList
struct UFortUIMessagesPageBase_FillMessagesList_Params
{
};

// Function FortniteUI.FortUINotificationQueue.UnregisterToReceiveNotifications
struct UFortUINotificationQueue_UnregisterToReceiveNotifications_Params
{
};

// Function FortniteUI.FortUINotificationQueue.RemoveNotification
struct UFortUINotificationQueue_RemoveNotification_Params
{
	class UFortUINotification*                         InNotificationDescription;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINotificationQueue.RegisterToReceiveNotifications
struct UFortUINotificationQueue_RegisterToReceiveNotifications_Params
{
	struct FScriptDelegate                             NotificationDelegate;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortUINotificationQueue.GetNextNotification
struct UFortUINotificationQueue_GetNextNotification_Params
{
	class UFortUINotification*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIRewardReport.GetRewardDisplayLevel
struct UFortUIRewardReport_GetRewardDisplayLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.IsLocalPlayer
struct UFortUIScoreReport_IsLocalPlayer_Params
{
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetXpToCompleteLevel
struct UFortUIScoreReport_GetXpToCompleteLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetXpInfo
struct UFortUIScoreReport_GetXpInfo_Params
{
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortUIXpInfo                               OutXpInfo;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetTeamScore
struct UFortUIScoreReport_GetTeamScore_Params
{
	TEnumAsByte<EFortUIScoreType>                      ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetScoreReportIndicesByPlayerID
struct UFortUIScoreReport_GetScoreReportIndicesByPlayerID_Params
{
	TArray<int>                                        SortedScoreReportIndices;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortUIScoreReport.GetScoreReportIndex
struct UFortUIScoreReport_GetScoreReportIndex_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetPlayerScore
struct UFortUIScoreReport_GetPlayerScore_Params
{
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortUIScoreType>                      ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetPlayerName
struct UFortUIScoreReport_GetPlayerName_Params
{
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIScoreReport.GetPlayerIDFromScoreReportIndex
struct UFortUIScoreReport_GetPlayerIDFromScoreReportIndex_Params
{
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            OutUniqueNetIdRepl;                                       // (Parm, OutParm)
};

// Function FortniteUI.FortUIScoreReport.GetPlayerCount
struct UFortUIScoreReport_GetPlayerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetLevelProgress
struct UFortUIScoreReport_GetLevelProgress_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DisplayXp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetDifficultBonusScore
struct UFortUIScoreReport_GetDifficultBonusScore_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetDifficultBonusMultiplier
struct UFortUIScoreReport_GetDifficultBonusMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetCurrentPlayerPawn
struct UFortUIScoreReport_GetCurrentPlayerPawn_Params
{
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetBadgeScore
struct UFortUIScoreReport_GetBadgeScore_Params
{
	class UFortItem*                                   BadgeItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateTrigger.IsLoggedIn
struct UFortUIStateTrigger_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateTrigger.EvalBP
struct UFortUIStateTrigger_EvalBP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.SetFrontEndVisibility
struct UFortUIStateWidget_NUI_SetFrontEndVisibility_Params
{
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.PushContentWidgetInternal
struct UFortUIStateWidget_NUI_PushContentWidgetInternal_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState                           State;                                                    // (Parm)
};

// Function FortniteUI.FortUIStateWidget_NUI.PushContentWidgetAdvanced
struct UFortUIStateWidget_NUI_PushContentWidgetAdvanced_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.PushContentWidget
struct UFortUIStateWidget_NUI_PushContentWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.PopContentWidgetInternal
struct UFortUIStateWidget_NUI_PopContentWidgetInternal_Params
{
	struct FContentPushState                           State;                                                    // (Parm)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.PopContentWidget
struct UFortUIStateWidget_NUI_PopContentWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.OnFrontEndVisibilityUpdated
struct UFortUIStateWidget_NUI_OnFrontEndVisibilityUpdated_Params
{
	bool                                               bHideHeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.OnExitState
struct UFortUIStateWidget_NUI_OnExitState_Params
{
	EFortUIState                                       NextUIState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_NUI.OnEnterState
struct UFortUIStateWidget_NUI_OnEnterState_Params
{
	EFortUIState                                       PreviousUIState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.AthenaHUDBase.TeamMembersChanged
struct UAthenaHUDBase_TeamMembersChanged_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.StartUpdateCheck
struct UFortUIStateWidget_Login_StartUpdateCheck_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.StartManualLogin
struct UFortUIStateWidget_Login_StartManualLogin_Params
{
	struct FString                                     InEmail;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InPassword;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.StartAutoLogin
struct UFortUIStateWidget_Login_StartAutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.ShowPostLoginLogoutError
struct UFortUIStateWidget_Login_ShowPostLoginLogoutError_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.SendEulaResponse
struct UFortUIStateWidget_Login_SendEulaResponse_Params
{
	bool                                               bAccepted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.OnShowLoginMessage
struct UFortUIStateWidget_Login_OnShowLoginMessage_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Tile;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Body;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIStateWidget_Login.OnPostLoginLogoutComplete
struct UFortUIStateWidget_Login_OnPostLoginLogoutComplete_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIStateWidget_Login.OnPatchingComplete
struct UFortUIStateWidget_Login_OnPatchingComplete_Params
{
	bool                                               bProceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.OnNeedsPurchaseOrAccountLinking
struct UFortUIStateWidget_Login_OnNeedsPurchaseOrAccountLinking_Params
{
	bool                                               bLinkedAccountNeedsPurchase;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.OnLogoutComplete
struct UFortUIStateWidget_Login_OnLogoutComplete_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnLoginSuceeded
struct UFortUIStateWidget_Login_OnLoginSuceeded_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnLoginFailed
struct UFortUIStateWidget_Login_OnLoginFailed_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIStateWidget_Login.OnEulaAvailable
struct UFortUIStateWidget_Login_OnEulaAvailable_Params
{
	struct FText                                       EulaText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIStateWidget_Login.OnDisplayErrorComplete
struct UFortUIStateWidget_Login_OnDisplayErrorComplete_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.IsLoggingOut
struct UFortUIStateWidget_Login_IsLoggingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.IsLoggedIn
struct UFortUIStateWidget_Login_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget_Login.GetPlatformDisplayName
struct UFortUIStateWidget_Login_GetPlatformDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIStateWidget_Login.GetEULAText
struct UFortUIStateWidget_Login_GetEULAText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortUIStateWidget_Login.CheckShowLoginMessage
struct UFortUIStateWidget_Login_CheckShowLoginMessage_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.CheckNetworkError
struct UFortUIStateWidget_Login_CheckNetworkError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortActionHandlerPanel.SetOnPanelDeactivated
struct UFortActionHandlerPanel_SetOnPanelDeactivated_Params
{
	struct FScriptDelegate                             OnDeactivatedHandler;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortActionHandlerPanel.SetOnPanelActivated
struct UFortActionHandlerPanel_SetOnPanelActivated_Params
{
	struct FScriptDelegate                             OnActivatedHandler;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelDeactivated
struct UFortActionHandlerPanel_RemoveOnPanelDeactivated_Params
{
	class UObject*                                     BoundObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortActionHandlerPanel.OnHandleAction
struct UFortActionHandlerPanel_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortActionHandlerPanel.DeactivateActionHandler
struct UFortActionHandlerPanel_DeactivateActionHandler_Params
{
};

// Function FortniteUI.FortActionHandlerPanel.ActivateActionHandler
struct UFortActionHandlerPanel_ActivateActionHandler_Params
{
};

// Function FortniteUI.FortConfirmationWindow.ShowConfirmation
struct UFortConfirmationWindow_ShowConfirmation_Params
{
	struct FFortDialogDescription                      Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortConfirmationWindow.ProcessResult
struct UFortConfirmationWindow_ProcessResult_Params
{
	EFortDialogResult                                  DialogResult;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortConfirmationWindow.OnShow
struct UFortConfirmationWindow_OnShow_Params
{
};

// Function FortniteUI.FortConfirmationWindow.OnKill
struct UFortConfirmationWindow_OnKill_Params
{
};

// Function FortniteUI.FortConfirmationWindow.KillConfirmation
struct UFortConfirmationWindow_KillConfirmation_Params
{
};

// Function FortniteUI.FortErrorDialog.ResetErrorInfo
struct UFortErrorDialog_ResetErrorInfo_Params
{
};

// Function FortniteUI.FortErrorDialog.OnRebuildDialog
struct UFortErrorDialog_OnRebuildDialog_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortErrorDialog.DisplayError
struct UFortErrorDialog_DisplayError_Params
{
	struct FFortErrorInfo                              ErrorInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortQuestRewardChoiceWidget.SetQuest
struct UFortQuestRewardChoiceWidget_SetQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget.OnExitState
struct UFortUIStateWidget_OnExitState_Params
{
	EFortUIState                                       NextUIState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIStateWidget.OnEnterState
struct UFortUIStateWidget_OnEnterState_Params
{
	EFortUIState                                       PreviousUIState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.ToggleItemRecycling
struct UFortVaultWidget_ToggleItemRecycling_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.SetCachedSortType
struct UFortVaultWidget_SetCachedSortType_Params
{
	EInventoryContentSortType                          InSortType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EFortInventoryFilter                               InContentSubType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.RemoveItemFromRecycling
struct UFortVaultWidget_RemoveItemFromRecycling_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.RemoveAllItemsFromRecycling
struct UFortVaultWidget_RemoveAllItemsFromRecycling_Params
{
};

// DelegateFunction FortniteUI.FortVaultWidget.OnRecycleItemsChanged__DelegateSignature
struct UFortVaultWidget_OnRecycleItemsChanged__DelegateSignature_Params
{
	EVaultItemChangedType                              ChangeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           ChangedItems;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemQuantityPair>               Resources;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortItem*>                           RecycleItems;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortVaultWidget.MarkVisibleItemsSeen
struct UFortVaultWidget_MarkVisibleItemsSeen_Params
{
	TArray<class UFortAccountItem*>                    InVisibleItems;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortVaultWidget.MarkSeenItemsInVault
struct UFortVaultWidget_MarkSeenItemsInVault_Params
{
};

// Function FortniteUI.FortVaultWidget.IsSupportedSortType
struct UFortVaultWidget_IsSupportedSortType_Params
{
	EInventoryContentSortType                          InSortType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EFortInventoryFilter                               InContentSubType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.IsRecyclingItemWithTier
struct UFortVaultWidget_IsRecyclingItemWithTier_Params
{
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.IsRecyclingItemWithRarity
struct UFortVaultWidget_IsRecyclingItemWithRarity_Params
{
	EFortRarity                                        Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.IsRecyclingItemWithLevel
struct UFortVaultWidget_IsRecyclingItemWithLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.IsRecyclingItem
struct UFortVaultWidget_IsRecyclingItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.IsRecycling
struct UFortVaultWidget_IsRecycling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.GetTotalRecycleValue
struct UFortVaultWidget_GetTotalRecycleValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.GetItemList
struct UFortVaultWidget_GetItemList_Params
{
	TArray<class UFortAccountItem*>                    OutItemList;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVaultContentDetails                        Details;                                                  // (Parm)
};

// Function FortniteUI.FortVaultWidget.GetCachedSortType
struct UFortVaultWidget_GetCachedSortType_Params
{
	EFortInventoryFilter                               InContentSubType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryContentSortType                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget.CommitRecycle
struct UFortVaultWidget_CommitRecycle_Params
{
};

// Function FortniteUI.FortVaultWidget.AddItemToRecycling
struct UFortVaultWidget_AddItemToRecycling_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVaultWidget._BPOnContentUpdated
struct UFortVaultWidget__BPOnContentUpdated_Params
{
};

// Function FortniteUI.FortAlterationsWidget.ProcessAlterations
struct UFortAlterationsWidget_ProcessAlterations_Params
{
};

// Function FortniteUI.FortAlterationsWidget.OnGenerateAlteration
struct UFortAlterationsWidget_OnGenerateAlteration_Params
{
	struct FFortUIAlteration                           AlterationInfo;                                           // (Parm)
};

// Function FortniteUI.FortAlterationWidget.IsAlterationUnlocked
struct UFortAlterationWidget_IsAlterationUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAlterationWidget.IsAlterationHighlighted
struct UFortAlterationWidget_IsAlterationHighlighted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAlterationWidget.GetRequiredLevel
struct UFortAlterationWidget_GetRequiredLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAlterationWidget.GetAlterationDefintion
struct UFortAlterationWidget_GetAlterationDefintion_Params
{
	class UFortAlterationItemDefinition*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortAttributeList.SetPreviewData
struct UFortAttributeList_SetPreviewData_Params
{
	TArray<struct FFortDisplayAttribute>               Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortAttributeList.SetData
struct UFortAttributeList_SetData_Params
{
	TArray<struct FFortDisplayAttribute>               Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortAttributeList.ClearPreviewData
struct UFortAttributeList_ClearPreviewData_Params
{
};

// Function FortniteUI.FortAttributeList.Clear
struct UFortAttributeList_Clear_Params
{
};

// Function FortniteUI.FortItemWidget.SetOnGetItemToCompareDelegate
struct UFortItemWidget_SetOnGetItemToCompareDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortItemWidget.SetItem
struct UFortItemWidget_SetItem_Params
{
	class UFortItem*                                   InItem;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.SetCooldownMaterial
struct UFortItemWidget_SetCooldownMaterial_Params
{
	class UMaterialInstanceDynamic*                    NewCooldownMaterial;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortItemWidget.OnGetItemToCompare__DelegateSignature
struct UFortItemWidget_OnGetItemToCompare__DelegateSignature_Params
{
	class UFortItem*                                   ItemToCompare;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.OnFortItemUpdated
struct UFortItemWidget_OnFortItemUpdated_Params
{
	bool                                               bItemChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.OnFortItemDestroyed
struct UFortItemWidget_OnFortItemDestroyed_Params
{
};

// Function FortniteUI.FortItemWidget.IsSlotted
struct UFortItemWidget_IsSlotted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.IsSchematic
struct UFortItemWidget_IsSchematic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.IsItemValid
struct UFortItemWidget_IsItemValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.IsInventoryOverflowItem
struct UFortItemWidget_IsInventoryOverflowItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.IsEquipped
struct UFortItemWidget_IsEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.HasTertiaryCategory
struct UFortItemWidget_HasTertiaryCategory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.HasSecondaryCategory
struct UFortItemWidget_HasSecondaryCategory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.HasLevel
struct UFortItemWidget_HasLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.HasDurability
struct UFortItemWidget_HasDurability_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetType
struct UFortItemWidget_GetType_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetStackCount
struct UFortItemWidget_GetStackCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetRarity
struct UFortItemWidget_GetRarity_Params
{
	EFortRarity                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetLevel
struct UFortItemWidget_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetItemToCompare
struct UFortItemWidget_GetItemToCompare_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetItem
struct UFortItemWidget_GetItem_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetIconTexture
struct UFortItemWidget_GetIconTexture_Params
{
	TEnumAsByte<EFortBrushSize>                        InBrushSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetDurability
struct UFortItemWidget_GetDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.GetDisplayName
struct UFortItemWidget_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortItemWidget.GetDescription
struct UFortItemWidget_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortItemWidget.BPOnItemSet
struct UFortItemWidget_BPOnItemSet_Params
{
	class UFortItem*                                   NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.BPOnItemChanged
struct UFortItemWidget_BPOnItemChanged_Params
{
};

// Function FortniteUI.FortItemWidget.BPOnCooldownSecondsChanged
struct UFortItemWidget_BPOnCooldownSecondsChanged_Params
{
	int                                                NewCooldownSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemWidget.BPOnActivatableChanged
struct UFortItemWidget_BPOnActivatableChanged_Params
{
	bool                                               bNewActivatable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged
struct UFortBluGloCounter_OnBluGloQuantityChanged_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged
struct UFortCapturePointWidget_OnCapturePointDataChanged_Params
{
	bool                                               bActivated;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapturePercentage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECaptureState>                         CaptureState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortTeam>                             ControllingTeam;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortChatContainer.SetNativeWidgetHost
struct UFortChatContainer_SetNativeWidgetHost_Params
{
	class UNativeWidgetHost*                           InNativeWidgetHost;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortChatContainer.AttachChatWindowToNativeWidget
struct UFortChatContainer_AttachChatWindowToNativeWidget_Params
{
};

// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorValuesChanged
struct UFortItemCollectorWidget_OnItemCollectorValuesChanged_Params
{
	TArray<int>                                        DepositAmounts;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        DepositGoals;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorStateChanged
struct UFortItemCollectorWidget_OnItemCollectorStateChanged_Params
{
	EFortItemCollectorState                            ItemCollectorState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorChanged
struct UFortItemCollectorWidget_OnItemCollectorChanged_Params
{
	class ABuildingItemCollectorActor*                 OutItemCollector;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.SignalSelectionCommitted
struct UFortItemGroupSlotPicker_SignalSelectionCommitted_Params
{
	class UFortItem*                                   SelectedItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.SetSelection
struct UFortItemGroupSlotPicker_SetSelection_Params
{
	class UFortItem*                                   SelectedItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortItemGroupSlotPicker.OnItemPickerSelectionChanged__DelegateSignature
struct UFortItemGroupSlotPicker_OnItemPickerSelectionChanged__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.HandleItemSetInternal
struct UFortItemGroupSlotPicker_HandleItemSetInternal_Params
{
	class UFortItemGroupSlotWidget*                    ItemGroupSlotWidget;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.HandleItemSet
struct UFortItemGroupSlotPicker_HandleItemSet_Params
{
};

// Function FortniteUI.FortItemGroupSlotPicker.GetSquadId
struct UFortItemGroupSlotPicker_GetSquadId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.GetSlotIndexInGroup
struct UFortItemGroupSlotPicker_GetSlotIndexInGroup_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.GetItemSlottingRestrictionReasonText
struct UFortItemGroupSlotPicker_GetItemSlottingRestrictionReasonText_Params
{
	ESquadSlotItemRestrictionReason                    Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortItemGroupSlotPicker.GetCurrentlySlottedItem
struct UFortItemGroupSlotPicker_GetCurrentlySlottedItem_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.GetCompatibleCandidateItems
struct UFortItemGroupSlotPicker_GetCompatibleCandidateItems_Params
{
	TArray<class UFortItem*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FortniteUI.FortItemGroupSlotPicker.GetCandidateItemSlottingRestrictions
struct UFortItemGroupSlotPicker_GetCandidateItemSlottingRestrictions_Params
{
	class UFortItem*                                   CandidateItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<ESquadSlotItemRestrictionReason>            OutRestrictions;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortItemGroupSlotPicker.GetCandidateFitnessValueForSlot
struct UFortItemGroupSlotPicker_GetCandidateFitnessValueForSlot_Params
{
	class UFortItem*                                   Candidate;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.EndUpgradePreview
struct UFortItemGroupSlotPicker_EndUpgradePreview_Params
{
};

// Function FortniteUI.FortItemGroupSlotPicker.DetectCandidateSynergiesAndMatches
struct UFortItemGroupSlotPicker_DetectCandidateSynergiesAndMatches_Params
{
	class UFortItem*                                   Candidate;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHasSquadManagerSynergy;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHasPersonalitySynergy;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHasSetBonusMatch;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.CreateSlottedItemDetailsWidget
struct UFortItemGroupSlotPicker_CreateSlottedItemDetailsWidget_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotPicker.BeginUpgradePreview
struct UFortItemGroupSlotPicker_BeginUpgradePreview_Params
{
};

// Function FortniteUI.FortItemGroupSlotWidget.TryGetSquadSlot
struct UFortItemGroupSlotWidget_TryGetSquadSlot_Params
{
	struct FHomebaseSquadSlot                          OutSquadSlot;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.TryGetSquad
struct UFortItemGroupSlotWidget_TryGetSquad_Params
{
	struct FHomebaseSquad                              OutSquad;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.SetSlottingPreviewItem
struct UFortItemGroupSlotWidget_SetSlottingPreviewItem_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.SetItem
struct UFortItemGroupSlotWidget_SetItem_Params
{
	class UFortItem*                                   ItemToSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortItemGroupSlotWidget.OnItemSlotLockedStateChanged__DelegateSignature
struct UFortItemGroupSlotWidget_OnItemSlotLockedStateChanged__DelegateSignature_Params
{
	class UFortItemGroupSlotWidget*                    ItemSlotWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortItemGroupSlotWidget.OnItemSet__DelegateSignature
struct UFortItemGroupSlotWidget_OnItemSet__DelegateSignature_Params
{
	class UFortItemGroupSlotWidget*                    ItemSlotWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortItemGroupSlotWidget.OnAttributeBonusValueChanged__DelegateSignature
struct UFortItemGroupSlotWidget_OnAttributeBonusValueChanged__DelegateSignature_Params
{
	class UFortItemGroupSlotWidget*                    ItemSlotWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.IsManagerSlot
struct UFortItemGroupSlotWidget_IsManagerSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.IsItemCompatible
struct UFortItemGroupSlotWidget_IsItemCompatible_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.InitializeSlot
struct UFortItemGroupSlotWidget_InitializeSlot_Params
{
	class UFortItemGroupWidget*                        HostItemGroupWidget;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SlotIndexInGroup;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.HandleTraitStateChanged
struct UFortItemGroupSlotWidget_HandleTraitStateChanged_Params
{
	bool                                               SetBonusMatchStateChanged;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.HandlePreviewStateChanged
struct UFortItemGroupSlotWidget_HandlePreviewStateChanged_Params
{
	bool                                               IsSquadSlotAffectedByPreview;                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBeingReplacedOrRelocated;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WouldHavePersonalitySynergy;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WouldHaveSetBonusMatch;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayAttribute, float>             PreviewAttributeBonusValues;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.FortItemGroupSlotWidget.HandleLockedStateChanged
struct UFortItemGroupSlotWidget_HandleLockedStateChanged_Params
{
};

// Function FortniteUI.FortItemGroupSlotWidget.HandleItemSet
struct UFortItemGroupSlotWidget_HandleItemSet_Params
{
};

// Function FortniteUI.FortItemGroupSlotWidget.HandleItemPickerSelectionCommittedInternal
struct UFortItemGroupSlotWidget_HandleItemPickerSelectionCommittedInternal_Params
{
	class UFortItem*                                   SelectedItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.HandleItemPickerSelectionCommitted
struct UFortItemGroupSlotWidget_HandleItemPickerSelectionCommitted_Params
{
};

// Function FortniteUI.FortItemGroupSlotWidget.HandleAttributeBonusValueChanged
struct UFortItemGroupSlotWidget_HandleAttributeBonusValueChanged_Params
{
};

// Function FortniteUI.FortItemGroupSlotWidget.GetSquadId
struct UFortItemGroupSlotWidget_GetSquadId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.CreatePickerWidget
struct UFortItemGroupSlotWidget_CreatePickerWidget_Params
{
	class UFortItemGroupSlotPicker*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupSlotWidget.CancelSlottingPreview
struct UFortItemGroupSlotWidget_CancelSlottingPreview_Params
{
};

// Function FortniteUI.FortItemGroupWidget.TryGetSquad
struct UFortItemGroupWidget_TryGetSquad_Params
{
	struct FHomebaseSquad                              OutSquad;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupWidget.SetSquad
struct UFortItemGroupWidget_SetSquad_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupWidget.HandleItemSlotAdded
struct UFortItemGroupWidget_HandleItemSlotAdded_Params
{
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItemGroupSlotWidget*                    ItemSlotWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupWidget.HandleEffectsChanged
struct UFortItemGroupWidget_HandleEffectsChanged_Params
{
};

// Function FortniteUI.FortItemGroupWidget.HandleDifferentSquadSet
struct UFortItemGroupWidget_HandleDifferentSquadSet_Params
{
};

// Function FortniteUI.FortItemGroupWidget.GetTotalAttributeBonuses
struct UFortItemGroupWidget_GetTotalAttributeBonuses_Params
{
	TArray<struct FFortAttributeModifierDisplayData>   OutModifiers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortItemGroupWidget.GetSquadId
struct UFortItemGroupWidget_GetSquadId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortItemGroupWidget.GetActiveSetBonusTags
struct UFortItemGroupWidget_GetActiveSetBonusTags_Params
{
	TArray<struct FGameplayTag>                        OutActiveSetBonusTags;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortListItem.ToggleExpansion
struct UFortListItem_ToggleExpansion_Params
{
};

// Function FortniteUI.FortListItem.SetSelected
struct UFortListItem_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortListItem.SetIndexInList
struct UFortListItem_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortListItem.SetData
struct UFortListItem_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked
struct UFortListItem_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function FortniteUI.FortListItem.IsItemExpanded
struct UFortListItem_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListItem.GetSelectionMode
struct UFortListItem_GetSelectionMode_Params
{
	TEnumAsByte<ESelectionMode>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListItem.GetIndentLevel
struct UFortListItem_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortListItem.DoesItemHaveChildren
struct UFortListItem_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMovieWidget.SetMediaSource
struct UFortMovieWidget_SetMediaSource_Params
{
	class UMediaSource*                                InMediaSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaSoundWave*                             InMediaSoundWave;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMovieWidget.RequestStopMovie
struct UFortMovieWidget_RequestStopMovie_Params
{
};

// Function FortniteUI.FortMovieWidget.RequestPlayMovie
struct UFortMovieWidget_RequestPlayMovie_Params
{
	bool                                               bShouldRewind;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMovieWidget.MediaDimensionsUpdated
struct UFortMovieWidget_MediaDimensionsUpdated_Params
{
	float                                              NewWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortMovieWidget.HasPlayerForSource
struct UFortMovieWidget_HasPlayerForSource_Params
{
	class UMediaSource*                                InMediaSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMovieWidget.GetMediaTexture
struct UFortMovieWidget_GetMediaTexture_Params
{
	class UMediaTexture*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortMovieWidget.GetMediaPlayer
struct UFortMovieWidget_GetMediaPlayer_Params
{
	class UMediaPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.ShowPage
struct UFortNodeGraphHost_ShowPage_Params
{
	struct FName                                       NodePageId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceNodeId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DestinationNodeId;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectNode;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyPanIfNew;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.SetBackgroundMaterial
struct UFortNodeGraphHost_SetBackgroundMaterial_Params
{
	class UMaterialInstanceDynamic*                    InBackgroundMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction FortniteUI.FortNodeGraphHost.OnPageShown__DelegateSignature
struct UFortNodeGraphHost_OnPageShown__DelegateSignature_Params
{
	class UFortNodeCanvasHost*                         Page;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.IsEarlyGame
struct UFortNodeGraphHost_IsEarlyGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.GetWidgetTypeForNodePage
struct UFortNodeGraphHost_GetWidgetTypeForNodePage_Params
{
	struct FName                                       NodePageId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.GetTokensNeededForNodePage
struct UFortNodeGraphHost_GetTokensNeededForNodePage_Params
{
	class UFortNodeCanvasHost*                         Page;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UFortItemDefinition*>                 OutTokens;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function FortniteUI.FortNodeGraphHost.GetPathToNode
struct UFortNodeGraphHost_GetPathToNode_Params
{
	struct FName                                       NodePageId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Pages;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               Nodes;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.GetNodePageName
struct UFortNodeGraphHost_GetNodePageName_Params
{
	struct FName                                       NodePageId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.FortNodeGraphHost.GetInitialNodePageName
struct UFortNodeGraphHost_GetInitialNodePageName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodeGraphHost.GetInitialNodeName
struct UFortNodeGraphHost_GetInitialNodeName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortNodePrerequisitesWidget.ProcessNodePrequisites
struct UFortNodePrerequisitesWidget_ProcessNodePrequisites_Params
{
	struct FName                                       NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortNodePrerequisitesWidget.GenerateNodePrerequisiteConnector
struct UFortNodePrerequisitesWidget_GenerateNodePrerequisiteConnector_Params
{
	EFortNodePrerequisiteConnector                     Connector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortNodePrerequisitesWidget.GenerateNodePrerequisite
struct UFortNodePrerequisitesWidget_GenerateNodePrerequisite_Params
{
	struct FFortUINodePrerequisite                     NodePrerequisite;                                         // (Parm)
};

// Function FortniteUI.FortPerksWidget.ProcessPerkTiers
struct UFortPerksWidget_ProcessPerkTiers_Params
{
};

// Function FortniteUI.FortPerksWidget.OnGeneratePerkTier
struct UFortPerksWidget_OnGeneratePerkTier_Params
{
	struct FFortUIPerkTier                             FortPerkTier;                                             // (Parm)
};

// Function FortniteUI.FortPerkTierWidget.ProcessPerks
struct UFortPerkTierWidget_ProcessPerks_Params
{
};

// Function FortniteUI.FortPerkTierWidget.OnGeneratePerk
struct UFortPerkTierWidget_OnGeneratePerk_Params
{
	struct FFortUIPerk                                 Perk;                                                     // (Parm)
};

// Function FortniteUI.FortSocialItemWidget.SetSocialItem
struct UFortSocialItemWidget_SetSocialItem_Params
{
	class UFortSocialItem*                             InSocialItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.UpdateStateWidgetContent
struct UFortUIManagerWidget_UpdateStateWidgetContent_Params
{
	class UFortUIStateWidget*                          StateWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.UnregisterStateTrigger
struct UFortUIManagerWidget_UnregisterStateTrigger_Params
{
	class UFortUIStateTrigger*                         TriggerToRemove;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.ShowErrorDialog
struct UFortUIManagerWidget_ShowErrorDialog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OperationDesc;                                            // (Parm)
	struct FText                                       DisplayMessage;                                           // (Parm)
	struct FString                                     ErrorCode;                                                // (Parm, ZeroConstructor)
};

// Function FortniteUI.FortUIManagerWidget.SetStateContentDisplayed
struct UFortUIManagerWidget_SetStateContentDisplayed_Params
{
	bool                                               bDisplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.ReleaseNotification
struct UFortUIManagerWidget_ReleaseNotification_Params
{
	class UFortUINotification*                         Notification;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.RegisterStateTrigger
struct UFortUIManagerWidget_RegisterStateTrigger_Params
{
	class UFortUIStateTrigger*                         StateTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.QueueActivatablePanelIntoModalLayer
struct UFortUIManagerWidget_QueueActivatablePanelIntoModalLayer_Params
{
	class UCommonActivatablePanel*                     Panel;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.QueueActionPanelIntoModalLayer
struct UFortUIManagerWidget_QueueActionPanelIntoModalLayer_Params
{
	class UFortActionHandlerPanel*                     Panel;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.OnStateStarted
struct UFortUIManagerWidget_OnStateStarted_Params
{
};

// Function FortniteUI.FortUIManagerWidget.OnShowConfirmation_NUI
struct UFortUIManagerWidget_OnShowConfirmation_NUI_Params
{
	struct FFortDialogDescription_NUI                  Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIManagerWidget.OnShowConfirmation
struct UFortUIManagerWidget_OnShowConfirmation_Params
{
	struct FFortDialogDescription                      Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction FortniteUI.FortUIManagerWidget.OnEndSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_OnEndSpokenDialog__DelegateSignature_Params
{
};

// DelegateFunction FortniteUI.FortUIManagerWidget.OnBeginSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_OnBeginSpokenDialog__DelegateSignature_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Subtitle;                                                 // (Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.KillConfirmationDialog
struct UFortUIManagerWidget_KillConfirmationDialog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.IsStateContentDisplayed
struct UFortUIManagerWidget_IsStateContentDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.GetUIManagerWidget
struct UFortUIManagerWidget_GetUIManagerWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUIManagerWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.GetNavigationManager
struct UFortUIManagerWidget_GetNavigationManager_Params
{
	class UFortUINavigationManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.GetCurrentUIStateWidget
struct UFortUIManagerWidget_GetCurrentUIStateWidget_Params
{
	class UFortUIStateWidget*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.DisplayStateContent
struct UFortUIManagerWidget_DisplayStateContent_Params
{
	bool                                               bDisplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.DisplayErrorDialog
struct UFortUIManagerWidget_DisplayErrorDialog_Params
{
	struct FFortErrorInfo                              Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortUIManagerWidget.CreateUIStateTrigger
struct UFortUIManagerWidget_CreateUIStateTrigger_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUIStateTrigger*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget.CreateNotification
struct UFortUIManagerWidget_CreateNotification_Params
{
	class UClass*                                      UINotificationClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortUINotification*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUIManagerWidget._BPGetCurrentUIState
struct UFortUIManagerWidget__BPGetCurrentUIState_Params
{
	EFortUIState                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUserChoiceWidget.SetChoices
struct UFortUserChoiceWidget_SetChoices_Params
{
	struct FChoiceData                                 ChoiceItems;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortWorkerSetBonusIcon.SetGameplayTag
struct UFortWorkerSetBonusIcon_SetGameplayTag_Params
{
	struct FGameplayTag                                InGameplayTag;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP
struct UFortWorkerSetBonusIcon_HandleDifferentGameplayTagSetBP_Params
{
};

// Function FortniteUI.UINavigationManager.PushNavigation
struct UUINavigationManager_PushNavigation_Params
{
	struct FText                                       DisplayName;                                              // (Parm)
	class UObject*                                     ObjectData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       IdData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnNavigateTo;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnNavigateFrom;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteUI.UINavigationManager.PopNavigation
struct UUINavigationManager_PopNavigation_Params
{
};

// Function FortniteUI.UINavigationManager.NavigationToIndex
struct UUINavigationManager_NavigationToIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.UINavigationManager.GetStackSize
struct UUINavigationManager_GetStackSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.UINavigationManager.GetDisplayName
struct UUINavigationManager_GetDisplayName_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortniteUI.UINavigationManager.ClearStack
struct UUINavigationManager_ClearStack_Params
{
};

// Function FortniteUI.FortUINavigationManager.TryGetPendingNavigationOp
struct UFortUINavigationManager_TryGetPendingNavigationOp_Params
{
	struct FFortUINavigationOperation                  NavigationOp;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.SetScrollWidget
struct UFortUINavigationManager_SetScrollWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.PushSquadManagementScreen
struct UFortUINavigationManager_PushSquadManagementScreen_Params
{
	struct FName                                       SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.PushSkillTreePage
struct UFortUINavigationManager_PushSkillTreePage_Params
{
	struct FName                                       SkillTreePageId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.PushSkillTreeNode
struct UFortUINavigationManager_PushSkillTreeNode_Params
{
	struct FName                                       SkillTreeNodeId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.PushItemManagementScreen
struct UFortUINavigationManager_PushItemManagementScreen_Params
{
	EFortFrontendInventoryFilter                       ItemManagementFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.PushItemInspectionScreen
struct UFortUINavigationManager_PushItemInspectionScreen_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EFortItemInspectionMode                            Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFavoriting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTemporaryItem;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToSquadSlot
struct UFortUINavigationManager_NavigateToSquadSlot_Params
{
	struct FName                                       SquadId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToQuestObjective
struct UFortUINavigationManager_NavigateToQuestObjective_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToNodePageByGameplayTagContainer
struct UFortUINavigationManager_NavigateToNodePageByGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm)
};

// Function FortniteUI.FortUINavigationManager.NavigateToNodePage
struct UFortUINavigationManager_NavigateToNodePage_Params
{
	struct FName                                       PageId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToItemManagementScreen
struct UFortUINavigationManager_NavigateToItemManagementScreen_Params
{
	EFortFrontendInventoryFilter                       Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToItem
struct UFortUINavigationManager_NavigateToItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToFeature
struct UFortUINavigationManager_NavigateToFeature_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.NavigateToExpeditions
struct UFortUINavigationManager_NavigateToExpeditions_Params
{
};

// Function FortniteUI.FortUINavigationManager.NavigateToCollectionBook
struct UFortUINavigationManager_NavigateToCollectionBook_Params
{
};

// Function FortniteUI.FortUINavigationManager.HasPendingNavigationOp
struct UFortUINavigationManager_HasPendingNavigationOp_Params
{
	EFortUINavigationOp                                NavigationOp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.CompletePendingNavigationOp
struct UFortUINavigationManager_CompletePendingNavigationOp_Params
{
	EFortUINavigationOp                                NavigationOp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.CenterWidget
struct UFortUINavigationManager_CenterWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.CanNavigateToQuestObjective
struct UFortUINavigationManager_CanNavigateToQuestObjective_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.AttemptPlayQuest
struct UFortUINavigationManager_AttemptPlayQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUINavigationManager.AttemptMatchmakeForQuest
struct UFortUINavigationManager_AttemptMatchmakeForQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutContentNotDownloaded;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
