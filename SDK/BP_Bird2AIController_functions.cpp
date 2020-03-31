
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

// Function BP_Bird2AIController.BP_Bird2AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bird2AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2AIController.BP_Bird2AIController_C.UserConstructionScript");

	ABP_Bird2AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bird2AIController.BP_Bird2AIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bird2AIController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2AIController.BP_Bird2AIController_C.ReceiveTick");

	ABP_Bird2AIController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bird2AIController.BP_Bird2AIController_C.ExecuteUbergraph_BP_Bird2AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bird2AIController_C::ExecuteUbergraph_BP_Bird2AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2AIController.BP_Bird2AIController_C.ExecuteUbergraph_BP_Bird2AIController");

	ABP_Bird2AIController_C_ExecuteUbergraph_BP_Bird2AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
