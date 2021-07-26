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

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
struct UCollectionBookSectionPanel_C_OnInspectItem_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowItemModifications;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTemporaryItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
struct UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params
{
	class UFortItem*                                   ItemToSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
struct UCollectionBookSectionPanel_C_ShowItemDetail_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
struct UCollectionBookSectionPanel_C_Construct_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
struct UCollectionBookSectionPanel_C_OnSectionChanged_Params
{
	class UFortCollectionBookSection**                 Section;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
struct UCollectionBookSectionPanel_C_OnActivated_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
struct UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
