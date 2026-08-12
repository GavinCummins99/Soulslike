// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MyGameplayAbility.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EAbilityInputID : uint8
{
	None UMETA(DisplayName = "None"), // 0
	PrimaryAbility UMETA(DisplayName = "Primary Ability"), // 1
	SecondaryAbility UMETA(DisplayName = "Secondary Ability"), // 2
	HeavyAbility UMETA(DisplayName = "Heavy Ability"),// 3
	SpecialAbility UMETA(DisplayName = "Special Ability"), // 4
	MovementAbility UMETA(DisplayName = "Movement Ability"), // 5
};


UCLASS()
class SOULSGAME_API UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
	
public:
	
	UMyGameplayAbility();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	EAbilityInputID AbilityInputID = EAbilityInputID::None;
	
	
};
