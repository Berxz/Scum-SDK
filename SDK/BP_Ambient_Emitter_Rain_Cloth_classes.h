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

// BlueprintGeneratedClass BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C
// 0x0010 (0x0338 - 0x0328)
class ABP_Ambient_Emitter_Rain_Cloth_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ambient_Emitter_Rain_Cloth.BP_Ambient_Emitter_Rain_Cloth_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Ambient_Emitter_Rain_Cloth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
