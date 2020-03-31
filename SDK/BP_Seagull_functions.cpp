
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

// Function BP_Seagull.BP_Seagull_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Seagull_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull.BP_Seagull_C.UserConstructionScript");

	ABP_Seagull_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Seagull.BP_Seagull_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Seagull_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull.BP_Seagull_C.ReceiveBeginPlay");

	ABP_Seagull_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Seagull.BP_Seagull_C.ExecuteUbergraph_BP_Seagull
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Seagull_C::ExecuteUbergraph_BP_Seagull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull.BP_Seagull_C.ExecuteUbergraph_BP_Seagull");

	ABP_Seagull_C_ExecuteUbergraph_BP_Seagull_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
