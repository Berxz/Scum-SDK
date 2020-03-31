
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

// Function BPC_CargoDropContainer_Zombies.BPC_CargoDropContainer_Zombies_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPC_CargoDropContainer_Zombies_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CargoDropContainer_Zombies.BPC_CargoDropContainer_Zombies_C.UserConstructionScript");

	ABPC_CargoDropContainer_Zombies_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CargoDropContainer_Zombies.BPC_CargoDropContainer_Zombies_C.OnDoorOpened
// (Public, BlueprintCallable, BlueprintEvent)

void ABPC_CargoDropContainer_Zombies_C::OnDoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CargoDropContainer_Zombies.BPC_CargoDropContainer_Zombies_C.OnDoorOpened");

	ABPC_CargoDropContainer_Zombies_C_OnDoorOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CargoDropContainer_Zombies.BPC_CargoDropContainer_Zombies_C.ExecuteUbergraph_BPC_CargoDropContainer_Zombies
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_CargoDropContainer_Zombies_C::ExecuteUbergraph_BPC_CargoDropContainer_Zombies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CargoDropContainer_Zombies.BPC_CargoDropContainer_Zombies_C.ExecuteUbergraph_BPC_CargoDropContainer_Zombies");

	ABPC_CargoDropContainer_Zombies_C_ExecuteUbergraph_BPC_CargoDropContainer_Zombies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
