
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

// Function BP_Boar.BP_Boar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Boar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boar.BP_Boar_C.UserConstructionScript");

	ABP_Boar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boar.BP_Boar_C.ExecuteUbergraph_BP_Boar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boar_C::ExecuteUbergraph_BP_Boar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boar.BP_Boar_C.ExecuteUbergraph_BP_Boar");

	ABP_Boar_C_ExecuteUbergraph_BP_Boar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
