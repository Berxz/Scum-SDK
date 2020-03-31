
#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BowStabilizer.BP_BowStabilizer_C.GetSpreadMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_BowStabilizer_C::GetSpreadMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowStabilizer.BP_BowStabilizer_C.GetSpreadMultiplier");

	ABP_BowStabilizer_C_GetSpreadMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BowStabilizer.BP_BowStabilizer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BowStabilizer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowStabilizer.BP_BowStabilizer_C.UserConstructionScript");

	ABP_BowStabilizer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowStabilizer.BP_BowStabilizer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowStabilizer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowStabilizer.BP_BowStabilizer_C.ReceiveTick");

	ABP_BowStabilizer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowStabilizer.BP_BowStabilizer_C.OnAttachedToItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowStabilizer_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowStabilizer.BP_BowStabilizer_C.OnAttachedToItem");

	ABP_BowStabilizer_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowStabilizer.BP_BowStabilizer_C.ExecuteUbergraph_BP_BowStabilizer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowStabilizer_C::ExecuteUbergraph_BP_BowStabilizer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowStabilizer.BP_BowStabilizer_C.ExecuteUbergraph_BP_BowStabilizer");

	ABP_BowStabilizer_C_ExecuteUbergraph_BP_BowStabilizer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
