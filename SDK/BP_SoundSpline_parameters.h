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

// Function BP_SoundSpline.BP_SoundSpline_C.UserConstructionScript
struct ABP_SoundSpline_C_UserConstructionScript_Params
{
};

// Function BP_SoundSpline.BP_SoundSpline_C.ReceiveBeginPlay
struct ABP_SoundSpline_C_ReceiveBeginPlay_Params
{
};

// Function BP_SoundSpline.BP_SoundSpline_C.ReceiveEndPlay
struct ABP_SoundSpline_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundSpline.BP_SoundSpline_C.ExecuteUbergraph_BP_SoundSpline
struct ABP_SoundSpline_C_ExecuteUbergraph_BP_SoundSpline_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
