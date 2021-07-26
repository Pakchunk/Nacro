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

// Function ConversationUtil.ConversationUtil_C.StartConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*       Conversation                   (Parm, ZeroConstructor, IsPlainOldData)

void UConversationUtil_C::StartConversation(class UFortConversation* Conversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationUtil.ConversationUtil_C.StartConversation");

	UConversationUtil_C_StartConversation_Params params;
	params.Conversation = Conversation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
