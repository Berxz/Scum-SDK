#pragma once

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SurvivalStatsHandler.BP_SurvivalStatsHandler_C
// 0x0008 (0x03A8 - 0x03A0)
class ABP_SurvivalStatsHandler_C : public ASurvivalStatsHandler
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalStatsHandler.BP_SurvivalStatsHandler_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif