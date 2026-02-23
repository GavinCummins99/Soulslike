// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "BP_GASCharacter_Base.generated.h"

UCLASS()
class SOULSGAME_API ABP_GASCharacter_Base : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABP_GASCharacter_Base();
	
	//Ability System Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem/Attributes")
	class UBasicAttributeSet* BasicAttributeSet;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//Initialise component on Pawn being possessed
	virtual void PossessedBy(AController* NewController) override;
	
	//Initialise component on Player spawning
	virtual void OnRep_PlayerState() override;
	
	//Handle Dead tag being changed
	virtual void OnDeadTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
	
	//Default death logic
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AbilitySystem || Damage")
	void HandleDeath();
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem")
	EGameplayEffectReplicationMode	AscReplicationMode = EGameplayEffectReplicationMode::Mixed;
	
	//Array of starting abilities
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem")
	TArray<TSubclassOf<UGameplayAbility>> StartingAbilities;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	// Get Ability system component
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	//Function to add and remove abilities from character
	UFUNCTION(blueprintCallable, Category = "AbilitySystem")
	TArray<FGameplayAbilitySpecHandle> GrantAbilities(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToGrant);
	
	UFUNCTION(BlueprintCallable, Category = "AbilitySystem")
	void RemoveAbilities(TArray<FGameplayAbilitySpecHandle> AbilityHandlesToRemove);

};
