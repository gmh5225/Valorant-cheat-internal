#pragma once
namespace Offsets
{
	constexpr auto
		Key = 0x9005C00, //uworld_key 
		State = 0x8E73B00,  //uworld_state 
		ProcessEvent = 0x3322680,
		StaticFindObject = 0x3360890,
		TriggerVEH = 0x1B6D880,
		GetActorBounds = 0x478ADC0;  //void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
}
