
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

// Function Team_01_5_Players_Equipment_Set.Team_01_5_Players_Equipment_Set_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeam_01_5_Players_Equipment_Set_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Team_01_5_Players_Equipment_Set.Team_01_5_Players_Equipment_Set_C.UserConstructionScript");

	ATeam_01_5_Players_Equipment_Set_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Team_01_5_Players_Equipment_Set.Team_01_5_Players_Equipment_Set_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATeam_01_5_Players_Equipment_Set_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Team_01_5_Players_Equipment_Set.Team_01_5_Players_Equipment_Set_C.ReceiveBeginPlay");

	ATeam_01_5_Players_Equipment_Set_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Team_01_5_Players_Equipment_Set.Team_01_5_Players_Equipment_Set_C.ExecuteUbergraph_Team_01_5_Players_Equipment_Set
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeam_01_5_Players_Equipment_Set_C::ExecuteUbergraph_Team_01_5_Players_Equipment_Set(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Team_01_5_Players_Equipment_Set.Team_01_5_Players_Equipment_Set_C.ExecuteUbergraph_Team_01_5_Players_Equipment_Set");

	ATeam_01_5_Players_Equipment_Set_C_ExecuteUbergraph_Team_01_5_Players_Equipment_Set_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
