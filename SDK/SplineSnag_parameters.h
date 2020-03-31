#pragma once

#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SplineSnag.SplineSnag_C.Calculate Chunk Transform
struct ASplineSnag_C_Calculate_Chunk_Transform_Params
{
	bool                                               Is_Uniform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current_Index;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max_Index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spline_Length_Position;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Mesh_Local_Transform;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  Result_Transform;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function SplineSnag.SplineSnag_C.Get Random Chunk Mesh
struct ASplineSnag_C_Get_Random_Chunk_Mesh_Params
{
	TEnumAsByte<ESplineSection>                        Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instance_Mesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Mesh_Instance;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  Local_Transform;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              Mesh_Width;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh_Static;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SplineSnag.SplineSnag_C.UserConstructionScript
struct ASplineSnag_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
