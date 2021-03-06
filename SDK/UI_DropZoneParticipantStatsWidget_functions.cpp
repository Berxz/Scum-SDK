
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

// Function UI_DropZoneParticipantStatsWidget.UI_DropZoneParticipantStatsWidget_C.UpdateStats
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneParticipantStatsWidget.UI_DropZoneParticipantStatsWidget_C.UpdateStats");

	UUI_DropZoneParticipantStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneParticipantStatsWidget.UI_DropZoneParticipantStatsWidget_C.FillLabels
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropZoneParticipantStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneParticipantStatsWidget.UI_DropZoneParticipantStatsWidget_C.FillLabels");

	UUI_DropZoneParticipantStatsWidget_C_FillLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropZoneParticipantStatsWidget.UI_DropZoneParticipantStatsWidget_C.ExecuteUbergraph_UI_DropZoneParticipantStatsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropZoneParticipantStatsWidget_C::ExecuteUbergraph_UI_DropZoneParticipantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropZoneParticipantStatsWidget.UI_DropZoneParticipantStatsWidget_C.ExecuteUbergraph_UI_DropZoneParticipantStatsWidget");

	UUI_DropZoneParticipantStatsWidget_C_ExecuteUbergraph_UI_DropZoneParticipantStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
