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

// BlueprintGeneratedClass BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C
// 0x00C0 (0x0D20 - 0x0C60)
class ABP_BaseComplexAnimal2_C : public AComplexAnimal2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C60(0x0008) (Transient, DuplicateTransient)
	class UMeleeDetectHitCollisionCapsule*             MeleeDetectHitCollisionCapsule;                           // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FFindFloorResult                            NewVar_1;                                                 // 0x0C88(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_BaseComplexAnimal2(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
