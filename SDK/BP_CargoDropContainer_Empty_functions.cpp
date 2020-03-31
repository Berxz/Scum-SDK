
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

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnDoorOpened
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::OnDoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnDoorOpened");

	ABP_CargoDropContainer_Empty_C_OnDoorOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.UserConstructionScript");

	ABP_CargoDropContainer_Empty_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveBeginPlay");

	ABP_CargoDropContainer_Empty_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CargoDropContainer_Empty_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveEndPlay");

	ABP_CargoDropContainer_Empty_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnWarning
// (Event, Public, BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::OnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnWarning");

	ABP_CargoDropContainer_Empty_C_OnWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ExecuteUbergraph_BP_CargoDropContainer_Empty
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CargoDropContainer_Empty_C::ExecuteUbergraph_BP_CargoDropContainer_Empty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ExecuteUbergraph_BP_CargoDropContainer_Empty");

	ABP_CargoDropContainer_Empty_C_ExecuteUbergraph_BP_CargoDropContainer_Empty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
