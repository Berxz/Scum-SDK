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

// BlueprintGeneratedClass BP_Boar.BP_Boar_C
// 0x0010 (0x0D30 - 0x0D20)
class ABP_Boar_C : public ABP_BaseComplexAnimal2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D20(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCapsuleHead;                                   // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boar.BP_Boar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Boar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
