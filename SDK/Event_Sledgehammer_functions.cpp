
#include "../SDK.h"

// Name: , Version: 0.3.21000

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Event_Sledgehammer.Event_Sledgehammer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEvent_Sledgehammer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Event_Sledgehammer.Event_Sledgehammer_C.UserConstructionScript");

	AEvent_Sledgehammer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
