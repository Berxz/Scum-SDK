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

// BlueprintGeneratedClass BP_DropZoneGameEvent.BP_DropZoneGameEvent_C
// 0x0008 (0x07E0 - 0x07D8)
class ABP_DropZoneGameEvent_C : public ADropZoneGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DropZoneGameEvent.BP_DropZoneGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
