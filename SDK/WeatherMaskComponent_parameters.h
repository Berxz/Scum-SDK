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

// Function WeatherMaskComponent.WeatherMaskComponent_C.ShowComponents
struct UWeatherMaskComponent_C_ShowComponents_Params
{
};

// Function WeatherMaskComponent.WeatherMaskComponent_C.HideComponents
struct UWeatherMaskComponent_C_HideComponents_Params
{
};

// Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveBeginPlay
struct UWeatherMaskComponent_C_ReceiveBeginPlay_Params
{
};

// Function WeatherMaskComponent.WeatherMaskComponent_C.OnActorDestroyed
struct UWeatherMaskComponent_C_OnActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeatherMaskComponent.WeatherMaskComponent_C.ExecuteUbergraph_WeatherMaskComponent
struct UWeatherMaskComponent_C_ExecuteUbergraph_WeatherMaskComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
