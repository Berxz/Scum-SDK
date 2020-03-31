
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

// Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.GetColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_DropZoneMiniStatsWidget_C::GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.GetColor");

	UUI_DropZoneMiniStatsWidget_C_GetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.UpdateStats
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneMiniStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.UpdateStats");

	UUI_DropZoneMiniStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.FillLabels
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneMiniStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.FillLabels");

	UUI_DropZoneMiniStatsWidget_C_FillLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.ExecuteUbergraph_UI_DropZoneMiniStatsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropZoneMiniStatsWidget_C::ExecuteUbergraph_UI_DropZoneMiniStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneMiniStatsWidget.UI_DropZoneMiniStatsWidget_C.ExecuteUbergraph_UI_DropZoneMiniStatsWidget");

	UUI_DropZoneMiniStatsWidget_C_ExecuteUbergraph_UI_DropZoneMiniStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
