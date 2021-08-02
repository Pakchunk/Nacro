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

// Function JournalObjectiveProgressWidget.JournalObjectiveProgressWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Required                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Achieved                       (Parm, ZeroConstructor, IsPlainOldData)

void UJournalObjectiveProgressWidget_C::Update(int Required, int Achieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalObjectiveProgressWidget.JournalObjectiveProgressWidget_C.Update");

	UJournalObjectiveProgressWidget_C_Update_Params params;
	params.Required = Required;
	params.Achieved = Achieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
