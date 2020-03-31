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

// BlueprintGeneratedClass BP_Cow2.BP_Cow2_C
// 0x000F (0x0D48 - 0x0D39)
class ABP_Cow2_C : public ABP_Bear2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D39(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cow2.BP_Cow2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_Cow2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
