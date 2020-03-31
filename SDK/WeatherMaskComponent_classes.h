#pragma once

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeatherMaskComponent.WeatherMaskComponent_C
// 0x0010 (0x0250 - 0x0240)
class UWeatherMaskComponent_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class AConZPlayerController*                       PlayerController;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherMaskComponent.WeatherMaskComponent_C");
		return ptr;
	}


	void ShowComponents();
	void HideComponents();
	void ReceiveBeginPlay();
	void OnActorDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_WeatherMaskComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
