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

// BlueprintGeneratedClass BP_CompoundBow_EquipArrow.BP_CompoundBow_EquipArrow_C
// 0x0000 (0x0088 - 0x0088)
class UBP_CompoundBow_EquipArrow_C : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CompoundBow_EquipArrow.BP_CompoundBow_EquipArrow_C");
		return ptr;
	}


	float ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif