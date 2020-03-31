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

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.GetPlayerText
struct UUI_TeamDeathmatchTeamHeaderWidget_C_GetPlayerText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamName
struct UUI_TeamDeathmatchTeamHeaderWidget_C_SetTeamName_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamColours
struct UUI_TeamDeathmatchTeamHeaderWidget_C_SetTeamColours_Params
{
	struct FGameEventTeamColours*                      colours;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetLeftSide
struct UUI_TeamDeathmatchTeamHeaderWidget_C_SetLeftSide_Params
{
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetRightSide
struct UUI_TeamDeathmatchTeamHeaderWidget_C_SetRightSide_Params
{
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetGameEvent
struct UUI_TeamDeathmatchTeamHeaderWidget_C_SetGameEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ClearWinCounters
struct UUI_TeamDeathmatchTeamHeaderWidget_C_ClearWinCounters_Params
{
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.AddWinCounter
struct UUI_TeamDeathmatchTeamHeaderWidget_C_AddWinCounter_Params
{
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamScore
struct UUI_TeamDeathmatchTeamHeaderWidget_C_SetTeamScore_Params
{
	float*                                             Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget
struct UUI_TeamDeathmatchTeamHeaderWidget_C_ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
