
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

// Function BP_Bear2.BP_Bear2_C.OnRep_TurnTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_Bear2_C::OnRep_TurnTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.OnRep_TurnTrigger");

	ABP_Bear2_C_OnRep_TurnTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bear2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.UserConstructionScript");

	ABP_Bear2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.ReceiveMoveCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bear2_C::ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ReceiveMoveCompleted_Event_1");

	ABP_Bear2_C_ReceiveMoveCompleted_Event_1_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.DrawPAth
// (BlueprintCallable, BlueprintEvent)

void ABP_Bear2_C::DrawPAth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.DrawPAth");

	ABP_Bear2_C_DrawPAth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bear2_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ReceivePossessed");

	ABP_Bear2_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Bear2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ReceiveBeginPlay");

	ABP_Bear2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.TurnLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_Bear2_C::TurnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.TurnLoop");

	ABP_Bear2_C_TurnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.TurnRPC
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Bear2_C::TurnRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.TurnRPC");

	ABP_Bear2_C_TurnRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bear2.BP_Bear2_C.ExecuteUbergraph_BP_Bear2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bear2_C::ExecuteUbergraph_BP_Bear2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ExecuteUbergraph_BP_Bear2");

	ABP_Bear2_C_ExecuteUbergraph_BP_Bear2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
