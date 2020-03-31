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

// BlueprintGeneratedClass BP_DeathmatchGameEvent.BP_DeathmatchGameEvent_C
// 0x0008 (0x06A8 - 0x06A0)
class ABP_DeathmatchGameEvent_C : public ADeathmatchGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeathmatchGameEvent.BP_DeathmatchGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
