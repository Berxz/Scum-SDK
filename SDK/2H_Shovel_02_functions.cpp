
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

// Function 2H_Shovel_02.2H_Shovel_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A2H_Shovel_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 2H_Shovel_02.2H_Shovel_02_C.UserConstructionScript");

	A2H_Shovel_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
