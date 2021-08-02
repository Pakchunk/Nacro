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

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Utc Now Offset
struct UBP_FortExpeditionExpiresWidget_C_Get_Utc_Now_Offset_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer
struct UBP_FortExpeditionExpiresWidget_C_Refresh_Expiration_Timer_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData
struct UBP_FortExpeditionExpiresWidget_C_SetData_Params
{
	class UFortExpeditionItem**                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated
struct UBP_FortExpeditionExpiresWidget_C_OnExpeditionExpirationUpdated_Params
{
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct
struct UBP_FortExpeditionExpiresWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget
struct UBP_FortExpeditionExpiresWidget_C_ExecuteUbergraph_BP_FortExpeditionExpiresWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
