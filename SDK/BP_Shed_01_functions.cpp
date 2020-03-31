
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

// Function BP_Shed_01.BP_Shed_01_C.GetWindowMarkers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWindowMarker>   Result                         (Parm, OutParm, ZeroConstructor)

void ABP_Shed_01_C::GetWindowMarkers(TArray<struct FWindowMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shed_01.BP_Shed_01_C.GetWindowMarkers");

	ABP_Shed_01_C_GetWindowMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Shed_01.BP_Shed_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shed_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shed_01.BP_Shed_01_C.UserConstructionScript");

	ABP_Shed_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
