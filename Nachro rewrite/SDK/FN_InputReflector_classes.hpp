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

// WidgetBlueprintGeneratedClass InputReflector.InputReflector_C
// 0x0020 (0x0280 - 0x0260)
class UInputReflector_C : public UCommonInputReflector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              ButtonBox;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMargin                                     DefaultButtonMargin;                                      // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputReflector.InputReflector_C");
		return ptr;
	}


	void OnButtonAdded(class UCommonButton** AddedButton, struct FCommonInputActionHandlerData* Data);
	void ClearButtons();
	void Construct();
	void ExecuteUbergraph_InputReflector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
