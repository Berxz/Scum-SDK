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

// BlueprintGeneratedClass BP_Survival_Blueprints_CompleteShelter_Objective.BP_Survival_Blueprints_CompleteShelter_Objective_C
// 0x0008 (0x0478 - 0x0470)
class ABP_Survival_Blueprints_CompleteShelter_Objective_C : public ABlueprintableItemObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Blueprints_CompleteShelter_Objective.BP_Survival_Blueprints_CompleteShelter_Objective_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
