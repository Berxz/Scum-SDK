
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

// Function BPC_CargoDropContainer_Clothes.BPC_CargoDropContainer_Clothes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPC_CargoDropContainer_Clothes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CargoDropContainer_Clothes.BPC_CargoDropContainer_Clothes_C.UserConstructionScript");

	ABPC_CargoDropContainer_Clothes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
