#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
struct UStoreMain_Root_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat
struct UStoreMain_Root_C_AboutToEnterChat_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
struct UStoreMain_Root_C_AboutToPushDetails_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
struct UStoreMain_Root_C_IsOffersScrollBoxActive_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.SetFocus
struct UStoreMain_Root_C_SetFocus_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.AddOffer
struct UStoreMain_Root_C_AddOffer_Params
{
	class UFortMtxStoreOfferBase*                      MtxOffer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
struct UStoreMain_Root_C_NoOffersAvailable_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnActivated
struct UStoreMain_Root_C_OnActivated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
struct UStoreMain_Root_C_OnMtxOfferGenerated_Params
{
	class UFortMtxStoreOfferBase**                     MtxOffer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
struct UStoreMain_Root_C_OnOffersGenerated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
struct UStoreMain_Root_C_OnStartReadingOffers_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
struct UStoreMain_Root_C_OnDeactivated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Destruct
struct UStoreMain_Root_C_Destruct_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Construct
struct UStoreMain_Root_C_Construct_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
struct UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
