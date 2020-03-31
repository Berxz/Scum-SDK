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

// BlueprintGeneratedClass BP_BowStabilizer.BP_BowStabilizer_C
// 0x0008 (0x08A0 - 0x0898)
class ABP_BowStabilizer_C : public ABowAttachmentStabilizer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BowStabilizer.BP_BowStabilizer_C");
		return ptr;
	}


	float GetSpreadMultiplier();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnAttachedToItem(class AItem** Item);
	void ExecuteUbergraph_BP_BowStabilizer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
