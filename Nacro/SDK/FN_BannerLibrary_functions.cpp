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

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseIconMask                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        UniqueId                       (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBannerLibrary_C::STATIC_UpdateBannerMeshMaterialForUniqueId_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, const struct FUniqueNetIdRepl& UniqueId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New");

	UBannerLibrary_C_UpdateBannerMeshMaterialForUniqueId_New_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.UseIconMask = UseIconMask;
	params.UniqueId = UniqueId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BannerIconId                   (Parm, ZeroConstructor)
// struct FString                 BannerColorId                  (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PrimaryColor                   (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            Secondary_Color                (Parm, OutParm, IsPlainOldData)

void UBannerLibrary_C::STATIC_Get_Icon_Texture_and_Colors(const struct FString& BannerIconId, const struct FString& BannerColorId, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* PrimaryColor, struct FLinearColor* Secondary_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors");

	UBannerLibrary_C_Get_Icon_Texture_and_Colors_Params params;
	params.BannerIconId = BannerIconId;
	params.BannerColorId = BannerColorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (PrimaryColor != nullptr)
		*PrimaryColor = params.PrimaryColor;
	if (Secondary_Color != nullptr)
		*Secondary_Color = params.Secondary_Color;
}


// Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Banner_material                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortHomeBaseInfo       Image_info                     (Parm)
// bool                           Is_Icon                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBannerLibrary_C::STATIC_UpdateMaterial_New(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New");

	UBannerLibrary_C_UpdateMaterial_New_Params params;
	params.Banner_material = Banner_material;
	params.Image_info = Image_info;
	params.Is_Icon = Is_Icon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseIconMask                    (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerState*        InstigatorPlayerState          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBannerLibrary_C::STATIC_UpdateBannerMeshMaterial_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New");

	UBannerLibrary_C_UpdateBannerMeshMaterial_New_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.UseIconMask = UseIconMask;
	params.InstigatorPlayerState = InstigatorPlayerState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBannerLibrary_C::STATIC_UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic* Material, class UTexture* Icon, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial");

	UBannerLibrary_C_UpdateBannerIconOnMaterial_Params params;
	params.Material = Material;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PrimaryBGColor                 (Parm, IsPlainOldData)
// struct FLinearColor            SecondaryBGColor               (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBannerLibrary_C::STATIC_UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic* Material, const struct FLinearColor& PrimaryBGColor, const struct FLinearColor& SecondaryBGColor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial");

	UBannerLibrary_C_UpdateBannerColorOnMaterial_Params params;
	params.Material = Material;
	params.PrimaryBGColor = PrimaryBGColor;
	params.SecondaryBGColor = SecondaryBGColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                BannerIcon                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BG_PrimaryColor                (Parm, IsPlainOldData)
// struct FLinearColor            BG_SecondaryColor              (Parm, IsPlainOldData)
// class UTexture*                ShapeIcon                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBannerLibrary_C::STATIC_GenericUpdateMaterial(class UMaterialInstanceDynamic* Target, class UTexture* BannerIcon, const struct FLinearColor& BG_PrimaryColor, const struct FLinearColor& BG_SecondaryColor, class UTexture* ShapeIcon, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial");

	UBannerLibrary_C_GenericUpdateMaterial_Params params;
	params.Target = Target;
	params.BannerIcon = BannerIcon;
	params.BG_PrimaryColor = BG_PrimaryColor;
	params.BG_SecondaryColor = BG_SecondaryColor;
	params.ShapeIcon = ShapeIcon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
