
#include "../SDK.h"

// Name: SCUM, Version: 3.75.21350

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ABP_Zombie_Corpse.ABP_Zombie_Corpse_C.ExecuteUbergraph_ABP_Zombie_Corpse
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Zombie_Corpse_C::ExecuteUbergraph_ABP_Zombie_Corpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Zombie_Corpse.ABP_Zombie_Corpse_C.ExecuteUbergraph_ABP_Zombie_Corpse");

	UABP_Zombie_Corpse_C_ExecuteUbergraph_ABP_Zombie_Corpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
