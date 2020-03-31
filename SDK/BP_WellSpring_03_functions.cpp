
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

// Function BP_WellSpring_03.BP_WellSpring_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WellSpring_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_03.BP_WellSpring_03_C.UserConstructionScript");

	ABP_WellSpring_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WellSpring_03.BP_WellSpring_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WellSpring_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_03.BP_WellSpring_03_C.ReceiveBeginPlay");

	ABP_WellSpring_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WellSpring_03.BP_WellSpring_03_C.ExecuteUbergraph_BP_WellSpring_03
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WellSpring_03_C::ExecuteUbergraph_BP_WellSpring_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_03.BP_WellSpring_03_C.ExecuteUbergraph_BP_WellSpring_03");

	ABP_WellSpring_03_C_ExecuteUbergraph_BP_WellSpring_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
