#pragma once

// Name: , Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AS_Val_InsertMag.BP_AS_Val_InsertMag_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AS_Val_InsertMag_C : public UInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AS_Val_InsertMag.BP_AS_Val_InsertMag_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
