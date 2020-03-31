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

// BlueprintGeneratedClass BP_Bird2.BP_Bird2_C
// 0x0010 (0x0B30 - 0x0B20)
class ABP_Bird2_C : public ABird2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (Transient, DuplicateTransient)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bird2.BP_Bird2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Bird2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
