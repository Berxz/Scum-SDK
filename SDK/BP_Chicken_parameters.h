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

// Function BP_Chicken.BP_Chicken_C.UserConstructionScript
struct ABP_Chicken_C_UserConstructionScript_Params
{
};

// Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay
struct ABP_Chicken_C_ReceiveBeginPlay_Params
{
};

// Function BP_Chicken.BP_Chicken_C.ReceiveTick
struct ABP_Chicken_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken
struct ABP_Chicken_C_ExecuteUbergraph_BP_Chicken_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
