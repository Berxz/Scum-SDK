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

// AnimBlueprintGeneratedClass ABP_Quad_01.ABP_Quad_01_C
// 0x0364 (0x0CE4 - 0x0980)
class UABP_Quad_01_C : public UConZVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_63D85ED04A3C96272536389D4EFD684A;      // 0x0988(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_B18D51CC4F76DD2D1A4808B34E4DBCE7;// 0x09D0(0x0030)
	struct FDcxAnimNodeWheelSimulator                  DcxAnimGraphNodeWheelSimulator_AF7B14DD405E442F353403869CF7D228;// 0x0A00(0x0130)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F0EB96514F9E1ABD11B793833A627A0A;// 0x0B30(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8043FE864D1022E3A00FBD919D7E942D;// 0x0C90(0x0048)
	struct FRotator                                    NewVar_1;                                                 // 0x0CD8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Quad_01.ABP_Quad_01_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Quad_01_AnimGraphNode_ModifyBone_F0EB96514F9E1ABD11B793833A627A0A();
	void ExecuteUbergraph_ABP_Quad_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
