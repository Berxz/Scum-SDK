
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

// Function Cave_B_2_1_WM.Cave_B_2_1_WM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACave_B_2_1_WM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cave_B_2_1_WM.Cave_B_2_1_WM_C.UserConstructionScript");

	ACave_B_2_1_WM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
