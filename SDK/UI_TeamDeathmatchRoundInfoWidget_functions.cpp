
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

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_TeamDeathmatchRoundInfoWidget_C::GetTimeLeftBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftBoxVisibility");

	UUI_TeamDeathmatchRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetRoundStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_TeamDeathmatchRoundInfoWidget_C::GetRoundStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetRoundStatus");

	UUI_TeamDeathmatchRoundInfoWidget_C_GetRoundStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_TeamDeathmatchRoundInfoWidget_C::GetTimeLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftText");

	UUI_TeamDeathmatchRoundInfoWidget_C_GetTimeLeftText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftDescriptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_TeamDeathmatchRoundInfoWidget_C::GetTimeLeftDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftDescriptionText");

	UUI_TeamDeathmatchRoundInfoWidget_C_GetTimeLeftDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetScoreLimit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_TeamDeathmatchRoundInfoWidget_C::GetScoreLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetScoreLimit");

	UUI_TeamDeathmatchRoundInfoWidget_C_GetScoreLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.SetGameEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDeathmatchRoundInfoWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.SetGameEvent");

	UUI_TeamDeathmatchRoundInfoWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.ExecuteUbergraph_UI_TeamDeathmatchRoundInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDeathmatchRoundInfoWidget_C::ExecuteUbergraph_UI_TeamDeathmatchRoundInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.ExecuteUbergraph_UI_TeamDeathmatchRoundInfoWidget");

	UUI_TeamDeathmatchRoundInfoWidget_C_ExecuteUbergraph_UI_TeamDeathmatchRoundInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
