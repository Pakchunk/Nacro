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

// BlueprintGeneratedClass LF_3x3_Parent.LF_3x3_Parent_C
// 0x0024 (0x10A4 - 0x1080)
class ALF_3x3_Parent_C : public ABuildingFoundation3x3
{
public:
	class UTextRenderComponent*                        RenderTextComponent;                                      // 0x1080(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       EditorDisplayNameText;                                    // 0x1088(0x0018) (Edit, BlueprintVisible)
	float                                              TextSize;                                                 // 0x10A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LF_3x3_Parent.LF_3x3_Parent_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
