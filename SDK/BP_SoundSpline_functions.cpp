
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

// Function BP_SoundSpline.BP_SoundSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SoundSpline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundSpline.BP_SoundSpline_C.UserConstructionScript");

	ABP_SoundSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundSpline.BP_SoundSpline_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SoundSpline_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundSpline.BP_SoundSpline_C.ReceiveBeginPlay");

	ABP_SoundSpline_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundSpline.BP_SoundSpline_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundSpline_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundSpline.BP_SoundSpline_C.ReceiveEndPlay");

	ABP_SoundSpline_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundSpline.BP_SoundSpline_C.ExecuteUbergraph_BP_SoundSpline
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundSpline_C::ExecuteUbergraph_BP_SoundSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundSpline.BP_SoundSpline_C.ExecuteUbergraph_BP_SoundSpline");

	ABP_SoundSpline_C_ExecuteUbergraph_BP_SoundSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
