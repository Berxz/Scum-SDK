
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

// Function BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ImprovisedFlashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C.UserConstructionScript");

	ABP_ImprovisedFlashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
