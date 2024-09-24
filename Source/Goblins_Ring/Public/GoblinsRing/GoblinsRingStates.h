#pragma once

UENUM(BlueprintType)
enum class EVettiyanStates : uint8
{
	EVS_Idle UMETA(DisplayName = "Idle"),
	EVS_Walk UMETA(DisplayName = "Walking"),
	EVS_Sprint UMETA(DisplayName = "Sprinting")
};