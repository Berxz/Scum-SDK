
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

// Function BP_ConZPlayerController.BP_ConZPlayerController_C.ToggleGameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ConZPlayerController_C::ToggleGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZPlayerController.BP_ConZPlayerController_C.ToggleGameMenu");

	ABP_ConZPlayerController_C_ToggleGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConZPlayerController.BP_ConZPlayerController_C.CreateGameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ConZPlayerController_C::CreateGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZPlayerController.BP_ConZPlayerController_C.CreateGameMenu");

	ABP_ConZPlayerController_C_CreateGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConZPlayerController.BP_ConZPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ConZPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZPlayerController.BP_ConZPlayerController_C.UserConstructionScript");

	ABP_ConZPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConZPlayerController.BP_ConZPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ConZPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZPlayerController.BP_ConZPlayerController_C.ReceiveBeginPlay");

	ABP_ConZPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConZPlayerController.BP_ConZPlayerController_C.ToggleGameMenuEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ConZPlayerController_C::ToggleGameMenuEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZPlayerController.BP_ConZPlayerController_C.ToggleGameMenuEvent");

	ABP_ConZPlayerController_C_ToggleGameMenuEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConZPlayerController.BP_ConZPlayerController_C.ExecuteUbergraph_BP_ConZPlayerController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConZPlayerController_C::ExecuteUbergraph_BP_ConZPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZPlayerController.BP_ConZPlayerController_C.ExecuteUbergraph_BP_ConZPlayerController");

	ABP_ConZPlayerController_C_ExecuteUbergraph_BP_ConZPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
