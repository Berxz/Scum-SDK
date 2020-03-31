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

// Function BP_Bear2.BP_Bear2_C.OnRep_TurnTrigger
struct ABP_Bear2_C_OnRep_TurnTrigger_Params
{
};

// Function BP_Bear2.BP_Bear2_C.UserConstructionScript
struct ABP_Bear2_C_UserConstructionScript_Params
{
};

// Function BP_Bear2.BP_Bear2_C.ReceiveMoveCompleted_Event_1
struct ABP_Bear2_C_ReceiveMoveCompleted_Event_1_Params
{
	struct FAIRequestID                                RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bear2.BP_Bear2_C.DrawPAth
struct ABP_Bear2_C_DrawPAth_Params
{
};

// Function BP_Bear2.BP_Bear2_C.ReceivePossessed
struct ABP_Bear2_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bear2.BP_Bear2_C.ReceiveBeginPlay
struct ABP_Bear2_C_ReceiveBeginPlay_Params
{
};

// Function BP_Bear2.BP_Bear2_C.TurnLoop
struct ABP_Bear2_C_TurnLoop_Params
{
};

// Function BP_Bear2.BP_Bear2_C.TurnRPC
struct ABP_Bear2_C_TurnRPC_Params
{
};

// Function BP_Bear2.BP_Bear2_C.ExecuteUbergraph_BP_Bear2
struct ABP_Bear2_C_ExecuteUbergraph_BP_Bear2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
