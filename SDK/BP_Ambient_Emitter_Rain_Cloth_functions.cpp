
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

// Function BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ambient_Emitter_Rain_Cloth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C.UserConstructionScript");

	ABP_Ambient_Emitter_Rain_Cloth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ambient_Emitter_Rain_Cloth_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C.ReceiveBeginPlay");

	ABP_Ambient_Emitter_Rain_Cloth_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C.ExecuteUbergraph_BP_Ambient_Emitter_Rain_Cloth
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ambient_Emitter_Rain_Cloth_C::ExecuteUbergraph_BP_Ambient_Emitter_Rain_Cloth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C.ExecuteUbergraph_BP_Ambient_Emitter_Rain_Cloth");

	ABP_Ambient_Emitter_Rain_Cloth_C_ExecuteUbergraph_BP_Ambient_Emitter_Rain_Cloth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
