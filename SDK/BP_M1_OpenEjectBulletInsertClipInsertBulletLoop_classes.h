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

// BlueprintGeneratedClass BP_M1_OpenEjectBulletInsertClipInsertBulletLoop.BP_M1_OpenEjectBulletInsertClipInsertBulletLoop_C
// 0x000C (0x00A4 - 0x0098)
class UBP_M1_OpenEjectBulletInsertClipInsertBulletLoop_C : public UInsertMagazineInsertCartridge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenEjectBulletInsertClipInsertBulletLoop.BP_M1_OpenEjectBulletInsertClipInsertBulletLoop_C");
		return ptr;
	}


	float ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
	void OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClipInsertBulletLoop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif