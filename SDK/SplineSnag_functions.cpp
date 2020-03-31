
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

// Function SplineSnag.SplineSnag_C.Calculate Chunk Transform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Uniform                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max_Index                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Spline_Length_Position         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Mesh_Local_Transform           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              Result_Transform               (Parm, OutParm, IsPlainOldData)

void ASplineSnag_C::Calculate_Chunk_Transform(bool Is_Uniform, int Current_Index, int Max_Index, float Spline_Length_Position, const struct FTransform& Mesh_Local_Transform, struct FTransform* Result_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineSnag.SplineSnag_C.Calculate Chunk Transform");

	ASplineSnag_C_Calculate_Chunk_Transform_Params params;
	params.Is_Uniform = Is_Uniform;
	params.Current_Index = Current_Index;
	params.Max_Index = Max_Index;
	params.Spline_Length_Position = Spline_Length_Position;
	params.Mesh_Local_Transform = Mesh_Local_Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result_Transform != nullptr)
		*Result_Transform = params.Result_Transform;
}


// Function SplineSnag.SplineSnag_C.Get Random Chunk Mesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESplineSection>    Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instance_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInstancedStaticMeshComponent* Mesh_Instance                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              Local_Transform                (Parm, OutParm, IsPlainOldData)
// float                          Mesh_Width                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             Mesh_Static                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASplineSnag_C::Get_Random_Chunk_Mesh(TEnumAsByte<ESplineSection> Section, bool Instance_Mesh, class UInstancedStaticMeshComponent** Mesh_Instance, struct FTransform* Local_Transform, float* Mesh_Width, class UStaticMesh** Mesh_Static)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineSnag.SplineSnag_C.Get Random Chunk Mesh");

	ASplineSnag_C_Get_Random_Chunk_Mesh_Params params;
	params.Section = Section;
	params.Instance_Mesh = Instance_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh_Instance != nullptr)
		*Mesh_Instance = params.Mesh_Instance;
	if (Local_Transform != nullptr)
		*Local_Transform = params.Local_Transform;
	if (Mesh_Width != nullptr)
		*Mesh_Width = params.Mesh_Width;
	if (Mesh_Static != nullptr)
		*Mesh_Static = params.Mesh_Static;
}


// Function SplineSnag.SplineSnag_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASplineSnag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineSnag.SplineSnag_C.UserConstructionScript");

	ASplineSnag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
