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

// BlueprintGeneratedClass The_Island.The_Island_C
// 0x0020 (0x0350 - 0x0330)
class AThe_Island_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	float                                              TimeDilation;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseSensitivityPitchScale;                               // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseSensitivityYawScale;                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class AWeatherController_C*                        WeatherController_ExecuteUbergraph_The_Island_RefProperty;// 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass The_Island.The_Island_C");
		return ptr;
	}


	void Recapture();
	void WorldOriginLocationChanged(struct FIntVector* OldOriginLocation, struct FIntVector* NewOriginLocation);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_The_Island(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
