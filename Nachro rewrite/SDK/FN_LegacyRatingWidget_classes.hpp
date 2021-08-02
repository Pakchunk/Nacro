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

// WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C
// 0x15C1 (0x1E29 - 0x0868)
class ULegacyRatingWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     Border_Base;                                              // 0x0870(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0878(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortNumericTextBlock*                       NumericText_RatingValue;                                  // 0x0880(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox;                                                  // 0x0888(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                RatingValue;                                              // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0898(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InterpDuration;                                           // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Silhouette;                                        // 0x08B8(0x0360) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Chamfer;                                           // 0x0C18(0x0360) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Shadow;                                            // 0x0F78(0x0360) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Icon;                                              // 0x12D8(0x0360) (Edit, BlueprintVisible)
	bool                                               OverrideDefaultColor;                                     // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1639(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Light;                                              // 0x163C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Medium;                                             // 0x164C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Dark;                                               // 0x165C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Light;                                      // 0x166C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Medium;                                     // 0x167C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Dark;                                       // 0x168C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x169C(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Icon_Alt;                                          // 0x16A0(0x0360) (Edit, BlueprintVisible)
	bool                                               UseAlternateIcon;                                         // 0x1A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1A01(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Shadow_Alt;                                        // 0x1A08(0x0360) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin_Alt;                                              // 0x1D68(0x0060) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin;                                                  // 0x1DC8(0x0060) (Edit, BlueprintVisible)
	bool                                               ShowTeamPowerRating;                                      // 0x1E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C");
		return ptr;
	}


	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush);
	void Update_Base_Material();
	void Update_From_Unique_ID();
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Set_Padding();
	void Set_Size_Box();
	void Update_Rating_Value(int Rating);
	void PreConstruct(bool* IsDesignTime);
	void PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_LegacyRatingWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
