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

// BlueprintGeneratedClass BP_Eder22_RemoveMagInsertMagClose.BP_Eder22_RemoveMagInsertMagClose_C
// 0x0004 (0x008C - 0x0088)
class UBP_Eder22_RemoveMagInsertMagClose_C : public URemoveMagazineInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Eder22_RemoveMagInsertMagClose.BP_Eder22_RemoveMagInsertMagClose_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
