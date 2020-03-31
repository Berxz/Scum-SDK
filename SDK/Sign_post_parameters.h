#pragma once

#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Sign_post.Sign_post_C.setBracketMaterial
struct ASign_post_C_setBracketMaterial_Params
{
};

// Function Sign_post.Sign_post_C.setPole
struct ASign_post_C_setPole_Params
{
};

// Function Sign_post.Sign_post_C.setBracketPositions
struct ASign_post_C_setBracketPositions_Params
{
	class UStaticMeshComponent*                        Sign;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        top_bracket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bottom_Bracket;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Sign_post.Sign_post_C.setSignPositions
struct ASign_post_C_setSignPositions_Params
{
};

// Function Sign_post.Sign_post_C.UserConstructionScript
struct ASign_post_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
