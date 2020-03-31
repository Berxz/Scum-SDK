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

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.killUnused
struct UukRoadSignsFunc_C_killUnused_Params
{
	class UStaticMeshComponent*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setBracketWidth
struct UukRoadSignsFunc_C_setBracketWidth_Params
{
	class UStaticMeshComponent*                        Sign;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               isTopBracket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 bracketMesh;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               lookupfailed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.SetSize
struct UukRoadSignsFunc_C_SetSize_Params
{
	class UStaticMeshComponent*                        StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EukRoadSignSize>                       SignSizeEmumerator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshWithSize;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setSignFace
struct UukRoadSignsFunc_C_setSignFace_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       signFaceSet;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	TArray<struct FLinearColor>                        colorData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               colorNames;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshWithMesh;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    materialWithFace;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               setSignFaceFailed;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.selectSignFace
struct UukRoadSignsFunc_C_selectSignFace_Params
{
	bool                                               defaultSign;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       primary;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       secondary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      primaryIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      secondaryIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Previous;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       signFaceSelection;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      primaryReturn;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      secondaryReturn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setCondition
struct UukRoadSignsFunc_C_setCondition_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       conditionSet;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialWithCondition;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               setConditionFailed;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.getMasterMaterialSign
struct UukRoadSignsFunc_C_getMasterMaterialSign_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   masterMaterial;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setShine
struct UukRoadSignsFunc_C_setShine_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       shineSet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    materialWithShine;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               setShineFailed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setColors
struct UukRoadSignsFunc_C_setColors_Params
{
	struct FName                                       colourSet;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        colorValues;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               colorNames;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               setColorFailed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
