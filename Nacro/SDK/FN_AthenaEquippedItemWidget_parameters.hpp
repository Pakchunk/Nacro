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

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
struct UAthenaEquippedItemWidget_C_GetCurrentAmmoText_Params
{
	int                                                CurrentAmmoCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrentAmmoText;                                          // (Parm, OutParm)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateResourceCount
struct UAthenaEquippedItemWidget_C_UpdateResourceCount_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateCurrentAmmo
struct UAthenaEquippedItemWidget_C_UpdateCurrentAmmo_Params
{
	int                                                LocalCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LocalRemaining;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateAmmoCapacity
struct UAthenaEquippedItemWidget_C_UpdateAmmoCapacity_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
struct UAthenaEquippedItemWidget_C_UpdateWidgetColor_Params
{
	bool                                               HasAmmo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateVisibility
struct UAthenaEquippedItemWidget_C_UpdateVisibility_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateResourceDisplay
struct UAthenaEquippedItemWidget_C_FullUpdateResourceDisplay_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateAmmoDisplay
struct UAthenaEquippedItemWidget_C_FullUpdateAmmoDisplay_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.Construct
struct UAthenaEquippedItemWidget_C_Construct_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWeaponEquipped
struct UAthenaEquippedItemWidget_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnLocalAmmoChanged
struct UAthenaEquippedItemWidget_C_OnLocalAmmoChanged_Params
{
	int                                                LocalCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LocalRemaining;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWorldItemsChanged
struct UAthenaEquippedItemWidget_C_OnWorldItemsChanged_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnBuildingMaterialCycled
struct UAthenaEquippedItemWidget_C_OnBuildingMaterialCycled_Params
{
};

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
struct UAthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
