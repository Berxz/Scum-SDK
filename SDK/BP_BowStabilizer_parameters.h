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

// Function BP_BowStabilizer.BP_BowStabilizer_C.GetSpreadMultiplier
struct ABP_BowStabilizer_C_GetSpreadMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BowStabilizer.BP_BowStabilizer_C.UserConstructionScript
struct ABP_BowStabilizer_C_UserConstructionScript_Params
{
};

// Function BP_BowStabilizer.BP_BowStabilizer_C.ReceiveTick
struct ABP_BowStabilizer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowStabilizer.BP_BowStabilizer_C.OnAttachedToItem
struct ABP_BowStabilizer_C_OnAttachedToItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowStabilizer.BP_BowStabilizer_C.ExecuteUbergraph_BP_BowStabilizer
struct ABP_BowStabilizer_C_ExecuteUbergraph_BP_BowStabilizer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
