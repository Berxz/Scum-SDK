
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

// Function 2H_Metal_Axe.2H_Metal_Axe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A2H_Metal_Axe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 2H_Metal_Axe.2H_Metal_Axe_C.UserConstructionScript");

	A2H_Metal_Axe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
