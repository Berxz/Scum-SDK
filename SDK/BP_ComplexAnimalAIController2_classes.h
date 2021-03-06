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

// BlueprintGeneratedClass BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C
// 0x0008 (0x05E0 - 0x05D8)
class ABP_ComplexAnimalAIController2_C : public AComplexAnimalAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPossess(class APawn** PossessedPawn);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_ComplexAnimalAIController2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
