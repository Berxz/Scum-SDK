
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

// Function SM_Stone_House_07_Blueprint.SM_Stone_House_07_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASM_Stone_House_07_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Stone_House_07_Blueprint.SM_Stone_House_07_Blueprint_C.UserConstructionScript");

	ASM_Stone_House_07_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
