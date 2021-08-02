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

// Function ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchConfirmationDialogContent_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C.PreConstruct");

	UItemManagementMulchConfirmationDialogContent_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementMulchConfirmationDialogContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C.Construct");

	UItemManagementMulchConfirmationDialogContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C.ExecuteUbergraph_ItemManagementMulchConfirmationDialogContent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchConfirmationDialogContent_C::ExecuteUbergraph_ItemManagementMulchConfirmationDialogContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchConfirmationDialogContent.ItemManagementMulchConfirmationDialogContent_C.ExecuteUbergraph_ItemManagementMulchConfirmationDialogContent");

	UItemManagementMulchConfirmationDialogContent_C_ExecuteUbergraph_ItemManagementMulchConfirmationDialogContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
