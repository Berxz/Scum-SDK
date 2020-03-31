
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

// Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.FillLabels
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDeathmatchParticipantStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.FillLabels");

	UUI_TeamDeathmatchParticipantStatsWidget_C_FillLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.UpdateStats
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamDeathmatchParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.UpdateStats");

	UUI_TeamDeathmatchParticipantStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamDeathmatchParticipantStatsWidget_C::ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget");

	UUI_TeamDeathmatchParticipantStatsWidget_C_ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
