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

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TargetQuestFound               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TargetQuestPageIndex           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProtoCampaignMapPage_C::CheckForIncompleteQuest_Halloween_Event(bool* TargetQuestFound, int* TargetQuestPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event");

	UProtoCampaignMapPage_C_CheckForIncompleteQuest_Halloween_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = params.TargetQuestFound;
	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = params.TargetQuestPageIndex;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)

void UProtoCampaignMapPage_C::SetBackgroundImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage");

	UProtoCampaignMapPage_C_SetBackgroundImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TargetQuestFound               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TargetQuestPageIndex           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProtoCampaignMapPage_C::CheckForMainQuest(bool* TargetQuestFound, int* TargetQuestPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest");

	UProtoCampaignMapPage_C_CheckForMainQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = params.TargetQuestFound;
	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = params.TargetQuestPageIndex;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          outCurentMainQuest             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProtoCampaignMapPage_C::GetMainQuest(class UFortQuestItem** outCurentMainQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest");

	UProtoCampaignMapPage_C_GetMainQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCurentMainQuest != nullptr)
		*outCurentMainQuest = params.outCurentMainQuest;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UProtoCampaignMapPage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct");

	UProtoCampaignMapPage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProtoCampaignMapPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct");

	UProtoCampaignMapPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UProtoCampaignMapPage_C::ExecuteUbergraph_ProtoCampaignMapPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage");

	UProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
