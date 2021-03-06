
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

// Function BP_BloodMarker2.BP_BloodMarker2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BloodMarker2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodMarker2.BP_BloodMarker2_C.UserConstructionScript");

	ABP_BloodMarker2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodMarker2.BP_BloodMarker2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BloodMarker2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodMarker2.BP_BloodMarker2_C.ReceiveBeginPlay");

	ABP_BloodMarker2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodMarker2.BP_BloodMarker2_C.ExecuteUbergraph_BP_BloodMarker2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodMarker2_C::ExecuteUbergraph_BP_BloodMarker2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodMarker2.BP_BloodMarker2_C.ExecuteUbergraph_BP_BloodMarker2");

	ABP_BloodMarker2_C_ExecuteUbergraph_BP_BloodMarker2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
