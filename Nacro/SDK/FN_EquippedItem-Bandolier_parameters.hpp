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

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity
struct UEquippedItem_Bandolier_C_UpdateCapacity_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAmmoItemDefinition*                     AmmoData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent
struct UEquippedItem_Bandolier_C_UpdateCurrent_Params
{
	int                                                Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAmmoItemDefinition*                     AmmoData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
