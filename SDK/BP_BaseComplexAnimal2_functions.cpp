
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

// Function BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseComplexAnimal2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C.UserConstructionScript");

	ABP_BaseComplexAnimal2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C.ExecuteUbergraph_BP_BaseComplexAnimal2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseComplexAnimal2_C::ExecuteUbergraph_BP_BaseComplexAnimal2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C.ExecuteUbergraph_BP_BaseComplexAnimal2");

	ABP_BaseComplexAnimal2_C_ExecuteUbergraph_BP_BaseComplexAnimal2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BaseComplexAnimal2_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C.NewEventDispatcher_0__DelegateSignature");

	ABP_BaseComplexAnimal2_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
