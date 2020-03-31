
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

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.GetLight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Warning_Cargo_Light_C::GetLight(bool* LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.GetLight");

	ABP_Warning_Cargo_Light_C_GetLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightOn != nullptr)
		*LightOn = params.LightOn;
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.SetLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warning_Cargo_Light_C::SetLight(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.SetLight");

	ABP_Warning_Cargo_Light_C_SetLight_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Warning_Cargo_Light_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.UserConstructionScript");

	ABP_Warning_Cargo_Light_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warning_Cargo_Light_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ReceiveTick");

	ABP_Warning_Cargo_Light_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ExecuteUbergraph_BP_Warning_Cargo_Light
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warning_Cargo_Light_C::ExecuteUbergraph_BP_Warning_Cargo_Light(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ExecuteUbergraph_BP_Warning_Cargo_Light");

	ABP_Warning_Cargo_Light_C_ExecuteUbergraph_BP_Warning_Cargo_Light_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
