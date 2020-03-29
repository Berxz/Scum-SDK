
#include "../SDK.h"

// Name: , Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.ExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_M1_OpenEjectBulletInsertClip_C::ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.ExecuteUsingData");

	UBP_M1_OpenEjectBulletInsertClip_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_M1_OpenEjectBulletInsertClip_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.CanExecuteUsingData");

	UBP_M1_OpenEjectBulletInsertClip_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenEjectBulletInsertClip_C::ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip");

	UBP_M1_OpenEjectBulletInsertClip_C_ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
