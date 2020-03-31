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

// BlueprintGeneratedClass BP_Continental_Door_01.BP_Continental_Door_01_C
// 0x0008 (0x0468 - 0x0460)
class ABP_Continental_Door_01_C : public ARegularDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_Continental_DoorFrame_01;                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Continental_Door_01.BP_Continental_Door_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
