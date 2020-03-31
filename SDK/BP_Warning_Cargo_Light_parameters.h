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

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.GetLight
struct ABP_Warning_Cargo_Light_C_GetLight_Params
{
	bool                                               LightOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.SetLight
struct ABP_Warning_Cargo_Light_C_SetLight_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.UserConstructionScript
struct ABP_Warning_Cargo_Light_C_UserConstructionScript_Params
{
};

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ReceiveTick
struct ABP_Warning_Cargo_Light_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ExecuteUbergraph_BP_Warning_Cargo_Light
struct ABP_Warning_Cargo_Light_C_ExecuteUbergraph_BP_Warning_Cargo_Light_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
