
#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ABP_Quad_01.ABP_Quad_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Quad_01_AnimGraphNode_ModifyBone_F0EB96514F9E1ABD11B793833A627A0A
// (BlueprintEvent)

void UABP_Quad_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Quad_01_AnimGraphNode_ModifyBone_F0EB96514F9E1ABD11B793833A627A0A()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Quad_01.ABP_Quad_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Quad_01_AnimGraphNode_ModifyBone_F0EB96514F9E1ABD11B793833A627A0A");

	UABP_Quad_01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Quad_01_AnimGraphNode_ModifyBone_F0EB96514F9E1ABD11B793833A627A0A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Quad_01.ABP_Quad_01_C.ExecuteUbergraph_ABP_Quad_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Quad_01_C::ExecuteUbergraph_ABP_Quad_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Quad_01.ABP_Quad_01_C.ExecuteUbergraph_ABP_Quad_01");

	UABP_Quad_01_C_ExecuteUbergraph_ABP_Quad_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
