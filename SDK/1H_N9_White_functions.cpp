
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

// Function 1H_N9_White.1H_N9_White_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A1H_N9_White_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 1H_N9_White.1H_N9_White_C.UserConstructionScript");

	A1H_N9_White_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
