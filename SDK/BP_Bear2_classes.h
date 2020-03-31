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

// BlueprintGeneratedClass BP_Bear2.BP_Bear2_C
// 0x0019 (0x0D39 - 0x0D20)
class ABP_Bear2_C : public ABP_BaseComplexAnimal2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D20(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCapsuleRightHand;                              // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCapsuleLeftHand;                               // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               TurnTrigger;                                              // 0x0D38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bear2.BP_Bear2_C");
		return ptr;
	}


	void OnRep_TurnTrigger();
	void UserConstructionScript();
	void ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void DrawPAth();
	void ReceivePossessed(class AController** NewController);
	void ReceiveBeginPlay();
	void TurnLoop();
	void TurnRPC();
	void ExecuteUbergraph_BP_Bear2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
