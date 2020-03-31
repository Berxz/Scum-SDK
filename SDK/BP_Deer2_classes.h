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

// BlueprintGeneratedClass BP_Deer2.BP_Deer2_C
// 0x0018 (0x0CD8 - 0x0CC0)
class ABP_Deer2_C : public ADeer2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC0(0x0008) (Transient, DuplicateTransient)
	class UMeleeDetectHitCollisionCapsule*             MeleeDetectHitCollisionCapsule;                           // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deer2.BP_Deer2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Deer2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
