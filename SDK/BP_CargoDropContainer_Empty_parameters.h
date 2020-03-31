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

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnDoorOpened
struct ABP_CargoDropContainer_Empty_C_OnDoorOpened_Params
{
};

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.UserConstructionScript
struct ABP_CargoDropContainer_Empty_C_UserConstructionScript_Params
{
};

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveBeginPlay
struct ABP_CargoDropContainer_Empty_C_ReceiveBeginPlay_Params
{
};

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveEndPlay
struct ABP_CargoDropContainer_Empty_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnWarning
struct ABP_CargoDropContainer_Empty_C_OnWarning_Params
{
};

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ExecuteUbergraph_BP_CargoDropContainer_Empty
struct ABP_CargoDropContainer_Empty_C_ExecuteUbergraph_BP_CargoDropContainer_Empty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
