#pragma once

// Name: , Version: 0.3.21000

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StakePitTrap.StakePitTrap_C
// 0x0010 (0x0940 - 0x0930)
class AStakePitTrap_C : public ADamagingTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (Transient, DuplicateTransient)
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StakePitTrap.StakePitTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void BP_OnTriggered();
	void ExecuteUbergraph_StakePitTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
