#pragma once

#include "../SDK.h"

// Name: , Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_M1_OpenInsertClipInsertBulletLoop.BP_M1_OpenInsertClipInsertBulletLoop_C.ExecuteUsingData
struct UBP_M1_OpenInsertClipInsertBulletLoop_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenInsertClipInsertBulletLoop.BP_M1_OpenInsertClipInsertBulletLoop_C.CanExecuteUsingData
struct UBP_M1_OpenInsertClipInsertBulletLoop_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenInsertClipInsertBulletLoop.BP_M1_OpenInsertClipInsertBulletLoop_C.OnActionAnimNotify
struct UBP_M1_OpenInsertClipInsertBulletLoop_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType*                        notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_M1_OpenInsertClipInsertBulletLoop.BP_M1_OpenInsertClipInsertBulletLoop_C.ExecuteUbergraph_BP_M1_OpenInsertClipInsertBulletLoop
struct UBP_M1_OpenInsertClipInsertBulletLoop_C_ExecuteUbergraph_BP_M1_OpenInsertClipInsertBulletLoop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
