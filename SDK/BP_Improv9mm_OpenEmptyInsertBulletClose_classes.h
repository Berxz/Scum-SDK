#pragma once

// Name: , Version: 0.3.21000

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Improv9mm_OpenEmptyInsertBulletClose.BP_Improv9mm_OpenEmptyInsertBulletClose_C
// 0x0000 (0x0098 - 0x0098)
class UBP_Improv9mm_OpenEmptyInsertBulletClose_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Improv9mm_OpenEmptyInsertBulletClose.BP_Improv9mm_OpenEmptyInsertBulletClose_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
