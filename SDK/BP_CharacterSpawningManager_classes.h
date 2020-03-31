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

// BlueprintGeneratedClass BP_CharacterSpawningManager.BP_CharacterSpawningManager_C
// 0x0008 (0x18B8 - 0x18B0)
class ABP_CharacterSpawningManager_C : public ACharacterSpawningManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x18B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterSpawningManager.BP_CharacterSpawningManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
