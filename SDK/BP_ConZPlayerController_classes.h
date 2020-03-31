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

// BlueprintGeneratedClass BP_ConZPlayerController.BP_ConZPlayerController_C
// 0x0010 (0x0968 - 0x0958)
class ABP_ConZPlayerController_C : public AConZPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UUI_GameMenu_C*                              GameMenu;                                                 // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConZPlayerController.BP_ConZPlayerController_C");
		return ptr;
	}


	void ToggleGameMenu();
	void CreateGameMenu();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ToggleGameMenuEvent();
	void ExecuteUbergraph_BP_ConZPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
