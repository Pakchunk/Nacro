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

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.Focus
struct UAthenaSeasonDirectAcquisitionScreen_C_Focus_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.GenerateOfferWidget
struct UAthenaSeasonDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
	struct FName*                                      StorefrontName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCatalogOffer*                              Offer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortMtxOfferData**                          DisplayAsset;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFortDirectAcquisitionOfferWidgetBase*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.NoOffersAvailable
struct UAthenaSeasonDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnStartReadingOffers
struct UAthenaSeasonDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnOffersGenerated
struct UAthenaSeasonDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnActivated
struct UAthenaSeasonDirectAcquisitionScreen_C_OnActivated_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen
struct UAthenaSeasonDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
