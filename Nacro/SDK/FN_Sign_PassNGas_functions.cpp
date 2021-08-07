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

// Function Sign_PassNGas.Sign_PassNGas_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASign_PassNGas_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_PassNGas.Sign_PassNGas_C.UserConstructionScript");

	ASign_PassNGas_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
