
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

// Function BP_Bird2.BP_Bird2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bird2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2.BP_Bird2_C.UserConstructionScript");

	ABP_Bird2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bird2.BP_Bird2_C.ExecuteUbergraph_BP_Bird2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bird2_C::ExecuteUbergraph_BP_Bird2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2.BP_Bird2_C.ExecuteUbergraph_BP_Bird2");

	ABP_Bird2_C_ExecuteUbergraph_BP_Bird2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
