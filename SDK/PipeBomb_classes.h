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

// BlueprintGeneratedClass PipeBomb.PipeBomb_C
// 0x0018 (0x09E8 - 0x09D0)
class APipeBomb_C : public AExplosiveTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        ArmedLight;                                               // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LIGHT_ON_TIME;                                            // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LIGHT_OFF_TIME;                                           // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PipeBomb.PipeBomb_C");
		return ptr;
	}


	void UserConstructionScript();
	void BP_OnArmed();
	void ReceiveBeginPlay();
	void BP_OnDisarmed();
	void ExecuteUbergraph_PipeBomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif