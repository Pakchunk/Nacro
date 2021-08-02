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

// Class UACCommon.UACNetComponent
// 0x0090 (0x0180 - 0x00F0)
class UUACNetComponent : public UActorComponent
{
public:
	int                                                PlayerID;                                                 // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C];                                      // 0x00F4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UACCommon.UACNetComponent");
		return ptr;
	}


	void SendPacketToServer(EUACPacketType Type, TArray<unsigned char> Packet);
	void SendPacketToClient(EUACPacketType Type, TArray<unsigned char> Packet);
	void SendClientHello();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
