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

// BlueprintGeneratedClass BP_Pig.BP_Pig_C
// 0x0008 (0x0D38 - 0x0D30)
class ABP_Pig_C : public ABP_Boar_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D30(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pig.BP_Pig_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Pig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
