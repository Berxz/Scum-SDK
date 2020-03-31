
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

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.GetPlayerText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_TeamDeathmatchTeamHeaderWidget_C::GetPlayerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.GetPlayerText");

	UUI_TeamDeathmatchTeamHeaderWidget_C_GetPlayerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetTeamName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamName");

	UUI_TeamDeathmatchTeamHeaderWidget_C_SetTeamName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamColours
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameEventTeamColours*  colours                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetTeamColours(struct FGameEventTeamColours* colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamColours");

	UUI_TeamDeathmatchTeamHeaderWidget_C_SetTeamColours_Params params;
	params.colours = colours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetLeftSide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetLeftSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetLeftSide");

	UUI_TeamDeathmatchTeamHeaderWidget_C_SetLeftSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetRightSide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetRightSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetRightSide");

	UUI_TeamDeathmatchTeamHeaderWidget_C_SetRightSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetGameEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetGameEvent");

	UUI_TeamDeathmatchTeamHeaderWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ClearWinCounters
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::ClearWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ClearWinCounters");

	UUI_TeamDeathmatchTeamHeaderWidget_C_ClearWinCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.AddWinCounter
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::AddWinCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.AddWinCounter");

	UUI_TeamDeathmatchTeamHeaderWidget_C_AddWinCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetTeamScore(float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamScore");

	UUI_TeamDeathmatchTeamHeaderWidget_C_SetTeamScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDeathmatchTeamHeaderWidget_C::ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget");

	UUI_TeamDeathmatchTeamHeaderWidget_C_ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
