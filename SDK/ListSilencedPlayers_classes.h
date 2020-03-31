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

// BlueprintGeneratedClass ListSilencedPlayers.ListSilencedPlayers_C
// 0x0000 (0x0080 - 0x0080)
class UListSilencedPlayers_C : public UAdminCommand_ListSilencedPlayers
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ListSilencedPlayers.ListSilencedPlayers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
