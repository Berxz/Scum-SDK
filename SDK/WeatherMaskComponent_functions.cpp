
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

// Function WeatherMaskComponent.WeatherMaskComponent_C.ShowComponents
// (Public, BlueprintCallable, BlueprintEvent)

void UWeatherMaskComponent_C::ShowComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.ShowComponents");

	UWeatherMaskComponent_C_ShowComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.HideComponents
// (Public, BlueprintCallable, BlueprintEvent)

void UWeatherMaskComponent_C::HideComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.HideComponents");

	UWeatherMaskComponent_C_HideComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UWeatherMaskComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveBeginPlay");

	UWeatherMaskComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.OnActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeatherMaskComponent_C::OnActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.OnActorDestroyed");

	UWeatherMaskComponent_C_OnActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.ExecuteUbergraph_WeatherMaskComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeatherMaskComponent_C::ExecuteUbergraph_WeatherMaskComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.ExecuteUbergraph_WeatherMaskComponent");

	UWeatherMaskComponent_C_ExecuteUbergraph_WeatherMaskComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
