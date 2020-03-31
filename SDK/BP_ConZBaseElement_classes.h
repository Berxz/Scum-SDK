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

// BlueprintGeneratedClass BP_ConZBaseElement.BP_ConZBaseElement_C
// 0x0060 (0x0488 - 0x0428)
class ABP_ConZBaseElement_C : public AConZBaseElement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UHierarchicalInstancedStaticMeshComponent*   _hismComponent;                                           // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<class UStaticMesh*, class UHierarchicalInstancedStaticMeshComponent*> MeshMap;                                                  // 0x0438(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConZBaseElement.BP_ConZBaseElement_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_ConZBaseElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
