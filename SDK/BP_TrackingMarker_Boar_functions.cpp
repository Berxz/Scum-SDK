
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

// Function BP_TrackingMarker_Boar.BP_TrackingMarker_Boar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrackingMarker_Boar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrackingMarker_Boar.BP_TrackingMarker_Boar_C.UserConstructionScript");

	ABP_TrackingMarker_Boar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
