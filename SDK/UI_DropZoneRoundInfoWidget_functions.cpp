
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

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetRoundStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DropZoneRoundInfoWidget_C::GetRoundStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetRoundStatus");

	UUI_DropZoneRoundInfoWidget_C_GetRoundStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetObjectiveText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DropZoneRoundInfoWidget_C::GetObjectiveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetObjectiveText");

	UUI_DropZoneRoundInfoWidget_C_GetObjectiveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_DropZoneRoundInfoWidget_C::GetTimeLeftBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftBoxVisibility");

	UUI_DropZoneRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftDescriptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DropZoneRoundInfoWidget_C::GetTimeLeftDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftDescriptionText");

	UUI_DropZoneRoundInfoWidget_C_GetTimeLeftDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DropZoneRoundInfoWidget_C::GetTimeLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftText");

	UUI_DropZoneRoundInfoWidget_C_GetTimeLeftText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetPhaseText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DropZoneRoundInfoWidget_C::GetPhaseText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetPhaseText");

	UUI_DropZoneRoundInfoWidget_C_GetPhaseText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.SetGameEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropZoneRoundInfoWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.SetGameEvent");

	UUI_DropZoneRoundInfoWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.ExecuteUbergraph_UI_DropZoneRoundInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropZoneRoundInfoWidget_C::ExecuteUbergraph_UI_DropZoneRoundInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.ExecuteUbergraph_UI_DropZoneRoundInfoWidget");

	UUI_DropZoneRoundInfoWidget_C_ExecuteUbergraph_UI_DropZoneRoundInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
