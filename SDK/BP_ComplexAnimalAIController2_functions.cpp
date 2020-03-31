
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

// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ComplexAnimalAIController2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.UserConstructionScript");

	ABP_ComplexAnimalAIController2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ComplexAnimalAIController2_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.OnPossess");

	ABP_ComplexAnimalAIController2_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ComplexAnimalAIController2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveBeginPlay");

	ABP_ComplexAnimalAIController2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ComplexAnimalAIController2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveTick");

	ABP_ComplexAnimalAIController2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ExecuteUbergraph_BP_ComplexAnimalAIController2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ComplexAnimalAIController2_C::ExecuteUbergraph_BP_ComplexAnimalAIController2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ExecuteUbergraph_BP_ComplexAnimalAIController2");

	ABP_ComplexAnimalAIController2_C_ExecuteUbergraph_BP_ComplexAnimalAIController2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
