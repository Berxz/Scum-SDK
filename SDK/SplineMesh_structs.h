#pragma once

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SplineMesh.SplineMesh
// 0x0044
struct FSplineMesh
{
	class UStaticMesh*                                 Mesh_3_98616D404E981A0E6506C995A298365A;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_6_89054D3F4BE85A86523F23BFBCE05C49;             // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Width_9_999B615748F522C47271E5B5826B1A65;                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
