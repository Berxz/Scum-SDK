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

// BlueprintGeneratedClass ResetMissionEnabled.ResetMissionEnabled_C
// 0x0000 (0x0080 - 0x0080)
class UResetMissionEnabled_C : public UAdminCommand_ResetMissionEnabled
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResetMissionEnabled.ResetMissionEnabled_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif