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

// BlueprintGeneratedClass M1887_InsertShellLoop.M1887_InsertShellLoop_C
// 0x0000 (0x0098 - 0x0098)
class UM1887_InsertShellLoop_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1887_InsertShellLoop.M1887_InsertShellLoop_C");
		return ptr;
	}


	float ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif