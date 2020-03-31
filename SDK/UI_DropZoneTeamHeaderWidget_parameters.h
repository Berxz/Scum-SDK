#pragma once

#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.GetPlayerText
struct UUI_DropZoneTeamHeaderWidget_C_GetPlayerText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetTeamName
struct UUI_DropZoneTeamHeaderWidget_C_SetTeamName_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetTeamColours
struct UUI_DropZoneTeamHeaderWidget_C_SetTeamColours_Params
{
	struct FGameEventTeamColours*                      colours;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetLeftSide
struct UUI_DropZoneTeamHeaderWidget_C_SetLeftSide_Params
{
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetRightSide
struct UUI_DropZoneTeamHeaderWidget_C_SetRightSide_Params
{
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.SetGameEvent
struct UUI_DropZoneTeamHeaderWidget_C_SetGameEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.ClearWinCounters
struct UUI_DropZoneTeamHeaderWidget_C_ClearWinCounters_Params
{
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.AddWinCounter
struct UUI_DropZoneTeamHeaderWidget_C_AddWinCounter_Params
{
};

// Function UI_DropZoneTeamHeaderWidget.UI_DropZoneTeamHeaderWidget_C.ExecuteUbergraph_UI_DropZoneTeamHeaderWidget
struct UUI_DropZoneTeamHeaderWidget_C_ExecuteUbergraph_UI_DropZoneTeamHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
