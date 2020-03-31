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

// Function The_Island.The_Island_C.Recapture
struct AThe_Island_C_Recapture_Params
{
};

// Function The_Island.The_Island_C.WorldOriginLocationChanged
struct AThe_Island_C_WorldOriginLocationChanged_Params
{
	struct FIntVector*                                 OldOriginLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FIntVector*                                 NewOriginLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function The_Island.The_Island_C.ReceiveBeginPlay
struct AThe_Island_C_ReceiveBeginPlay_Params
{
};

// Function The_Island.The_Island_C.ExecuteUbergraph_The_Island
struct AThe_Island_C_ExecuteUbergraph_The_Island_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
