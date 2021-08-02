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

// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile
struct UPlayerBanner_C_SetBannerIconAndColorFromProfile_Params
{
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor
struct UPlayerBanner_C_SetBannerIconAndColor_Params
{
	struct FName                                       IconId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.ToggleBannerMask
struct UPlayerBanner_C_ToggleBannerMask_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.RefreshSurround
struct UPlayerBanner_C_RefreshSurround_Params
{
};

// Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded
struct UPlayerBanner_C_OnSurroundIconLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.EnableSurround
struct UPlayerBanner_C_EnableSurround_Params
{
};

// Function PlayerBanner.PlayerBanner_C.ClearBannerState
struct UPlayerBanner_C_ClearBannerState_Params
{
};

// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
struct UPlayerBanner_C_OnBannerIconLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.GetBannerMID
struct UPlayerBanner_C_GetBannerMID_Params
{
	class UMaterialInstanceDynamic*                    BannerMID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
struct UPlayerBanner_C_SetBannerOwner_Params
{
	struct FUniqueNetIdRepl                            OwnerId;                                                  // (Parm)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
struct UPlayerBanner_C_SetBannerColorId_Params
{
	struct FName                                       InBannerColorId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
struct UPlayerBanner_C_SetBannerIconId_Params
{
	struct FName                                       InBannerIconId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerImage
struct UPlayerBanner_C_SetBannerImage_Params
{
	struct FFortHomeBaseInfo                           Image_info;                                               // (Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
struct UPlayerBanner_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (Parm)
};

// Function PlayerBanner.PlayerBanner_C.PreConstruct
struct UPlayerBanner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.Account Info Changed
struct UPlayerBanner_C_Account_Info_Changed_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (Parm)
};

// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
struct UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
