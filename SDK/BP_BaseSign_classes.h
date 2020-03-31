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

// BlueprintGeneratedClass BP_BaseSign.BP_BaseSign_C
// 0x006C (0x0394 - 0x0328)
class ABP_BaseSign_C : public AActor
{
public:
	class UStaticMeshComponent*                        ArrowPlane;                                               // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0340(0x0018) (Edit, BlueprintVisible)
	float                                              FontSize;                                                 // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          TextMaterial;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextOffset;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ArrowOffset;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ArrowScale;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ESignArrowDirection>                   Direction;                                                // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0384(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseSign.BP_BaseSign_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
