
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

// Function The_Island.The_Island_C.Recapture
// (BlueprintCallable, BlueprintEvent)

void AThe_Island_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.Recapture");

	AThe_Island_C_Recapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function The_Island.The_Island_C.WorldOriginLocationChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FIntVector*             OldOriginLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FIntVector*             NewOriginLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AThe_Island_C::WorldOriginLocationChanged(struct FIntVector* OldOriginLocation, struct FIntVector* NewOriginLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.WorldOriginLocationChanged");

	AThe_Island_C_WorldOriginLocationChanged_Params params;
	params.OldOriginLocation = OldOriginLocation;
	params.NewOriginLocation = NewOriginLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function The_Island.The_Island_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AThe_Island_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.ReceiveBeginPlay");

	AThe_Island_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function The_Island.The_Island_C.ExecuteUbergraph_The_Island
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThe_Island_C::ExecuteUbergraph_The_Island(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.ExecuteUbergraph_The_Island");

	AThe_Island_C_ExecuteUbergraph_The_Island_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
