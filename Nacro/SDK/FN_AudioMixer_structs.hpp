#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SoundEffectLowPassFilterSettings
// 0x0008
struct FSoundEffectLowPassFilterSettings
{
	float                                              CutoffFrequency;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Q;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0008
struct FSubmixEffectReverbSettings
{
	class UReverbEffect*                               ReverbEffect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0001
struct FSubmixEffectSubmixEQSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectTestSettings
// 0x0004
struct FSubmixEffectTestSettings
{
	float                                              TestVolume;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
