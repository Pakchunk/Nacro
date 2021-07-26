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

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
struct UCollectionBookPageListWidget_C_Update_Available_Slots_Widget_Params
{
	int                                                NumAvailableSlots;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
struct UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params
{
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
struct UCollectionBookPageListWidget_C_SetupAsCategory_Params
{
	class UFortCollectionBookCategory**                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
struct UCollectionBookPageListWidget_C_SetupAsPage_Params
{
	class UFortCollectionBookPage**                    Page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
struct UCollectionBookPageListWidget_C_OnExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
struct UCollectionBookPageListWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
struct UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params
{
	int*                                               NumAvailableSlots;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState*                          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
struct UCollectionBookPageListWidget_C_OnSelectionChanged_Params
{
	class UCommonButton*                               ThisButton;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
struct UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
