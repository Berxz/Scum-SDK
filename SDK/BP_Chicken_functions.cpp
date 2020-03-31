
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

// Function BP_Chicken.BP_Chicken_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chicken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.UserConstructionScript");

	ABP_Chicken_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Chicken_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay");

	ABP_Chicken_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chicken.BP_Chicken_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chicken_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ReceiveTick");

	ABP_Chicken_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chicken_C::ExecuteUbergraph_BP_Chicken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken");

	ABP_Chicken_C_ExecuteUbergraph_BP_Chicken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
