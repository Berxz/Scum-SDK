
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

// Function BP_Continental_House_07_Stable.BP_Continental_House_07_Stable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Continental_House_07_Stable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Continental_House_07_Stable.BP_Continental_House_07_Stable_C.UserConstructionScript");

	ABP_Continental_House_07_Stable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif