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

// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C
// 0x13A00 (0x13EA0 - 0x04A0)
class UFortnite_M_Avg_Player_AnimBlueprint_C : public UFortPlayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_90346CA949B10612E2517A98EABCA3F2;// 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6AE6BE5E4245D9BDD885E88DC11CFDE2;      // 0x04F0(0x0060)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_167235F84D5A17FC342E738C239E417E; // 0x0550(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_80EBD977446C9F5DE2B4EF911D08E2DB; // 0x0610(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_43F5C77D4E5801A4749197924FC84777; // 0x06D0(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_610F7B56472AA73B1B2D9281CAFE23DF; // 0x0790(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0835E37E4BE8CE8DD6C449A998E91383;// 0x0850(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C2FBA628431D909430E0B383682A0D68;      // 0x0930(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_8B17DAC94A8C00B10BE1CCB9FAFE89F2;// 0x0990(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_DF9058564507FBE1DAB7BAADDC8AC490;// 0x09F0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CCBF1E684B4742313BC6CD97062B3F3D;      // 0x0A50(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9F47DEB24F88BB6E2748CF9F93B4F77F;// 0x0AB0(0x00A8)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting_569D26DB417B57D435C3B3A6D2DB399A;// 0x0B58(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8710578D463AC2BF4F3C07AE03589C71;// 0x0C20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5888D3134AB39EF4BD6090A4D05A70CF;// 0x0CA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95E036394DE666520B2AACBE0C718C03;// 0x0D20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3060AB66495C8EAFA16F58AA91F51F19;// 0x0DA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1165D6C4A871CC96410B290F01FBD2B;// 0x0E20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_681E0A16460C257859E5AB895D56228D;// 0x0EA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FA3E534495CA9B86BD99A9071F22DB9;// 0x0F20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E2C9C0E4ADF54A3ED1F919DE34BB9AC;// 0x0FA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DDCD265434507DF1AA5A8BD53C8AE7E;// 0x1020(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_256C97FA4C27CB607C92FBB69B5FEDF2;// 0x10A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FAA52849477C30977AFB7DB9E5275768;// 0x1120(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_449BCB1B4A64AD9E220303B23CC74303;// 0x11A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2750229644464C6F7C581AA2B9423D74;// 0x1220(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46D842DB49348C10D0F4F38355AA0466;// 0x12A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4101CA2462FB9BFCA501D96A6DC0BDE;// 0x1320(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3ECF0DA04507F3C5C57D2D9155D8C227;// 0x13A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D55263A2479588C54F6A00B89A5ECC43;// 0x1420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C79F6C242177C80AEAF8ABF61202931;// 0x14A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E192D7AE435680834D42C2AA75C45085;// 0x1520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03A99EBE40BEF26D9F77C8B679A9DA44;// 0x15A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F518F3A94919DD74AE359F9223CAE232;// 0x1620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF6808CB43DA4D499C3A5DBF1A56C72A;// 0x16A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DD1082C47DCB632833861A44B3C3CB9;// 0x1720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9A8FAB6471BE9BB2065CCAD68BFD3A1;// 0x17A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E92FCC3432E76BDF5831D8B53E076DF;// 0x1820(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88376B1A43DE50367A9423853E95FF43;// 0x18A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F232AE44B753ADBFC61EAA81A7D7C8F;// 0x1920(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B9D981343EA9D6D2C2280B5AB2D2DAA;// 0x19A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A96404DD4595F93776716891BF27A200;// 0x1A20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EADCF76B4D232554DB3D5F9B71BAC602;// 0x1A90(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_637D5442401F7FD915B2788C8AB07089;// 0x1AD8(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1F1181E448AF72430D786EBA9BC8F5DD;// 0x1BF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_148FC92F47404EAD21AE11A2FECFF0AA;// 0x1C40(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90C6C18A4F88FE9424AA608E78516DD4;// 0x1CB0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_30F71A9B457333D3356180987B6F7D83;// 0x1CF8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3DDB56EC47487B8992B996901178EA50;// 0x1E18(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_42A5AD444EF3EC70246A54A06875631A;// 0x1EE8(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F901E09D4572A7C5A5BE198C4CCF527B;// 0x2008(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_745166924DBB00CF723A04A9D23D933F;// 0x2050(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E014B51F49E9E63DAD04A1ABAF088292;// 0x2120(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E967E7D741CB880BA2620792FBD8392B;// 0x2190(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05828D4E485BE4670A14948BCC157652;// 0x2200(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B40D4CE2490AD1F818936BBAEAC9CA0D;// 0x2270(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A443E43D4A29CB106A42DE8A8773992E;// 0x22E0(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D2164CF24023D4FD70E14FA8D1739C57;// 0x2350(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF94105E405A504CB0B0CCB0BC71EDFD;// 0x2470(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2AA23433414FA0D117EE8EB89A89CDC7;// 0x2540(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B77D20AA4ED95BE56FA5DAAADD63AC57;// 0x2620(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8AFB5C4546797B6FE515AE905D7AF117;// 0x2668(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0FC0CA244C7C9C623B8D96A6264B12BA;// 0x2740(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A2474522405FE241EF3324BE8C11AF63;// 0x27B8(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F1914AD4DF51C3D988E7691BBB82374;// 0x28D8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4BCF1C554952F96DBD83AAB32730DD40;// 0x2948(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF5B83E04E9632A5B57514A8178C8705;// 0x29B8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6255ABD4C398FD996980EB73282A8E6;// 0x2A28(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E443848A40E6F114200667BD3722E2CB;// 0x2A98(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6FF6E46D4062C39B5245ABB75972B06E;// 0x2B08(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6DB04CA24A6562C94F4F56B5072E27EB;// 0x2BE8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5BEC68A40F7EACF95E7A1A7F24C01D0;// 0x2CC8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_AB14150141F1A71D05864A80ADF61F70;// 0x2D38(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF9F2500494F22DE18C7FF8BCF3C1B59;// 0x2E18(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_717D9A5D4FBDC97DDD17818DFC9C4D4F;// 0x2E88(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8E2FB874D5087726757B685CB4F8A5F;// 0x2EF8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07643FFA4673AC5376030BB7A4108590;// 0x2F68(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E92FEAA340174177D8D9929649657B62;// 0x2FD8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D747E13544D5A741284710AAFCDC84EA;// 0x30A8(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5583B38549A46244A7027DA303869FFE;// 0x31C8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_90DB6B59470599ED03831BBAFAD9211F;// 0x32A8(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A90571E64646C14279F09D84118087C8;// 0x33C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_03AE536A48B2CA2303B7F68E2A1B6FBA;// 0x3410(0x00D8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_407374F144F79E0427B86E97B578AE08;// 0x34E8(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_616CB49F4A1E8D1C65D7C79CE28549EC;// 0x3608(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_11C0E9844B2BBB05D46047B7B3F787B8;// 0x36E8(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E7B7FE924C9B9CC3279F11B1A0ADF540;// 0x3760(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D164345F4E8D34624EF9FCBF9A699559;// 0x3880(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_056271AE4144640EEE96D1B2EAC09443;// 0x38C8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CF345E842E756B4BA88D19626569360;// 0x39E8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4DA5ADB2424FAC8867FB4FAC19C7C1AD;// 0x3AB8(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BA8DD7CE42B55C8F384D209A4BB110DC;// 0x3BD8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EE46F62645F23F9282A973A588B34AC0;// 0x3C20(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C00BFF444C5D6CCC595A9EB0052AF74C;// 0x3D40(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C8DAF3A474D389236A074AA828E108C;// 0x3E10(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_09AB34B34F9A782A9CB484ACFFFA5B2D;// 0x3F30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1FB4F074BB4541FC781B685940BFB6D;// 0x3F78(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91EE493C4141FC70DBD98AA5C99881E9;// 0x3FE8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D3A7DBAC4DADAF0FE4831F8ADACCF68E;// 0x4030(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F2AFD9C45DBA8AB3431459E59177056;// 0x4100(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7261F0AA4B2BF566CFE78CA790DDCD0D;// 0x4170(0x0070)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_8DE9A0DC4FBEF5490219FAA4EACD925B;// 0x41E0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0EFBB5D041262FB97BB376B5FE628FA3;// 0x4240(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x4288(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45CDB0844A1C154B04A60596900577A6;// 0x4290(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD8EA8F34B11E4C0D4585D8D21CD4791;// 0x4310(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F5AB533C4B2102203A22048CEFFCDD94;// 0x4390(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_682CAB9F446087098485AB97B65065A6;// 0x4410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C616F9A461ED59C501E2BBE002C2C1B;// 0x4490(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_504D7E3E477DEEE78E94ACB05F2F0E42;// 0x4510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6D3BED04D7641E786238592A285E6FA;// 0x4590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E739EA94A3EB6D263CF4F9D8A63BCCB;// 0x4610(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61747DAD4C63F902909E4889E05CC1A7;// 0x4690(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74F669814C9BE2D4B179779FF0DEA1C2;// 0x4710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BAD1F657444483494234F0B9A5890EBF;// 0x4790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F9D13DA473BB190969A46B10EA3C83F;// 0x4810(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56AEB2CE49605B5F061E9784765259C3;// 0x4890(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C468F912436B0623C90DF386696E3A71;// 0x4910(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E86D230478D65DAEB8445818B7B8CFF;// 0x4990(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B9061B2D45D91987D923BC810446D60F;// 0x4A10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C123981043E5D6DF76E6CFB301351418;// 0x4A90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1793503F4ED56AA2EC8268808AC3A8B3;// 0x4B10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B970985B47A107603746EFA2C0EE72F5;// 0x4B90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_556770954245EDA5505E6AA8EF753F46;// 0x4C10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC2CFB334ED944264EDFED80C142F56D;// 0x4C90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97E4CFD547CE169D041A3D857E452304;// 0x4D10(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3597D57041383D20A9ED2DA65FA1B76B;// 0x4D90(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74E28FA24FAB177275BC3DB513C06596;// 0x4E00(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_059CFFA342BB002B1620FC94039220D6;// 0x4E70(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B32BEAC4E62C216A8B778BD2C837F48;// 0x4F50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_702E173842C90F7DE7A1AD877B7ABD8C;// 0x4FC0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_86551A19466526607996BE9808EC39FF;// 0x5008(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5FBCA6834270F9A45479D483D2BC3085;// 0x5128(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_64292996433A4F04DF938289022C0BD2;// 0x51F8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1845F51F4429252B914802ACFD08C59D;// 0x5318(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_779CCC4F465A0BE751770EB69DF9240A;// 0x53E8(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FEA20B8F4088BF3CCAA1B4B32B0E791F;// 0x5508(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2A2225D44DEF157E378A690AD4A27FC2;// 0x55B8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55FE11D24D167EAB3769838ED3494C882;// 0x5628(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9B9F37B741F8BB0FE22C15875D1D7FA82;// 0x5698(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F29508E4CF3732ACCC2CA8721894DF32;// 0x5778(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8F37B5A47929EE2B08C09B9DCC67FB82;// 0x57E8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8CCBF24643CE8364B60B48B76A60E2B02;// 0x5858(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0A29B81C43A9620827CCD39BD7041F5E;// 0x58A0(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_368E904E4617A2E915197DAE30EA45A2;// 0x59C0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_559B97304D50DA1E18B740B293C00CC5;// 0x5A90(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2718D27A4A9ECA4DB2F754AED329A6AE;// 0x5BB0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FAEA9F7E4ECD8008ABBBD880B705F4ED;// 0x5C80(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0249E7AC486A15CCCDED5AA7E9E42DF5;// 0x5DA0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2A2225D44DEF157E378A690AD4A27FC;// 0x5E50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55FE11D24D167EAB3769838ED3494C88;// 0x5EC0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9B9F37B741F8BB0FE22C15875D1D7FA8;// 0x5F30(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F29508E4CF3732ACCC2CA8721894DF3;// 0x6010(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8F37B5A47929EE2B08C09B9DCC67FB8;// 0x6080(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8CCBF24643CE8364B60B48B76A60E2B0;// 0x60F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2E2E5B934FC49212A5236CA1C36D7263;// 0x6138(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2A2D30C44A127E327786D091FCC3E680;// 0x61A8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6D59C9E74B6910331480D0BB3E1781D6;// 0x6278(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4D1FAC224C8E05BB77108A89897E1308;// 0x6398(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C06C27A6423F5E7E014800A3A651DA60;// 0x6468(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CE03F3547386C9076B3D091034BBCA8;// 0x6588(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FB6CF0684C691E3122CFBBA6B6E8B838;// 0x6658(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_06311F4B48BA9AB06FB37FA88F71959E;// 0x6778(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D428E06642D440985A3446B84EB42C72;// 0x6828(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2BA3671B46548E57FE983BA309EBF25E;// 0x6898(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F707B6404EE7817189F0568DE09909E2;// 0x6978(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA20D39B4DB1CD65515C22BF2E8AB7F1;// 0x69E8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49DD19ED4612A880B0D81CB3236E1E59;// 0x6A58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_01C7B8FA438CFB33F754088C56E43782;// 0x6AC8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_0799820040CAE1823A0A88BEEB44EAA3;// 0x6B10(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A84664224A98F59F45DC5687B8475A38;// 0x6B88(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A560FC37408509037F800E947678439D;// 0x6BF8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23D94ADE445785BAE12DDBBA4BE59A14;// 0x6D18(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7025CB114CA2C86AD62338BA910C925D;// 0x6DE8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D12EBFA3419BD943D726ADA26CD07AB3;// 0x6F08(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7E0901D54AF85221EE6FC386572B12DD;// 0x6FD8(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E8D5D2134884DC5C77B7E6A56A22477F;// 0x70F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8AC92ADD4B83B31A934F0E81D4ED8BB2;// 0x71A8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3BFF68F74E880ABD33D943B82CC3E09F;// 0x7218(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77CA7D56494300C4F9BD0FB5857529BB;// 0x72F8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4CF5ED3487DFAD1EA3992ACD92F1990;// 0x7368(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB76758845C67B57880F83B3F4AA34EC;// 0x73D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C880FAD42C9FE90620F29B0812B1E78;// 0x7448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CB772BE4A9A67CF7F405EAF16A32C8B;// 0x7490(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF31ED834067DCB09EB52398D06F1E99;// 0x7500(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A3B76DA84DAA22FDE52DDC97EF29C928;// 0x7570(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA04DD0544E75B1EADBE65ACB75C95B12;// 0x7640(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FCB0FC034C831397E928A1924AA08F0B;// 0x7688(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_90E4248345418A4981667697C1388B30;// 0x77A8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5A2A58D046F2444F3368ECAFC5A0FBC9;// 0x78C8(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_F5A6116243D08C3CFE43D3A0EC66F0DC;// 0x7998(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5B8707F049AE64E555C86FB91BCA44BE;// 0x7A78(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_570BEA9E44F7058C9E960D87BA7F702E;// 0x7B48(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_966A5D6D43389C4C09765CAB065F30EB;// 0x7C68(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7FB14B194B1FC25D73D68EBEDADB5D7C;// 0x7D38(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E073E2FA462CB46652FE06B879403AF0;// 0x7E58(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_952AB388445540CA531661A9EA345420;// 0x7F28(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_122673C544CC5AA3F7FC83B52CD40606;// 0x8048(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3BB6D8C54459B573F50CC1B3995ACD60;// 0x8118(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_480160114160CC7731B7E5A25CD36C4F;// 0x8238(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31FA993E4BA1E6398E2A7B998E3072F4;// 0x8318(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9CD275AE4A6CDC9F8CADE9BB8678AB9A;// 0x8438(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88D27E23408F59EA5089568525BBA1B7;// 0x8558(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5B2D35834AE62DDE159132B8FDBD20FF;// 0x8628(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_819A2C2B4A360C414FF1C9AFBB0D8FB3;// 0x8670(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7120D0184152A59B08B41EB326E16C50;// 0x8748(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BA72E5A0455FDBCDB43EB8BED5582C13;// 0x8798(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_88BCD8124A58678127FF55B84FAFA8D1;// 0x8810(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5916E57B4B64B5ADAED53F9461C33322;// 0x8858(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3DEB50D3453475EA2AA16593DD6A1849;// 0x8930(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67717579495D7A9FA6CFC483DD706300;// 0x89E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_998621D74CA72EE3EACA10A088A74B79;// 0x8A50(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8CA11A0148AD3599C8C5A68936D186B1;      // 0x8AC0(0x0060)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_610F274F4E3B9C4346C6949A50567B71;// 0x8B20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A2BBF3A4A1B2DC539D5A991C68D6E19;// 0x8BA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_091B00F54E8BAF3A05D93C9034FD3B0B;// 0x8C20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F7814814B371A3DF4B359BD88AF3E70;// 0x8CA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FCC890AA4710698C891A5485E1E3ABCC;// 0x8D20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DD3B2C84A372E66CD0782938E22672D;// 0x8DA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_200BE71F42E88EFFBAE17EAF152CEA7D;// 0x8E20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B511E5D43329E71F4917D95F739CA65;// 0x8EA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE669499467CAB05E2D063B29186F080;// 0x8F20(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7D0369A4868B78590F8C68F5E969F08;// 0x8F90(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_822494194418AD53A23B1DBE715585FC;// 0x9000(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_578D122946339289878AD4A8A2B43BCB;// 0x9070(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBCFA1BB47A142BFF48B3CAC12C0EE6A;// 0x90E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CDD28364B0E3116E4D7908D4EC016BF;// 0x9150(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8082DF774C89A7C94E6CD19EE53D59AC;// 0x91C0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C7902F52454C36875AB6DAABC658BE78;// 0x9230(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1AA3764B4FAF3E770099C9852E960413;// 0x92A0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42884F5D45FA768E5BF7B1A785DBCA67;// 0x9310(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_86B7D2BA41F87F5298B50B865AA088DC;// 0x9380(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05E7AF574385243804BD59BF2B03FEB7;// 0x93F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE181588417A66480D26E6BE0701BFB3;// 0x9460(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5B087E52449318CCFFC2C89E32C063C5;// 0x94D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B8E8C1FB4E04C25FB47922894C5CE952;// 0x9540(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A968A57409465BF85ADE59F91D6A130;// 0x95B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD7A88AA4BABA4EAF38318BC82D1DC12;// 0x9620(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70C9530247102A4977B21AB4B4DDADBA;// 0x9690(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24A054EB46DB5260D4EA3E8FC49608E8;// 0x9760(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A4B393E046FE77F92355E1B816A2CEDB;// 0x9830(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_F99F0C464DE1B9A3BD1F7D8C3588FB47;// 0x9900(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59944AB44BA8923A2A0CAB8CBE821C49;// 0x99E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D3430244F050AF65BFC6D950316EA0B;// 0x9A28(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2F8FDBF4CC267A9346FC19BFF7C1C4E;// 0x9A98(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F34CE333440705E32D8C45B2D9386C75;// 0x9B08(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8E18AA404541DCF3688C9FAE1EEB1204;// 0x9B78(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0D77052643739299B8A450A3DC3E285A;// 0x9C48(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_943C23F748EF24F97228D3AA7CDB328C;// 0x9D18(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F933FDF74D79487D99E9DCA450A92B0A;// 0x9DE8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_896E37F549646720464EA0B642BC8C9B;// 0x9E58(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8650DF484DB2D5AA76AA648D37855358;// 0x9EC8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F807FA740BEC23846144BA841F2CD0D;// 0x9F98(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3115092B40128302DAEDACBEFA28B166;// 0xA008(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EC8C197540ACD58885B4A392DCB8E56A;// 0xA078(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_998EDF66471FBDF25FD17680EB56F1D7;// 0xA148(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0DFCB6EC462CC0B84E0DD48D6BBFC2AB;// 0xA1B8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88D65BBB4B18A1FE5F9183B783AFF625;// 0xA228(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_606BB4B84158C1A83549BBBD6CC8DA23;// 0xA298(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56DE663948F4C7E07084E6B9733D6902;// 0xA368(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1225E7E34A0F518B19EC98BC60AE83E9;// 0xA3D8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63B0F63A4E7141A1CE0C57A8EB77835E;// 0xA4A8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC69445044AA2BAB151723A0CB919DD5;// 0xA518(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E55DF49345B91B496691A5B7A0C603B8;// 0xA588(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A462A5B34FB6FB67AF85128F78E5831C;// 0xA5F8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F42F92FA4E176CE6E6907B82A1743F46;// 0xA668(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF41388F475BEB69EA0F18AC2289379F;// 0xA6D8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_906DC893452525E4D62798969C725E5C;// 0xA748(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3AB2BDC04099D0AC8583CB9689127E28;// 0xA7B8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2BB84DA547700081F00076AC40B2A50A;// 0xA828(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1EB28666480B8810A09857B9A6ECD194;// 0xA898(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3D18BFE46CF2E68B15EF6ABEAA78D33;// 0xA908(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13FA17194F4FDA53FA66DF8E0118FFF8;// 0xA978(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9260056C450C16683950238F6F112106;// 0xA9E8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9E2AE9D043D1238E26B331BCA16B3A80;// 0xAAB8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DBBEF3A54E0FFEE025876BA51E25CBA3;// 0xAB88(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_BEB051744B8E56AAD197DB901A5E9CE9;// 0xAC58(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_545420C64B78A4F59A83A69C96107A9C;// 0xAD38(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32D322B345CDD0FCBF52988CA10E290E;// 0xADA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D511F6F4A36FEFDB59D8C97549A240F;// 0xADF0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_534B037C4CFD1A42D7826DA824A07C91;// 0xAE60(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_948BB2344072FADC66F4988E41F4953C;// 0xAED0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EDD349B84985171824816B80276A5375;// 0xAF40(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1D6CF13A4C36355E51BAA3A2453D96F8;// 0xB010(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4E6F91A846BD0347B4620383B23D25DB;// 0xB0E0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_718ED8EF4B9DDF4F62659C8887E03FEF;// 0xB1B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_541BB3104FD5C87063CF41B44A3F5B65;// 0xB220(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DEEB05243A30A042B5BFDB6B13C216D;// 0xB290(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52EA24A24387E9693715FDB06F309D4A;// 0xB300(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA3759614405492BC7F5C6AACF0E3B9F;// 0xB370(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE3AAE7742A23435FE4D94A98F9CC0D2;// 0xB3E0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5B063CC04F8CD9E5EC1E6AA602E603D9;// 0xB450(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_08A2876A4C736F42BB6469B9261F733B;// 0xB520(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1996719445E8CBD1ED976D99548E059E;// 0xB5F0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15AD3D64405AF45B02771F951EFB0E3D;// 0xB6C0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2936E66E4545E3C0CC629FA0FE48820A;// 0xB730(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DC41EFF4BB14A144E5252A8625E2186;// 0xB7A0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14A4E32B483883B9C68325814171A1FD;// 0xB810(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D7122C449A05522EDBE81953684CF6F;// 0xB880(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_971C5831407707FD2F61699274E87DE0;// 0xB8F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_345A31934E9935C2AF371D96753FC0C2;// 0xB960(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5364166A4E44CCEC187F7492D50D1C69;// 0xB9D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41F30FD8456B9EFC82DA9AA9670A5C87;// 0xBA40(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_599224754C31D2BA7720B1B360EDDF72;// 0xBAB0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_065E238848228EF2F85E059A12620179;// 0xBB20(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C4A67D774C6CB4EBDBDF6E8192CBC50A;// 0xBC00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99A1E4B54248F04F4687D69B954A5EC3;// 0xBC70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5EE7C5D443C82E957E3845A2050ADCA3;// 0xBCB8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C2374A44E6BCF455E869FB7DF6D080D;// 0xBD28(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F90F99643D036FA875EF9BEF34FBFCD;// 0xBD98(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15F6827B446469B515D405B6290814E0;// 0xBE08(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7487039343D1FB20D29A3D90744448C6;// 0xBE78(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07F4996947F1FD6D09A0F9ABF9BB16D0;// 0xBEE8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A720FC749111212DCDC4E82149BE586;// 0xBF58(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A251DFB346A714BAD01845B2650E7793;// 0xBFC8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BC6F1E948DB9A6026D61E87EAB8AF90;// 0xC038(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A156F324634C3B582E9CD87100F5D58;// 0xC0A8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDCE0C9D40C4D4B20226E4AA5AE8B87C;// 0xC118(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28CF0E154ECFA84D79D805851CE38C57;// 0xC188(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3566F544A7AB53037B4A3B3B5681D12;// 0xC1F8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DACFE59A43FD63FCF55DB9B77524F560;// 0xC268(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F857374B4ADA1E0641A1419AF29E1092;// 0xC2D8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DFCA53464B8920BA55D6A18BD2AD6AC1;// 0xC348(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA8A504A4472B4469FE58B9A1B67A3C4;// 0xC3B8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_24BB55A94C5B8C1CEBF92C97A8606D46;// 0xC428(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80EBD9A44703F9DAB65AC79AB6810B2C;// 0xC508(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63B740B64A9CB6B739AF24A5CB458E89;// 0xC5D8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_682E912642030BD28E001AA1EF14C725;// 0xC6A8(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F9F075C4C918632AFEEBD8662D1901A;// 0xC778(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_30BBA76747B35A4791A1DAB2B66D8A07;// 0xC7C0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA04DD0544E75B1EADBE65ACB75C95B1;// 0xC7F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3E22F765444994C1A890CAAAED910991;// 0xC840(0x00D8)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_8C4B3BC145DB6F2FD7780FACF676D0CF;// 0xC918(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_84157BE948059A843EA0A6B1C3EF095E;// 0xC990(0x0120)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DD77219B432B97B3584255862E88741C;// 0xCAB0(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_79D30C9B4BB82811599BFDAE6F9574FB;// 0xCB28(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C44FD2E84741D72277EAC8B90F118A2B;// 0xCB70(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_36A8801645C3D4DDEC3BA6847D55A02D;// 0xCBB8(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6DDE2EF0443E2F6833096EAB865A5B05;// 0xCC00(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6C1356A4252A11C25B3D78A2609D7AB;// 0xCCE0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_F6CEE6BD4CCC81C772B08787423C90FE;// 0xCD50(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F51E07A74B6174B2EAE582B9C51A61F2;// 0xCE30(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D3FC06A0416D64B8EE21DE8063094A7E;// 0xCEA0(0x00B0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_8770A69043C6F02B17B30A8E567320B9;// 0xCF50(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_7E8097F3472419F179598699F44C722C;// 0xCFB0(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_F5E4F84E4588ECBECEEADCB315713C85;// 0xD010(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C0F5C8504ED4DEC7786883B85F5E4E06;// 0xD070(0x00B0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_9AAF4A5444BD39BEC6CFB7829B225375;// 0xD120(0x0060)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCE9351E41C3F1B2C18B05ADBD7D822A;// 0xD180(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF459624432831737FCC5ABC6CC537CB;// 0xD200(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AAB1064A4012DDD1DB02638D17480F17;// 0xD280(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0098AEE84093317877969B82FE7A8F7D;// 0xD300(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F36C4454163BC69E8401BBF7C749021;// 0xD380(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5E68C404494A9AA6322E68A75257C8B;// 0xD400(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB0D6FFA49133177E655FFBE1007E002;// 0xD480(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B07AF5854EB241D1A5B69AA3117D0A44;// 0xD500(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E67949D454D1BEF1C3979BF8DAE4CDF;// 0xD580(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D02CFF194396DEFF34F3D8B8CA4478FC;// 0xD600(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_550CFD424F7E9E17E2D876B415EB0304;// 0xD680(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FF5D3D545BC14EA0F9E109C43CBC147;// 0xD700(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6BB17E2D4AC30C19D4ADFBA90BA87110;// 0xD780(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AC8FC8C74E7E4C9E9E2A69BE0A4CB4BB;// 0xD800(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31408C3646A26E17719FBF86BF92B752;// 0xD880(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_068AA4FA459FAF7D6BF38AA9CB6A959B;// 0xD900(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_333099CE4BE34A4D1F7918AE95252194;// 0xD980(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F509D6444539FCF09B3AB80F09641C0;// 0xDA00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2CF6BE54AA2F5873D5CC89B6A6A902E;// 0xDA80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CCE4909D469B6481C5C6328FE6F312EB;// 0xDB00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C0190EA44C201A27ECBAC99B592A0E5;// 0xDB80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A012CE9449496A0726C95CAF639727AC;// 0xDC00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC37C1F94F9B9D3B4B27FEA2D912E5FC;// 0xDC80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B708732A4E8A2DB09017BBB0E14ED3DD;// 0xDD00(0x0080)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_60C823BD4EB3787519721F95BE184D04;// 0xDD80(0x0060)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7166822B48D424B9D357D584B93389B12;// 0xDDE0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96C7A2AF4057360463CEBB8DE86FCC4B2;// 0xDEC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_798F0527474B8B20129F0D87506CDB652;// 0xDF30(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93770B5C46A6033F6CAA90AC6FD4C98D2;// 0xDFA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_901014864C8FB85EFD75EC877EADF6C02;// 0xE010(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_64F55C834C9ED5C956065EAD19E7AB7C2;// 0xE080(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C4B9987545F781E613103182395867B1;// 0xE0C8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FA5F08B146B648F065DCA180625072D4;// 0xE110(0x0048)
	struct FFortAnimNode_SpeedWarping                  FortAnimGraphNode_SpeedWarping_17867ED445F64E71BBCCE493BE20E7EF;// 0xE158(0x0130)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_770AF9CA4B9C561757208DB7F72B472A;// 0xE288(0x0070)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_FDD2909B4AA9B4C98A896E92B31C2153;// 0xE2F8(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_AB6EAAC54CA8E767351CABBD82856149;// 0xE358(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_0687EFB84F903175D14CDC88C6640505;// 0xE3B8(0x0060)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_FD6B9F34455F2319DBA16391C4599694;// 0xE418(0x0060)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_79535B8C42A10EBACB358AA364D3AE01;// 0xE478(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E998584340097926122A0C933CE5C5D3;// 0xE558(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A809D06460F0779469A08B3CBBC520C;// 0xE5C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1EB47DCE4636E98E69C4C88D2E4BE48E;// 0xE638(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A425079843096A92210B80B16DA678FE;// 0xE6A8(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_D5D8CD1C41FA9C8306845B9B67E4F042;// 0xE6F0(0x0060)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7166822B48D424B9D357D584B93389B1;// 0xE750(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96C7A2AF4057360463CEBB8DE86FCC4B;// 0xE830(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_798F0527474B8B20129F0D87506CDB65;// 0xE8A0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93770B5C46A6033F6CAA90AC6FD4C98D;// 0xE910(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_901014864C8FB85EFD75EC877EADF6C0;// 0xE980(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_64F55C834C9ED5C956065EAD19E7AB7C;// 0xE9F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77B831D0400D1E57AF522380786969C6;// 0xEA38(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91492B0B4DFE2AE2FC09CEBF5B8FDB5A;// 0xEAA8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6508E8004C7282EF0045D5B0E6E235EF;// 0xEB18(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9121E8464A3979CAEE017A96BD7C6FAD;// 0xEBF8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F65625C94811A2B90289B38A0AC2EADB;// 0xEC68(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31C121084AC6A1493CA9EAB9B1E69E3A;// 0xECD8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_315FB0684D342C4730C9F3BB8B65AB4F;// 0xED48(0x00B0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_EE0053544F1FA7DC1425BAB2EB422C4F;// 0xEDF8(0x0060)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E523C1824AC072B7B7C707BE53BFDE24;// 0xEE58(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E9B3A2F24D8303588F07C691EFDB1FF6;// 0xEF38(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_457D12F24D35E03C7F344E892439F4D7;// 0xEFA8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11CC4906440C5EC8E75BF9BFF2B00994;// 0xF018(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD6AF19249CEFB40932B7F86606180E6;// 0xF088(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_04FA089E497F5366ED8C88A958BA998E;// 0xF0D0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_60713724494C91FEB0C2D49BF5E0D1DD;// 0xF118(0x0048)
	struct FFortAnimNode_SpeedWarping                  FortAnimGraphNode_SpeedWarping_04AA4DBD4130B682F6C9D1A0289FED19;// 0xF160(0x0130)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_772062964AD1FE4F8F2076AF00C7F6E8;// 0xF290(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B8B56724E8B28F125DCD7BA23C4C9D7;// 0xF300(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF3164554F89167D700C789F17DF0D5D;// 0xF3D0(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E5D5240648535919A8A270A95618212F;// 0xF440(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FA0792944D84F5BC17475AD1FC817FE;// 0xF4B8(0x0070)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_3D22484240C67B97F89B0A887416082B;// 0xF528(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_15921D4B4DB6C3AAE3F7E7B363D891B0;// 0xF588(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E18CE2A54DDA839D4AE3709D3405B6FC;// 0xF5D0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5AF6D57A4E4278F7405F67AA55A8E8CA;// 0xF640(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7BB6C6C04FD5A592737248831A8F2941;// 0xF720(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_406D72D84A85A3442586DE95056174D0;// 0xF800(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C84CCCBB4E1B0C0925E19992F3FEA29A;// 0xF870(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56A9D1804A08306168C6F29FAE0DB24F;// 0xF8E0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23DD570440FEC680B74F8C90F1DF1051;// 0xF930(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3122B584EE89539EBC84CA073A943D6;// 0xFA00(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B11E52234F06C933AFE3D297B1F09A37;// 0xFA50(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA7261AD42468E51A7B135ACFD1062F5;// 0xFB20(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF3B1CFD49F934C5E1066D8A1418839B;// 0xFB90(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4617B14141892EF3495D8696BFFE50FE;// 0xFC00(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CD94E10142B7098F7730079A150179B7;// 0xFCD0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AAC138E14B0DC2538143F2B4805C67BA;// 0xFDA0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E75C54C84C7F2FE54D5814B3903AE6CF;// 0xFE10(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9513D62F4773BD1C9DAF36822B1C06DB;// 0xFEE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B4DBEBAE4783A56AA66D339599E5C940;// 0xFF28(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5CA1A80E48A014AFB5A65DB125FB66DD;// 0xFF98(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0FA5086C4AA98DCDCBDAF1BF8CE99CB4;// 0x10068(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_960969B64351C51FE9728D8DE415D59E;// 0x100B8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_63B2F9CF4EBE4838635DAA813D87C60C;// 0x10100(0x0048)
	struct FFortAnimNode_SpeedWarping                  FortAnimGraphNode_SpeedWarping_7096E4DF47EEC636DCC34B975591CD9D;// 0x10148(0x0130)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6CF9C3D34EDF0CA6C6A3AFBB547AE879;// 0x10278(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_1EECC16641DE5D21D86F36ACC561CEEC;// 0x102C0(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2FC97465474821C4ED319EA1742F1011;// 0x10320(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7BBAAA5C4D2C51780732B9ACA30C23EF;// 0x10440(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_817CE58D4D1E211B7DAA73894F36D813;// 0x10560(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B5056B224C395198530873A988C90A0B;// 0x10640(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B4969C748EB76C886E418BCA093EE89;// 0x10760(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CE317D204808F853C27E578B7E35174F;// 0x10830(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BD778AEA4FCDFD1B8A697091EBC517BB;// 0x10900(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3C81EB15418ACB6C79672AA8245B7E61;// 0x10A20(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FF28E128467C0150114ADABBD35DDE7C;// 0x10B00(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39CB22814C04A7F231B90FBA05816767;// 0x10C20(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8B224B7F42C4529755A287B0D30D7950;// 0x10CF0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_660DBEAE4577974367AFF1B864D279EB;// 0x10D38(0x0048)
	struct FFortAnimNode_SpeedWarping                  FortAnimGraphNode_SpeedWarping_8BB4AA26462F17FAAFB8F0951F848F90;// 0x10D80(0x0130)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42B0DEAF4861DAFAEA9F93826E824875;// 0x10EB0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5448F23E497F1F675DE42BA36CFBA1AB;// 0x10F80(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0D1E666445401DDCB750FE98AB3ECED1;// 0x110A0(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8EE9E62E457D38D52B08FF827112C054;// 0x111C0(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9A89DAC449CE576970C08EA2E4C15700;// 0x112E0(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_FE4CC17D469195444F394791AF087800;// 0x113C0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5E2FD5044C5985CAB40E91B7F9A4D2D7;// 0x114A0(0x0120)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_64B6A1CA4B728650D57868A399A59270;// 0x115C0(0x00E0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_13571E064835EC784E7D009410A9955C;// 0x116A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6D9CEF1545C28FFCB8313E85B2EB0794;// 0x11700(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_75276A384C4C3DE35880118DF8DCC06C;// 0x117D0(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_04A100C04D68E5E6190E39A9EC99110A;// 0x118F0(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5DA815AC40CC356D32A9188DC16931DF;// 0x11A10(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_53A0C0794E6172F8F478D1BFD7B9CB93;// 0x11A58(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2386C69C48917AFEDE5F8ABE37BC5844;// 0x11B30(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D9846C8F4BA9D98D058C22BCBF6F4047;// 0x11B80(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_Root_3FC5D63748E5DFF6573A82BF5641E6BB;      // 0x11C28(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_55F66DF94CA7DA6F7BF9B3BE10956EFB;// 0x11C70(0x00B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_CC1EC7974F8F64F71EC415AA4C16D53F;  // 0x11D20(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7A5C30D5473C0BD5C7415791493D210C;      // 0x11DB8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_53DD69EF479BE436A705EB81EA3B9595;      // 0x11E18(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8813E1B44A1F166E26E4AC921E6C67D2;// 0x11E78(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A1C928D0481F949D91BE5CBF8BC8D209;// 0x11F48(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A7336AF44CA0D2A8636CB98F5DFC779B;// 0x11FF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37A1A14846762B266EA6BABE875ECB59;// 0x12040(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_67F4302F4C9FB0E95518DFAD11D2EC4E;// 0x12090(0x0150)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E212450C4C5A92A10FE7E284D3C2884F;// 0x121E0(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_FCC9D2DE4428B20FC1B00FAE7EB58D51;// 0x12290(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A4B62761481E4F62D6468691836E7438;// 0x122C8(0x0078)
	struct FFortAnimNode_SlopeWarping                  FortAnimGraphNode_SlopeWarping_EB9AB4EC44DED49AA3F34392774788F5;// 0x12340(0x01C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4FFE9DC74564420236C07E8FD24F2671;// 0x12508(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9562E2F342B43FE2DF64C09301446187;// 0x125B8(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D62C4A9A485618C6FB58348C4DF4C04A;// 0x12708(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C1DFAAE34B6D9E5AAD95E78C8C139A3E;// 0x127D8(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C006E361403F6A89F7F01085DCD740A9;// 0x128A8(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5296896745A8131FBA324CB04E39F4A6;// 0x129F8(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_07ED87E14179D6D43EFD37AEB7C17F49;// 0x12AC8(0x0150)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1503B85348B2964986341797805E279E;// 0x12C18(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0B8D6FD54E0806E23C3DEE95C8D57F38;// 0x12C88(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_661D685B40130CCABE4827BE5B7FFFBD;// 0x12CF8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6ECBF05049D29D93396C0788EF290DE8;// 0x12D68(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_96E4C19E4D8DFDAA6664EAB3311D5ADC;// 0x12DD8(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B2DAF23A4199DA2469EC7091A4ACE4CA;// 0x12E80(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_773905C94F6BD3D4CCC97FA38EABD598;// 0x12F30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BDFE2741423019A1B72E398597502FB0;// 0x12F80(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C82F14924B7030FF07FC0981E26C2EF0;// 0x12FD0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0159658D433E8183422104A221D42740;// 0x13080(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7F30868D4011EE24834D65B370797907;// 0x130D0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C7557B8346B5AC5E2E88FD9F10339CBB;// 0x131A0(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B2DD22BE492155984EEF1CA57E3AA720;// 0x13270(0x0150)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C554BA5A4BC4656A175A3193B879D95B;// 0x133C0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB95F1FF41AEA06273F498A062431E3F;// 0x13430(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_297F617C497B1D6BE569AE86528D2DAA;// 0x13500(0x0150)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CCC1B438484445756896EA81C410D0C3;// 0x13650(0x0150)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FF577ED34B5F2E50A4A5F5A4964DC1F6;// 0x137A0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_705DE7CA48B2CD4C169170B3A75FA6B7;// 0x13810(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AF447B21452A575CFAFF26A158D5B714;// 0x13880(0x0120)
	class AFortPlayerPawn*                             Fortnite_Player;                                          // 0x139A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomBodyType>                   BodyType;                                                 // 0x139A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomGender>                     Gender;                                                   // 0x139A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortBuildingState>                    BuildingState;                                            // 0x139AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortWeaponCoreAnimation>              WeaponCoreAnim;                                           // 0x139AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x139AC(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EFortWeaponCoreAnimation>, struct FPlayerAnimAssets_Struct> CoreAnims_Male;                                           // 0x139B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EFortWeaponCoreAnimation>, struct FPlayerAnimAssets_Struct> CoreAnims_Female;                                         // 0x13A00(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DeltaSeconds;                                             // 0x13A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnGround;                                               // 0x13A54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoving2D;                                               // 0x13A55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAccelerating2D;                                         // 0x13A56(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x13A57(0x0001) MISSED OFFSET
	struct FVector                                     WorldVelocity;                                            // 0x13A58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalVelocity;                                            // 0x13A64(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldAcceleration;                                        // 0x13A70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalAcceleration;                                        // 0x13A7C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed2D;                                                  // 0x13A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityZ;                                                // 0x13A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementDirectionYawAngle;                                // 0x13A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x13A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedAdjustedPlayRate;                                    // 0x13A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingRootMotion;                                       // 0x13A9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargeting;                                             // 0x13A9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x13A9E(0x0002) MISSED OFFSET
	float                                              MinimumLocomotionSpeed;                                   // 0x13AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalAccelYawAngle;                                       // 0x13AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalAccelYawAngleLastTick;                               // 0x13AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalAccelDeltaYawAngle;                                  // 0x13AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalVelocityYawAngle;                                    // 0x13AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalAccelVelocityYawDelta;                               // 0x13AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintYawAngle;                                           // 0x13AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeedThreshold;                                     // 0x13ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x13AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAboveMinimumLocomotionSpeed;                            // 0x13AC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x13AC2(0x0002) MISSED OFFSET
	float                                              TargetingWeight;                                          // 0x13AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableHandIK;                                            // 0x13AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMoveIKGunToHandFK;                                       // 0x13AC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x13ACA(0x0002) MISSED OFFSET
	float                                              Hand_IK_to_FK_LR_Weight;                                  // 0x13ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStunned;                                               // 0x13AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableAdditiveLayer;                                     // 0x13AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableLowerBody;                                        // 0x13AD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockBodyType;                                            // 0x13AD3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTestNewJump;                                             // 0x13AD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x13AD5(0x0003) MISSED OFFSET
	float                                              FallPlayRate;                                             // 0x13AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallAnimPlayTime;                                         // 0x13ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PelvisOffset;                                             // 0x13AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_in_Idle;                                               // 0x13AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x13AE5(0x0003) MISSED OFFSET
	float                                              Actor_Yaw_Offset;                                         // 0x13AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTurning;                                                // 0x13AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x13AED(0x0003) MISSED OFFSET
	float                                              TurnRate;                                                 // 0x13AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawDeltaLastTick;                                         // 0x13AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawDeltaCurrentTick;                                      // 0x13AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawDeltaSmoothed;                                         // 0x13AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Root_Yaw_Adjustment_;                                     // 0x13B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Threshold90;                                         // 0x13B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Actor_Rotation_Last_Tick;                                 // 0x13B08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeTwistCurveValue;                                     // 0x13B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPlayedFirstAnimationTick;                              // 0x13B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x13B19(0x0003) MISSED OFFSET
	float                                              PreviousCurveAmount;                                      // 0x13B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurveAmountPerTick;                                       // 0x13B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnThreshold180;                                         // 0x13B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTurning180;                                             // 0x13B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x13B29(0x0003) MISSED OFFSET
	float                                              AmountTimeBeforeTurn;                                     // 0x13B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountTimeBeforeSecondTurn;                               // 0x13B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnLeft;                                                 // 0x13B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnAnimationEnded;                                       // 0x13B35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTurning90;                                              // 0x13B36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RootHasBeenBackedOut;                                     // 0x13B37(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayTurnAnimation;                                        // 0x13B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x13B39(0x0003) MISSED OFFSET
	float                                              TurnAmount90;                                             // 0x13B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpLandStarted;                                          // 0x13B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x13B41(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    MenuScreenDispatcher;                                     // 0x13B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              SlopeWarpingAlpha;                                        // 0x13B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeJumpWeight;                                          // 0x13B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Adjusted_Aim_Yaw;                                         // 0x13B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustedAimPitch;                                         // 0x13B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShuffleThreshold;                                         // 0x13B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingMeleeAnim;                                       // 0x13B6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x13B6D(0x0003) MISSED OFFSET
	float                                              LeanAngle;                                                // 0x13B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMontagePlaying;                                         // 0x13B74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x13B75(0x0003) MISSED OFFSET
	float                                              LeanAdditiveAlpha;                                        // 0x13B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanAngleMultiplier;                                      // 0x13B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBackpedaling;                                           // 0x13B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x13B81(0x0003) MISSED OFFSET
	float                                              BackpedalSpeedThresholdAngle;                             // 0x13B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JogStartPosition;                                         // 0x13B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkAnimStartPosition;                                    // 0x13B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldWalkRightFootFwd;                                   // 0x13B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x13B91(0x0003) MISSED OFFSET
	float                                              AuthoredWalkSpeed;                                        // 0x13B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGoingCommando;                                          // 0x13B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDisableMappedBS;                                    // 0x13B99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x13B9A(0x0002) MISSED OFFSET
	float                                              AuthoredJogFwdSpeed;                                      // 0x13B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AuthoredJogBwdSpeed;                                      // 0x13BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AuthoredSprintSpeed;                                      // 0x13BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AuthoredGoingCommandoSpeed;                               // 0x13BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldPlayJogStartTransition;                             // 0x13BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldPlayJogStopTransition;                              // 0x13BAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldPlayJogPivotTransition;                             // 0x13BAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x13BAF(0x0001) MISSED OFFSET
	float                                              DistanceToStop;                                           // 0x13BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PivotTriggerPosition;                                     // 0x13BB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StopCompletePosition;                                     // 0x13BC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPivoting;                                               // 0x13BCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x13BCD(0x0003) MISSED OFFSET
	float                                              TimeToFullSpeed;                                          // 0x13BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldEarlyOutStopState;                                  // 0x13BD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldEarlyOutStartState;                                 // 0x13BD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDisableJogTransitions;                              // 0x13BD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldEarlyOutPivotState;                                 // 0x13BD7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocomotionAdditiveAlpha;                                  // 0x13BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocomotionTransitionAdditiveAlpha;                        // 0x13BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    LocomotionCardinalDirection;                              // 0x13BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x13BE1(0x0003) MISSED OFFSET
	float                                              LocomotionDeadZoneAngle;                                  // 0x13BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAnimBlendTime;                                       // 0x13BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedAngle;                                          // 0x13BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeAngle;                                            // 0x13BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartTransitionActive;                                    // 0x13BF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x13BF5(0x0003) MISSED OFFSET
	float                                              StartAnimDeltaAngle_North;                                // 0x13BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAnimDeltaAngle_East;                                 // 0x13BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAnimDeltaAngle_West;                                 // 0x13C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAnimDeltaAngle_South;                                // 0x13C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartStateWeight;                                         // 0x13C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartStateRotationMultiplier;                             // 0x13C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopTransitionActive;                                     // 0x13C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x13C11(0x0003) MISSED OFFSET
	float                                              StopStateWeight;                                          // 0x13C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAnimDeltaAngle;                                       // 0x13C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopStateRotationMultiplier;                              // 0x13C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromPivot;                                        // 0x13C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpUpperBodyBlendWeight;                                 // 0x13C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    OutCardinalDirection;                                     // 0x13C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x13C29(0x0003) MISSED OFFSET
	float                                              InAngle;                                                  // 0x13C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InDeadZoneAngle;                                          // 0x13C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JogPivotTimeToPivot;                                      // 0x13C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotStateWeight;                                         // 0x13C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PivotTransitionActive;                                    // 0x13C3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    PrePivotCardinalDirection;                                // 0x13C3D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x13C3E(0x0002) MISSED OFFSET
	float                                              PivotAnimBlendTime;                                       // 0x13C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedPivotRotation;                                  // 0x13C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldPlayPostPivotTransition;                            // 0x13C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    PostPivotCardinalDirection;                               // 0x13C49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x13C4A(0x0002) MISSED OFFSET
	float                                              PostPivotAnimDeltaAngle;                                  // 0x13C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrePivotAnimDeltaAngle;                                   // 0x13C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionPlayRate;                                       // 0x13C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    StopCardinalDirection;                                    // 0x13C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x13C59(0x0003) MISSED OFFSET
	struct FVector                                     ActorSpaceVelocityDirPreTurn;                             // 0x13C5C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              JogPlayRate;                                              // 0x13C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JogSpeedWarpingAmount;                                    // 0x13C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpeedWarpingLimits;                                       // 0x13C70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpeedWarpingAddlRateScale;                                // 0x13C78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InSpeedScale;                                             // 0x13C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutPlayRate;                                              // 0x13C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutSpeedWarpingAmount;                                    // 0x13C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitWithAddlPlayRate;                                    // 0x13C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlphaToLimit;                                             // 0x13C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReductionDueToAddlPlayRate;                               // 0x13C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDisableSpeedWarping;                                // 0x13C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x13C99(0x0003) MISSED OFFSET
	float                                              JogSpeedWarpingAlpha;                                     // 0x13C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    StartTransitionInitialDirection;                          // 0x13CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x13CA1(0x0003) MISSED OFFSET
	float                                              JogStartPlayRate;                                         // 0x13CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JogStartSpeedWarpingAlpha;                                // 0x13CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JogStartSpeedWarpingAmount;                               // 0x13CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DBNOSlopeAngle;                                           // 0x13CB0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNOSlopeWarpAlpha;                                       // 0x13CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortWeaponCoreAnimation>              CurrentWeaponAnims;                                       // 0x13CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomGender>                     CurrentGenderAnims;                                       // 0x13CC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x13CC2(0x0002) MISSED OFFSET
	float                                              UpperBodyAimOffsetAlpha;                                  // 0x13CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultUpperBodyPose_Male;                                // 0x13CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultUpperBodyPose_Female;                              // 0x13CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpperBodyPose_Targeted;                                   // 0x13CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpperBodyPose_NonTargeted;                                // 0x13CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpperBodyPose_Relaxed;                                    // 0x13CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpperBodyPose_Relaxed_Lvl2;                               // 0x13CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        DefaultAimOffset;                                         // 0x13CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Targeted;                                              // 0x13D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_NonTargeted;                                           // 0x13D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_Relaxed;                                               // 0x13D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 DefaultJogAdditive_Male;                                  // 0x13D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 DefaultJogAdditive_Female;                                // 0x13D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             JogAdditiveBS;                                            // 0x13D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             JogAdditiveRelaxedBS;                                     // 0x13D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             JogAdditiveRelaxedLvl2BS;                                 // 0x13D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultSprint_Male;                                       // 0x13D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultSprint_Female;                                     // 0x13D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SprintAnim;                                               // 0x13D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldApplyAimOffsetToFullBody;                           // 0x13D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x13D59(0x0003) MISSED OFFSET
	float                                              FullBodyAimOffsetAlpha;                                   // 0x13D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JogPrePivotTimer;                                         // 0x13D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingToNonTargBlendTime;                              // 0x13D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldBypassFullbodyInPlace;                              // 0x13D68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x13D69(0x0003) MISSED OFFSET
	float                                              RightArmMaskWeight;                                       // 0x13D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempIsRelaxedLevel1;                                      // 0x13D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x13D71(0x0003) MISSED OFFSET
	float                                              SprintAccelDotVelocity;                                   // 0x13D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintAccelDotVelocityLastFrame;                          // 0x13D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightHandIKAlpha;                                         // 0x13D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftHandIKAlpha;                                          // 0x13D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftArmMaskBlendWeight;                                   // 0x13D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       Fortnite_Player_Athena;                                   // 0x13D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkydiveStrafing;                                        // 0x13D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGliding;                                                // 0x13D91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDiving;                                                 // 0x13D92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsParachuteOpen;                                          // 0x13D93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkydiving;                                              // 0x13D94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x13D95(0x0003) MISSED OFFSET
	float                                              ForwardBack;                                              // 0x13D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Parachute_LeftRight;                                      // 0x13D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkydiveLeaning;                                         // 0x13DA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x13DA1(0x0003) MISSED OFFSET
	float                                              FootIKAlpha;                                              // 0x13DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x13DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouchSprinting;                                        // 0x13DA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x13DAA(0x0002) MISSED OFFSET
	float                                              CrouchingLowerBodyMaskWeight;                             // 0x13DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HACKAimYawOffset;                                         // 0x13DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AuthoredCrouchJogSpeed;                                   // 0x13DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AuthoredCrouchSprintSpeed;                                // 0x13DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSpeedWarpingAlpha;                                  // 0x13DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchPlayRate;                                           // 0x13DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSpeedWarpingAmount;                                 // 0x13DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultCrouchUpperBodyPose_Male;                          // 0x13DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultCrouchUpperBodyPose_Female;                        // 0x13DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 DefaultCrouchJogAdditive_Male;                            // 0x13DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 DefaultCrouchJogAdditive_Female;                          // 0x13DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultCrouchSprint_Male;                                 // 0x13DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DefaultCrouchSprint_Female;                               // 0x13DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CrouchUpperBodyPose_Targeted;                             // 0x13DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CrouchUpperBodyPose_NonTargeted;                          // 0x13E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CrouchUpperBodyPose_Relaxed;                              // 0x13E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             CrouchJogAdditiveBS;                                      // 0x13E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             CrouchJogAdditiveRelaxedBS;                               // 0x13E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CrouchSprintAnim;                                         // 0x13E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   JogSpeedWarpingLimits;                                    // 0x13E28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   JogSpeedWarpingAddlRateScale;                             // 0x13E30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CrouchSpeedWarpingAddlRateScale;                          // 0x13E38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               AthenaAim;                                                // 0x13E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x13E41(0x0003) MISSED OFFSET
	float                                              HACKAimPitchOffset;                                       // 0x13E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             CrouchWalkAdditiveBS;                                     // 0x13E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 DefaultCrouchWalkAdditive;                                // 0x13E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AuthoredCrouchWalkSpeed;                                  // 0x13E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchBlendWeight;                                        // 0x13E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ParachuteLeanTransition;                                  // 0x13E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDirection>                            Direction;                                                // 0x13E61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsParachuteLeaning;                                       // 0x13E62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1];                                       // 0x13E63(0x0001) MISSED OFFSET
	float                                              SkyDive_LeftRight;                                        // 0x13E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Parachute_ForwardBack;                                    // 0x13E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x13E6C(0x0004) MISSED OFFSET
	struct FString                                     DirectionCurrent;                                         // 0x13E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LeftRight;                                                // 0x13E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsingUmbrella;                                          // 0x13E84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x13E85(0x0003) MISSED OFFSET
	class UBlendSpace1D*                               LeanAdditive;                                             // 0x13E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDBNO;                                                   // 0x13E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x13E91(0x0003) MISSED OFFSET
	float                                              DBNO_Shuffle_Threshold;                                   // 0x13E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkydivingLaunchPad;                                     // 0x13E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x13E99(0x0003) MISSED OFFSET
	float                                              UpDown;                                                   // 0x13E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TwoBoneIK_167235F84D5A17FC342E738C239E417E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TwoBoneIK_80EBD977446C9F5DE2B4EF911D08E2DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TwoBoneIK_43F5C77D4E5801A4749197924FC84777();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TwoBoneIK_610F7B56472AA73B1B2D9281CAFE23DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_0835E37E4BE8CE8DD6C449A998E91383();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_8B17DAC94A8C00B10BE1CCB9FAFE89F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_DF9058564507FBE1DAB7BAADDC8AC490();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_HandIKRetargeting_569D26DB417B57D435C3B3A6D2DB399A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_8710578D463AC2BF4F3C07AE03589C71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_5888D3134AB39EF4BD6090A4D05A70CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_95E036394DE666520B2AACBE0C718C03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_3060AB66495C8EAFA16F58AA91F51F19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_F1165D6C4A871CC96410B290F01FBD2B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_681E0A16460C257859E5AB895D56228D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_5FA3E534495CA9B86BD99A9071F22DB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_5E2C9C0E4ADF54A3ED1F919DE34BB9AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_256C97FA4C27CB607C92FBB69B5FEDF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_FAA52849477C30977AFB7DB9E5275768();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_449BCB1B4A64AD9E220303B23CC74303();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_2750229644464C6F7C581AA2B9423D74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_46D842DB49348C10D0F4F38355AA0466();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_C4101CA2462FB9BFCA501D96A6DC0BDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_3ECF0DA04507F3C5C57D2D9155D8C227();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_D55263A2479588C54F6A00B89A5ECC43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_3C79F6C242177C80AEAF8ABF61202931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_E192D7AE435680834D42C2AA75C45085();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_03A99EBE40BEF26D9F77C8B679A9DA44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_F518F3A94919DD74AE359F9223CAE232();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_CF6808CB43DA4D499C3A5DBF1A56C72A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_9DD1082C47DCB632833861A44B3C3CB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_A9A8FAB6471BE9BB2065CCAD68BFD3A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_6E92FCC3432E76BDF5831D8B53E076DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_88376B1A43DE50367A9423853E95FF43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_6F232AE44B753ADBFC61EAA81A7D7C8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_7B9D981343EA9D6D2C2280B5AB2D2DAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_A96404DD4595F93776716891BF27A200();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_637D5442401F7FD915B2788C8AB07089();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_30F71A9B457333D3356180987B6F7D83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_3DDB56EC47487B8992B996901178EA50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_42A5AD444EF3EC70246A54A06875631A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_745166924DBB00CF723A04A9D23D933F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D2164CF24023D4FD70E14FA8D1739C57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_BF94105E405A504CB0B0CCB0BC71EDFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_2AA23433414FA0D117EE8EB89A89CDC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_A2474522405FE241EF3324BE8C11AF63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_6FF6E46D4062C39B5245ABB75972B06E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_6DB04CA24A6562C94F4F56B5072E27EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_AB14150141F1A71D05864A80ADF61F70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_E92FEAA340174177D8D9929649657B62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D747E13544D5A741284710AAFCDC84EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_5583B38549A46244A7027DA303869FFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_90DB6B59470599ED03831BBAFAD9211F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_407374F144F79E0427B86E97B578AE08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_616CB49F4A1E8D1C65D7C79CE28549EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_E7B7FE924C9B9CC3279F11B1A0ADF540();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_056271AE4144640EEE96D1B2EAC09443();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_3CF345E842E756B4BA88D19626569360();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_4DA5ADB2424FAC8867FB4FAC19C7C1AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_EE46F62645F23F9282A973A588B34AC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_C00BFF444C5D6CCC595A9EB0052AF74C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_4C8DAF3A474D389236A074AA828E108C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_D3A7DBAC4DADAF0FE4831F8ADACCF68E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_2F2AFD9C45DBA8AB3431459E59177056();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_7261F0AA4B2BF566CFE78CA790DDCD0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_8DE9A0DC4FBEF5490219FAA4EACD925B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_45CDB0844A1C154B04A60596900577A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_CD8EA8F34B11E4C0D4585D8D21CD4791();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_F5AB533C4B2102203A22048CEFFCDD94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_682CAB9F446087098485AB97B65065A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_F6D3BED04D7641E786238592A285E6FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_1E739EA94A3EB6D263CF4F9D8A63BCCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_61747DAD4C63F902909E4889E05CC1A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_9F9D13DA473BB190969A46B10EA3C83F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_56AEB2CE49605B5F061E9784765259C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_C468F912436B0623C90DF386696E3A71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_1E86D230478D65DAEB8445818B7B8CFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_B9061B2D45D91987D923BC810446D60F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_C123981043E5D6DF76E6CFB301351418();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_1793503F4ED56AA2EC8268808AC3A8B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_B970985B47A107603746EFA2C0EE72F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_556770954245EDA5505E6AA8EF753F46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_FC2CFB334ED944264EDFED80C142F56D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_97E4CFD547CE169D041A3D857E452304();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_3597D57041383D20A9ED2DA65FA1B76B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_74E28FA24FAB177275BC3DB513C06596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_059CFFA342BB002B1620FC94039220D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_8B32BEAC4E62C216A8B778BD2C837F48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_86551A19466526607996BE9808EC39FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_5FBCA6834270F9A45479D483D2BC3085();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_64292996433A4F04DF938289022C0BD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_1845F51F4429252B914802ACFD08C59D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_779CCC4F465A0BE751770EB69DF9240A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_FEA20B8F4088BF3CCAA1B4B32B0E791F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_D2A2225D44DEF157E378A690AD4A27FC_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_55FE11D24D167EAB3769838ED3494C88_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_9B9F37B741F8BB0FE22C15875D1D7FA8_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_6F29508E4CF3732ACCC2CA8721894DF3_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_E8F37B5A47929EE2B08C09B9DCC67FB8_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0A29B81C43A9620827CCD39BD7041F5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_368E904E4617A2E915197DAE30EA45A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_559B97304D50DA1E18B740B293C00CC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_2718D27A4A9ECA4DB2F754AED329A6AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FAEA9F7E4ECD8008ABBBD880B705F4ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_0249E7AC486A15CCCDED5AA7E9E42DF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_D2A2225D44DEF157E378A690AD4A27FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_55FE11D24D167EAB3769838ED3494C88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_9B9F37B741F8BB0FE22C15875D1D7FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_6F29508E4CF3732ACCC2CA8721894DF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_E8F37B5A47929EE2B08C09B9DCC67FB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_2A2D30C44A127E327786D091FCC3E680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_6D59C9E74B6910331480D0BB3E1781D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_4D1FAC224C8E05BB77108A89897E1308();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_C06C27A6423F5E7E014800A3A651DA60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_3CE03F3547386C9076B3D091034BBCA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FB6CF0684C691E3122CFBBA6B6E8B838();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_06311F4B48BA9AB06FB37FA88F71959E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_2BA3671B46548E57FE983BA309EBF25E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TwoWayBlend_0799820040CAE1823A0A88BEEB44EAA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_A560FC37408509037F800E947678439D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_23D94ADE445785BAE12DDBBA4BE59A14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7025CB114CA2C86AD62338BA910C925D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_D12EBFA3419BD943D726ADA26CD07AB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7E0901D54AF85221EE6FC386572B12DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_E8D5D2134884DC5C77B7E6A56A22477F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_8AC92ADD4B83B31A934F0E81D4ED8BB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_3BFF68F74E880ABD33D943B82CC3E09F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_77CA7D56494300C4F9BD0FB5857529BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_A4CF5ED3487DFAD1EA3992ACD92F1990();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_DB76758845C67B57880F83B3F4AA34EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_A3B76DA84DAA22FDE52DDC97EF29C928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FCB0FC034C831397E928A1924AA08F0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_90E4248345418A4981667697C1388B30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_5A2A58D046F2444F3368ECAFC5A0FBC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_F5A6116243D08C3CFE43D3A0EC66F0DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_5B8707F049AE64E555C86FB91BCA44BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_570BEA9E44F7058C9E960D87BA7F702E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_966A5D6D43389C4C09765CAB065F30EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7FB14B194B1FC25D73D68EBEDADB5D7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_E073E2FA462CB46652FE06B879403AF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_952AB388445540CA531661A9EA345420();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_122673C544CC5AA3F7FC83B52CD40606();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_3BB6D8C54459B573F50CC1B3995ACD60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_480160114160CC7731B7E5A25CD36C4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_31FA993E4BA1E6398E2A7B998E3072F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_9CD275AE4A6CDC9F8CADE9BB8678AB9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_88D27E23408F59EA5089568525BBA1B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ApplyAdditive_BA72E5A0455FDBCDB43EB8BED5582C13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ModifyBone_3DEB50D3453475EA2AA16593DD6A1849();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_610F274F4E3B9C4346C6949A50567B71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_0A2BBF3A4A1B2DC539D5A991C68D6E19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_4F7814814B371A3DF4B359BD88AF3E70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_8DD3B2C84A372E66CD0782938E22672D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_200BE71F42E88EFFBAE17EAF152CEA7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_8B511E5D43329E71F4917D95F739CA65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_70C9530247102A4977B21AB4B4DDADBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_24A054EB46DB5260D4EA3E8FC49608E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_A4B393E046FE77F92355E1B816A2CEDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_F99F0C464DE1B9A3BD1F7D8C3588FB47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_8E18AA404541DCF3688C9FAE1EEB1204();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_0D77052643739299B8A450A3DC3E285A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_943C23F748EF24F97228D3AA7CDB328C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_8650DF484DB2D5AA76AA648D37855358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_EC8C197540ACD58885B4A392DCB8E56A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_606BB4B84158C1A83549BBBD6CC8DA23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_1225E7E34A0F518B19EC98BC60AE83E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_9260056C450C16683950238F6F112106();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_9E2AE9D043D1238E26B331BCA16B3A80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_DBBEF3A54E0FFEE025876BA51E25CBA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_BEB051744B8E56AAD197DB901A5E9CE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_6D511F6F4A36FEFDB59D8C97549A240F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_534B037C4CFD1A42D7826DA824A07C91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_948BB2344072FADC66F4988E41F4953C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_EDD349B84985171824816B80276A5375();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_1D6CF13A4C36355E51BAA3A2453D96F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_4E6F91A846BD0347B4620383B23D25DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_718ED8EF4B9DDF4F62659C8887E03FEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_541BB3104FD5C87063CF41B44A3F5B65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_1DEEB05243A30A042B5BFDB6B13C216D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_52EA24A24387E9693715FDB06F309D4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_BA3759614405492BC7F5C6AACF0E3B9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_BE3AAE7742A23435FE4D94A98F9CC0D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_5B063CC04F8CD9E5EC1E6AA602E603D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_08A2876A4C736F42BB6469B9261F733B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_1996719445E8CBD1ED976D99548E059E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_15AD3D64405AF45B02771F951EFB0E3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_2936E66E4545E3C0CC629FA0FE48820A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_1DC41EFF4BB14A144E5252A8625E2186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_14A4E32B483883B9C68325814171A1FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_4D7122C449A05522EDBE81953684CF6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_971C5831407707FD2F61699274E87DE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_345A31934E9935C2AF371D96753FC0C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_5364166A4E44CCEC187F7492D50D1C69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_41F30FD8456B9EFC82DA9AA9670A5C87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_599224754C31D2BA7720B1B360EDDF72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_065E238848228EF2F85E059A12620179();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_C4A67D774C6CB4EBDBDF6E8192CBC50A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_24BB55A94C5B8C1CEBF92C97A8606D46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_80EBD9A44703F9DAB65AC79AB6810B2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_63B740B64A9CB6B739AF24A5CB458E89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_682E912642030BD28E001AA1EF14C725();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ApplyMeshSpaceAdditive_8C4B3BC145DB6F2FD7780FACF676D0CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_84157BE948059A843EA0A6B1C3EF095E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ApplyAdditive_DD77219B432B97B3584255862E88741C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_6DDE2EF0443E2F6833096EAB865A5B05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_F6CEE6BD4CCC81C772B08787423C90FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ModifyBone_D3FC06A0416D64B8EE21DE8063094A7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_8770A69043C6F02B17B30A8E567320B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_7E8097F3472419F179598699F44C722C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_F5E4F84E4588ECBECEEADCB315713C85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_9AAF4A5444BD39BEC6CFB7829B225375();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_EF459624432831737FCC5ABC6CC537CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_AAB1064A4012DDD1DB02638D17480F17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_7F36C4454163BC69E8401BBF7C749021();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_DB0D6FFA49133177E655FFBE1007E002();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_B07AF5854EB241D1A5B69AA3117D0A44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_9E67949D454D1BEF1C3979BF8DAE4CDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_550CFD424F7E9E17E2D876B415EB0304();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_3FF5D3D545BC14EA0F9E109C43CBC147();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_6BB17E2D4AC30C19D4ADFBA90BA87110();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_AC8FC8C74E7E4C9E9E2A69BE0A4CB4BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_31408C3646A26E17719FBF86BF92B752();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_068AA4FA459FAF7D6BF38AA9CB6A959B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_333099CE4BE34A4D1F7918AE95252194();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_6F509D6444539FCF09B3AB80F09641C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_C2CF6BE54AA2F5873D5CC89B6A6A902E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_CCE4909D469B6481C5C6328FE6F312EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_6C0190EA44C201A27ECBAC99B592A0E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_A012CE9449496A0726C95CAF639727AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_FC37C1F94F9B9D3B4B27FEA2D912E5FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TransitionResult_B708732A4E8A2DB09017BBB0E14ED3DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_60C823BD4EB3787519721F95BE184D04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_7166822B48D424B9D357D584B93389B1_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_96C7A2AF4057360463CEBB8DE86FCC4B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_798F0527474B8B20129F0D87506CDB65_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_93770B5C46A6033F6CAA90AC6FD4C98D_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_901014864C8FB85EFD75EC877EADF6C0_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_FortAnimGraphNode_SpeedWarping_17867ED445F64E71BBCCE493BE20E7EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_770AF9CA4B9C561757208DB7F72B472A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_FDD2909B4AA9B4C98A896E92B31C2153();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_AB6EAAC54CA8E767351CABBD82856149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_0687EFB84F903175D14CDC88C6640505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_FD6B9F34455F2319DBA16391C4599694();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_79535B8C42A10EBACB358AA364D3AE01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_E998584340097926122A0C933CE5C5D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_5A809D06460F0779469A08B3CBBC520C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_1EB47DCE4636E98E69C4C88D2E4BE48E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_D5D8CD1C41FA9C8306845B9B67E4F042();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_7166822B48D424B9D357D584B93389B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_96C7A2AF4057360463CEBB8DE86FCC4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_798F0527474B8B20129F0D87506CDB65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_93770B5C46A6033F6CAA90AC6FD4C98D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_901014864C8FB85EFD75EC877EADF6C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_6508E8004C7282EF0045D5B0E6E235EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_EE0053544F1FA7DC1425BAB2EB422C4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_E523C1824AC072B7B7C707BE53BFDE24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_FortAnimGraphNode_SpeedWarping_04AA4DBD4130B682F6C9D1A0289FED19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_772062964AD1FE4F8F2076AF00C7F6E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_1B8B56724E8B28F125DCD7BA23C4C9D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_DF3164554F89167D700C789F17DF0D5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_TwoWayBlend_E5D5240648535919A8A270A95618212F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequencePlayer_1FA0792944D84F5BC17475AD1FC817FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_3D22484240C67B97F89B0A887416082B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_5AF6D57A4E4278F7405F67AA55A8E8CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_7BB6C6C04FD5A592737248831A8F2941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_23DD570440FEC680B74F8C90F1DF1051();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_B11E52234F06C933AFE3D297B1F09A37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_4617B14141892EF3495D8696BFFE50FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_CD94E10142B7098F7730079A150179B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_E75C54C84C7F2FE54D5814B3903AE6CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_5CA1A80E48A014AFB5A65DB125FB66DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_FortAnimGraphNode_SpeedWarping_7096E4DF47EEC636DCC34B975591CD9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_1EECC16641DE5D21D86F36ACC561CEEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2FC97465474821C4ED319EA1742F1011();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7BBAAA5C4D2C51780732B9ACA30C23EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_817CE58D4D1E211B7DAA73894F36D813();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B5056B224C395198530873A988C90A0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_1B4969C748EB76C886E418BCA093EE89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_CE317D204808F853C27E578B7E35174F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_BD778AEA4FCDFD1B8A697091EBC517BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_3C81EB15418ACB6C79672AA8245B7E61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FF28E128467C0150114ADABBD35DDE7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_39CB22814C04A7F231B90FBA05816767();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_FortAnimGraphNode_SpeedWarping_8BB4AA26462F17FAAFB8F0951F848F90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_42B0DEAF4861DAFAEA9F93826E824875();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_5448F23E497F1F675DE42BA36CFBA1AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0D1E666445401DDCB750FE98AB3ECED1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_8EE9E62E457D38D52B08FF827112C054();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_9A89DAC449CE576970C08EA2E4C15700();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_FE4CC17D469195444F394791AF087800();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_5E2FD5044C5985CAB40E91B7F9A4D2D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByEnum_64B6A1CA4B728650D57868A399A59270();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotateRootBone_13571E064835EC784E7D009410A9955C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_6D9CEF1545C28FFCB8313E85B2EB0794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_75276A384C4C3DE35880118DF8DCC06C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_04A100C04D68E5E6190E39A9EC99110A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ModifyBone_55F66DF94CA7DA6F7BF9B3BE10956EFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_CopyBone_CC1EC7974F8F64F71EC415AA4C16D53F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_8813E1B44A1F166E26E4AC921E6C67D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_67F4302F4C9FB0E95518DFAD11D2EC4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_E212450C4C5A92A10FE7E284D3C2884F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ApplyAdditive_A4B62761481E4F62D6468691836E7438();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_FortAnimGraphNode_SlopeWarping_EB9AB4EC44DED49AA3F34392774788F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_ModifyBone_4FFE9DC74564420236C07E8FD24F2671();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_9562E2F342B43FE2DF64C09301446187();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_D62C4A9A485618C6FB58348C4DF4C04A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_C1DFAAE34B6D9E5AAD95E78C8C139A3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_C006E361403F6A89F7F01085DCD740A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_5296896745A8131FBA324CB04E39F4A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_07ED87E14179D6D43EFD37AEB7C17F49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_1503B85348B2964986341797805E279E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_0B8D6FD54E0806E23C3DEE95C8D57F38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_661D685B40130CCABE4827BE5B7FFFBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_6ECBF05049D29D93396C0788EF290DE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_B2DAF23A4199DA2469EC7091A4ACE4CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_C82F14924B7030FF07FC0981E26C2EF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_7F30868D4011EE24834D65B370797907();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_C7557B8346B5AC5E2E88FD9F10339CBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_B2DD22BE492155984EEF1CA57E3AA720();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C554BA5A4BC4656A175A3193B879D95B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendListByBool_DB95F1FF41AEA06273F498A062431E3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_297F617C497B1D6BE569AE86528D2DAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_CCC1B438484445756896EA81C410D0C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_FF577ED34B5F2E50A4A5F5A4964DC1F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_SequenceEvaluator_705DE7CA48B2CD4C169170B3A75FA6B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AF447B21452A575CFAFF26A158D5B714();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_Melee_Swing_L();
	void AnimNotify_Melee_Swing_R();
	void AnimNotify_JumpLandFinished();
	void CharPartEvent(class UFortPlayerAnimInstance* CharPart);
	void AnimNotify_playFacialAnim();
	void AnimNotify_SkyDiveLeanOut();
	void ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint(int EntryPoint);
	void MenuScreenDispatcher__DelegateSignature(class UFortPlayerAnimInstance* CharPart);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
