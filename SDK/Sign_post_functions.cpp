
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

// Function Sign_post.Sign_post_C.setBracketMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASign_post_C::setBracketMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setBracketMaterial");

	ASign_post_C_setBracketMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_post.Sign_post_C.setPole
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASign_post_C::setPole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setPole");

	ASign_post_C_setPole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_post.Sign_post_C.setBracketPositions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Sign                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    top_bracket                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    bottom_Bracket                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASign_post_C::setBracketPositions(class UStaticMeshComponent* Sign, class UStaticMeshComponent* top_bracket, class UStaticMeshComponent* bottom_Bracket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setBracketPositions");

	ASign_post_C_setBracketPositions_Params params;
	params.Sign = Sign;
	params.top_bracket = top_bracket;
	params.bottom_Bracket = bottom_Bracket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_post.Sign_post_C.setSignPositions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASign_post_C::setSignPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setSignPositions");

	ASign_post_C_setSignPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_post.Sign_post_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASign_post_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.UserConstructionScript");

	ASign_post_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
