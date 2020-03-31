
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

// Function BP_Pig.BP_Pig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Pig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pig.BP_Pig_C.UserConstructionScript");

	ABP_Pig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pig.BP_Pig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Pig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pig.BP_Pig_C.ReceiveBeginPlay");

	ABP_Pig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pig.BP_Pig_C.ExecuteUbergraph_BP_Pig
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pig_C::ExecuteUbergraph_BP_Pig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pig.BP_Pig_C.ExecuteUbergraph_BP_Pig");

	ABP_Pig_C_ExecuteUbergraph_BP_Pig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
