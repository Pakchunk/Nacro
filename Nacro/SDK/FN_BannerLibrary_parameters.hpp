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

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New
struct UBannerLibrary_C_UpdateBannerMeshMaterialForUniqueId_New_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseIconMask;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors
struct UBannerLibrary_C_Get_Icon_Texture_and_Colors_Params
{
	struct FString                                     BannerIconId;                                             // (Parm, ZeroConstructor)
	struct FString                                     BannerColorId;                                            // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryColor;                                             // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                Secondary_Color;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New
struct UBannerLibrary_C_UpdateMaterial_New_Params
{
	class UImage*                                      Banner_material;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortHomeBaseInfo                           Image_info;                                               // (Parm)
	bool                                               Is_Icon;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New
struct UBannerLibrary_C_UpdateBannerMeshMaterial_New_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseIconMask;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerState*                            InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
struct UBannerLibrary_C_UpdateBannerIconOnMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
struct UBannerLibrary_C_UpdateBannerColorOnMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryBGColor;                                           // (Parm, IsPlainOldData)
	struct FLinearColor                                SecondaryBGColor;                                         // (Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
struct UBannerLibrary_C_GenericUpdateMaterial_Params
{
	class UMaterialInstanceDynamic*                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BannerIcon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BG_PrimaryColor;                                          // (Parm, IsPlainOldData)
	struct FLinearColor                                BG_SecondaryColor;                                        // (Parm, IsPlainOldData)
	class UTexture*                                    ShapeIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
