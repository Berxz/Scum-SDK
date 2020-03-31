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

// Function BP_Cow2.BP_Cow2_C.UserConstructionScript
struct ABP_Cow2_C_UserConstructionScript_Params
{
};

// Function BP_Cow2.BP_Cow2_C.ReceiveActorBeginOverlap
struct ABP_Cow2_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Cow2.BP_Cow2_C.ExecuteUbergraph_BP_Cow2
struct ABP_Cow2_C_ExecuteUbergraph_BP_Cow2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
