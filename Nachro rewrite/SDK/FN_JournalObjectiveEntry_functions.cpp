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

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UJournalObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update");

	UJournalObjectiveEntry_C_Update_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UJournalObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress");

	UJournalObjectiveEntry_C_UpdateProgress_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject**                InData                         (Parm, ZeroConstructor, IsPlainOldData)

void UJournalObjectiveEntry_C::SetData(class UObject** InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData");

	UJournalObjectiveEntry_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalObjectiveEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.Construct");

	UJournalObjectiveEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Handle Quests Updated
// (BlueprintCallable, BlueprintEvent)

void UJournalObjectiveEntry_C::Handle_Quests_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.Handle Quests Updated");

	UJournalObjectiveEntry_C_Handle_Quests_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalObjectiveEntry_C::ExecuteUbergraph_JournalObjectiveEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry");

	UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
