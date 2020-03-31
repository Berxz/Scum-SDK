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

// BlueprintGeneratedClass ukRoadSignsFunc.ukRoadSignsFunc_C
// 0x0000 (0x0028 - 0x0028)
class UukRoadSignsFunc_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ukRoadSignsFunc.ukRoadSignsFunc_C");
		return ptr;
	}


	void STATIC_killUnused(class UStaticMeshComponent* Item, class UObject* __WorldContext);
	void STATIC_setBracketWidth(class UStaticMeshComponent* Sign, bool isTopBracket, class UObject* __WorldContext, class UStaticMesh** bracketMesh, bool* lookupfailed);
	void STATIC_SetSize(class UStaticMeshComponent* StaticMesh, TEnumAsByte<EukRoadSignSize> SignSizeEmumerator, class UObject* __WorldContext, class UStaticMeshComponent** StaticMeshWithSize);
	void STATIC_setSignFace(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* signFaceSet, class UStaticMeshComponent** StaticMesh, TArray<struct FLinearColor>* colorData, TArray<struct FName>* colorNames, class UStaticMeshComponent** StaticMeshWithMesh, class UMaterialInstanceDynamic** materialWithFace, bool* setSignFaceFailed);
	void STATIC_selectSignFace(bool defaultSign, const struct FName& primary, const struct FName& secondary, unsigned char primaryIndex, unsigned char secondaryIndex, const struct FName& Previous, class UObject* __WorldContext, struct FName* signFaceSelection, unsigned char* primaryReturn, unsigned char* secondaryReturn);
	void STATIC_setCondition(class UMaterialInstanceDynamic* Material, const struct FName& conditionSet, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialWithCondition, bool* setConditionFailed);
	void STATIC_getMasterMaterialSign(class UObject* __WorldContext, class UMaterial** masterMaterial);
	void STATIC_setShine(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* shineSet, class UMaterialInstanceDynamic** materialWithShine, bool* setShineFailed);
	void STATIC_setColors(class UObject* __WorldContext, struct FName* colourSet, TArray<struct FLinearColor>* colorValues, TArray<struct FName>* colorNames, bool* setColorFailed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
