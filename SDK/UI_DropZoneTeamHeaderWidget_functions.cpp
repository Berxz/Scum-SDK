
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

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.GetPlayerText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DropZoneTeamHeaderWidget_C::GetPlayerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.GetPlayerText");

	UUI_DropZoneTeamHeaderWidget_C_GetPlayerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetTeamName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_DropZoneTeamHeaderWidget_C::SetTeamName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetTeamName");

	UUI_DropZoneTeamHeaderWidget_C_SetTeamName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetTeamColours
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameEventTeamColours*  colours                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_DropZoneTeamHeaderWidget_C::SetTeamColours(struct FGameEventTeamColours* colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetTeamColours");

	UUI_DropZoneTeamHeaderWidget_C_SetTeamColours_Params params;
	params.colours = colours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetLeftSide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneTeamHeaderWidget_C::SetLeftSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetLeftSide");

	UUI_DropZoneTeamHeaderWidget_C_SetLeftSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetRightSide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneTeamHeaderWidget_C::SetRightSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetRightSide");

	UUI_DropZoneTeamHeaderWidget_C_SetRightSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetGameEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropZoneTeamHeaderWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetGameEvent");

	UUI_DropZoneTeamHeaderWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.ClearWinCounters
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneTeamHeaderWidget_C::ClearWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.ClearWinCounters");

	UUI_DropZoneTeamHeaderWidget_C_ClearWinCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.AddWinCounter
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneTeamHeaderWidget_C::AddWinCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.AddWinCounter");

	UUI_DropZoneTeamHeaderWidget_C_AddWinCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.ExecuteUbergraph_UI_DropZoneTeamHeaderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropZoneTeamHeaderWidget_C::ExecuteUbergraph_UI_DropZoneTeamHeaderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.ExecuteUbergraph_UI_DropZoneTeamHeaderWidget");

	UUI_DropZoneTeamHeaderWidget_C_ExecuteUbergraph_UI_DropZoneTeamHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
