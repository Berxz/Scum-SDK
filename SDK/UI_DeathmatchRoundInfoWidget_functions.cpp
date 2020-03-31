
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

// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetTimeLeftBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_DeathmatchRoundInfoWidget_C::GetTimeLeftBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetTimeLeftBoxVisibility");

	UUI_DeathmatchRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetRoundStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathmatchRoundInfoWidget_C::GetRoundStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetRoundStatus");

	UUI_DeathmatchRoundInfoWidget_C_GetRoundStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetTimeLeftText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathmatchRoundInfoWidget_C::GetTimeLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetTimeLeftText");

	UUI_DeathmatchRoundInfoWidget_C_GetTimeLeftText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetTimeLeftDescriptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathmatchRoundInfoWidget_C::GetTimeLeftDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetTimeLeftDescriptionText");

	UUI_DeathmatchRoundInfoWidget_C_GetTimeLeftDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetScoreLimit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_DeathmatchRoundInfoWidget_C::GetScoreLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.GetScoreLimit");

	UUI_DeathmatchRoundInfoWidget_C_GetScoreLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.SetGameEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathmatchRoundInfoWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.SetGameEvent");

	UUI_DeathmatchRoundInfoWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.ExecuteUbergraph_UI_DeathmatchRoundInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathmatchRoundInfoWidget_C::ExecuteUbergraph_UI_DeathmatchRoundInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchRoundInfoWidget.UI_DeathmatchRoundInfoWidget_C.ExecuteUbergraph_UI_DeathmatchRoundInfoWidget");

	UUI_DeathmatchRoundInfoWidget_C_ExecuteUbergraph_UI_DeathmatchRoundInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
