
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

// Function BP_WellSpring_02.BP_WellSpring_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WellSpring_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_02.BP_WellSpring_02_C.UserConstructionScript");

	ABP_WellSpring_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WellSpring_02.BP_WellSpring_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WellSpring_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_02.BP_WellSpring_02_C.ReceiveBeginPlay");

	ABP_WellSpring_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WellSpring_02.BP_WellSpring_02_C.ExecuteUbergraph_BP_WellSpring_02
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WellSpring_02_C::ExecuteUbergraph_BP_WellSpring_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_02.BP_WellSpring_02_C.ExecuteUbergraph_BP_WellSpring_02");

	ABP_WellSpring_02_C_ExecuteUbergraph_BP_WellSpring_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
