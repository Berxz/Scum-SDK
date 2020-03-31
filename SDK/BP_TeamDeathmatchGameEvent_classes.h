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

// BlueprintGeneratedClass BP_TeamDeathmatchGameEvent.BP_TeamDeathmatchGameEvent_C
// 0x0008 (0x06A8 - 0x06A0)
class ABP_TeamDeathmatchGameEvent_C : public ATeamDeathmatchGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TeamDeathmatchGameEvent.BP_TeamDeathmatchGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
