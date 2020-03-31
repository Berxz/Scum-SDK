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

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftBoxVisibility
struct UUI_TeamDeathmatchRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetRoundStatus
struct UUI_TeamDeathmatchRoundInfoWidget_C_GetRoundStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftText
struct UUI_TeamDeathmatchRoundInfoWidget_C_GetTimeLeftText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetTimeLeftDescriptionText
struct UUI_TeamDeathmatchRoundInfoWidget_C_GetTimeLeftDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.GetScoreLimit
struct UUI_TeamDeathmatchRoundInfoWidget_C_GetScoreLimit_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.SetGameEvent
struct UUI_TeamDeathmatchRoundInfoWidget_C_SetGameEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TeamDeathmatchRoundInfoWidget.UI_TeamDeathmatchRoundInfoWidget_C.ExecuteUbergraph_UI_TeamDeathmatchRoundInfoWidget
struct UUI_TeamDeathmatchRoundInfoWidget_C_ExecuteUbergraph_UI_TeamDeathmatchRoundInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
