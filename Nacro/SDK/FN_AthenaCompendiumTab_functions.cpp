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

// Function AthenaCompendiumTab.AthenaCompendiumTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCompendiumTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompendiumTab.AthenaCompendiumTab_C.Construct");

	UAthenaCompendiumTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaCompendiumTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompendiumTab.AthenaCompendiumTab_C.OnActivated");

	UAthenaCompendiumTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCompendiumTab_C::BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	UAthenaCompendiumTab_C_BndEvt__IconTextButton_22_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompendiumTab.AthenaCompendiumTab_C.ExecuteUbergraph_AthenaCompendiumTab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCompendiumTab_C::ExecuteUbergraph_AthenaCompendiumTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompendiumTab.AthenaCompendiumTab_C.ExecuteUbergraph_AthenaCompendiumTab");

	UAthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
