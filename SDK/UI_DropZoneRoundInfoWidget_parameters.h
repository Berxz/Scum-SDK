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

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetRoundStatus
struct UUI_DropZoneRoundInfoWidget_C_GetRoundStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetObjectiveText
struct UUI_DropZoneRoundInfoWidget_C_GetObjectiveText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftBoxVisibility
struct UUI_DropZoneRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftDescriptionText
struct UUI_DropZoneRoundInfoWidget_C_GetTimeLeftDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetTimeLeftText
struct UUI_DropZoneRoundInfoWidget_C_GetTimeLeftText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.GetPhaseText
struct UUI_DropZoneRoundInfoWidget_C_GetPhaseText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.SetGameEvent
struct UUI_DropZoneRoundInfoWidget_C_SetGameEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DropZoneRoundInfoWidget.UI_DropZoneRoundInfoWidget_C.ExecuteUbergraph_UI_DropZoneRoundInfoWidget
struct UUI_DropZoneRoundInfoWidget_C_ExecuteUbergraph_UI_DropZoneRoundInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
