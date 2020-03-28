
#include "../SDK.h"

// Name: , Version: 0.3.21000

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LevelUpNotification.LevelUpNotification_C.DisplaySkillLevelUpNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkill*                  Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESkillLevel                    skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelUpNotification_C::DisplaySkillLevelUpNotification(class USkill* Skill, ESkillLevel skillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUpNotification.LevelUpNotification_C.DisplaySkillLevelUpNotification");

	ULevelUpNotification_C_DisplaySkillLevelUpNotification_Params params;
	params.Skill = Skill;
	params.skillLevel = skillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUpNotification.LevelUpNotification_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelUpNotification_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUpNotification.LevelUpNotification_C.Tick");

	ULevelUpNotification_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUpNotification.LevelUpNotification_C.ExecuteUbergraph_LevelUpNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelUpNotification_C::ExecuteUbergraph_LevelUpNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUpNotification.LevelUpNotification_C.ExecuteUbergraph_LevelUpNotification");

	ULevelUpNotification_C_ExecuteUbergraph_LevelUpNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
