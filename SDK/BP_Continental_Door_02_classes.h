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

// BlueprintGeneratedClass BP_Continental_Door_02.BP_Continental_Door_02_C
// 0x0008 (0x04A0 - 0x0498)
class ABP_Continental_Door_02_C : public ADoubleRegularDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_Continental_DoorFrame_02;                              // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Continental_Door_02.BP_Continental_Door_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
