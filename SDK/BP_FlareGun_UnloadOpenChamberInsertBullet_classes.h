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

// BlueprintGeneratedClass BP_FlareGun_UnloadOpenChamberInsertBullet.BP_FlareGun_UnloadOpenChamberInsertBullet_C
// 0x0000 (0x0098 - 0x0098)
class UBP_FlareGun_UnloadOpenChamberInsertBullet_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlareGun_UnloadOpenChamberInsertBullet.BP_FlareGun_UnloadOpenChamberInsertBullet_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
