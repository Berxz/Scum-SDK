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

// BlueprintGeneratedClass BP_Zombie_SuicideVest.BP_Zombie_SuicideVest_C
// 0x0008 (0x0C58 - 0x0C50)
class ABP_Zombie_SuicideVest_C : public ABP_Zombie2_C
{
public:
	class UZombieKamikazeComponent*                    ZombieKamikaze;                                           // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Zombie_SuicideVest.BP_Zombie_SuicideVest_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
