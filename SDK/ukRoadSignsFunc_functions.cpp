
#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.killUnused
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_killUnused(class UStaticMeshComponent* Item, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.killUnused");

	UukRoadSignsFunc_C_killUnused_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setBracketWidth
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Sign                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           isTopBracket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             bracketMesh                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           lookupfailed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_setBracketWidth(class UStaticMeshComponent* Sign, bool isTopBracket, class UObject* __WorldContext, class UStaticMesh** bracketMesh, bool* lookupfailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setBracketWidth");

	UukRoadSignsFunc_C_setBracketWidth_Params params;
	params.Sign = Sign;
	params.isTopBracket = isTopBracket;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bracketMesh != nullptr)
		*bracketMesh = params.bracketMesh;
	if (lookupfailed != nullptr)
		*lookupfailed = params.lookupfailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.SetSize
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EukRoadSignSize>   SignSizeEmumerator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    StaticMeshWithSize             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_SetSize(class UStaticMeshComponent* StaticMesh, TEnumAsByte<EukRoadSignSize> SignSizeEmumerator, class UObject* __WorldContext, class UStaticMeshComponent** StaticMeshWithSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.SetSize");

	UukRoadSignsFunc_C_SetSize_Params params;
	params.StaticMesh = StaticMesh;
	params.SignSizeEmumerator = SignSizeEmumerator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMeshWithSize != nullptr)
		*StaticMeshWithSize = params.StaticMeshWithSize;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setSignFace
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   signFaceSet                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UStaticMeshComponent*    StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// TArray<struct FLinearColor>    colorData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           colorNames                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    StaticMeshWithMesh             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* materialWithFace               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           setSignFaceFailed              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_setSignFace(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* signFaceSet, class UStaticMeshComponent** StaticMesh, TArray<struct FLinearColor>* colorData, TArray<struct FName>* colorNames, class UStaticMeshComponent** StaticMeshWithMesh, class UMaterialInstanceDynamic** materialWithFace, bool* setSignFaceFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setSignFace");

	UukRoadSignsFunc_C_setSignFace_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
	if (signFaceSet != nullptr)
		*signFaceSet = params.signFaceSet;
	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
	if (colorData != nullptr)
		*colorData = params.colorData;
	if (colorNames != nullptr)
		*colorNames = params.colorNames;
	if (StaticMeshWithMesh != nullptr)
		*StaticMeshWithMesh = params.StaticMeshWithMesh;
	if (materialWithFace != nullptr)
		*materialWithFace = params.materialWithFace;
	if (setSignFaceFailed != nullptr)
		*setSignFaceFailed = params.setSignFaceFailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.selectSignFace
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           defaultSign                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   secondary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  primaryIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  secondaryIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Previous                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   signFaceSelection              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  primaryReturn                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  secondaryReturn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_selectSignFace(bool defaultSign, const struct FName& primary, const struct FName& secondary, unsigned char primaryIndex, unsigned char secondaryIndex, const struct FName& Previous, class UObject* __WorldContext, struct FName* signFaceSelection, unsigned char* primaryReturn, unsigned char* secondaryReturn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.selectSignFace");

	UukRoadSignsFunc_C_selectSignFace_Params params;
	params.defaultSign = defaultSign;
	params.primary = primary;
	params.secondary = secondary;
	params.primaryIndex = primaryIndex;
	params.secondaryIndex = secondaryIndex;
	params.Previous = Previous;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (signFaceSelection != nullptr)
		*signFaceSelection = params.signFaceSelection;
	if (primaryReturn != nullptr)
		*primaryReturn = params.primaryReturn;
	if (secondaryReturn != nullptr)
		*secondaryReturn = params.secondaryReturn;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setCondition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   conditionSet                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialWithCondition          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           setConditionFailed             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_setCondition(class UMaterialInstanceDynamic* Material, const struct FName& conditionSet, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialWithCondition, bool* setConditionFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setCondition");

	UukRoadSignsFunc_C_setCondition_Params params;
	params.Material = Material;
	params.conditionSet = conditionSet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialWithCondition != nullptr)
		*MaterialWithCondition = params.MaterialWithCondition;
	if (setConditionFailed != nullptr)
		*setConditionFailed = params.setConditionFailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.getMasterMaterialSign
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial*               masterMaterial                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_getMasterMaterialSign(class UObject* __WorldContext, class UMaterial** masterMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.getMasterMaterialSign");

	UukRoadSignsFunc_C_getMasterMaterialSign_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (masterMaterial != nullptr)
		*masterMaterial = params.masterMaterial;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setShine
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   shineSet                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* materialWithShine              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           setShineFailed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_setShine(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* shineSet, class UMaterialInstanceDynamic** materialWithShine, bool* setShineFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setShine");

	UukRoadSignsFunc_C_setShine_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
	if (shineSet != nullptr)
		*shineSet = params.shineSet;
	if (materialWithShine != nullptr)
		*materialWithShine = params.materialWithShine;
	if (setShineFailed != nullptr)
		*setShineFailed = params.setShineFailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setColors
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   colourSet                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    colorValues                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           colorNames                     (Parm, OutParm, ZeroConstructor)
// bool                           setColorFailed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UukRoadSignsFunc_C::STATIC_setColors(class UObject* __WorldContext, struct FName* colourSet, TArray<struct FLinearColor>* colorValues, TArray<struct FName>* colorNames, bool* setColorFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setColors");

	UukRoadSignsFunc_C_setColors_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (colourSet != nullptr)
		*colourSet = params.colourSet;
	if (colorValues != nullptr)
		*colorValues = params.colorValues;
	if (colorNames != nullptr)
		*colorNames = params.colorNames;
	if (setColorFailed != nullptr)
		*setColorFailed = params.setColorFailed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
