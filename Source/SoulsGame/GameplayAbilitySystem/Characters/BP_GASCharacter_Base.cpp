// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_GASCharacter_Base.h"
#include "BP_GASCharacter_Base.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameplayAbilitySystem/AttributeSets/BasicAttributeSet.h"

// Sets default values
ABP_GASCharacter_Base::ABP_GASCharacter_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Add Ability System Component 
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(AscReplicationMode); //controlled by enum variable, defaults to "mixed"
	
	//Add basic attributeSet
	BasicAttributeSet = CreateDefaultSubobject<UBasicAttributeSet>(TEXT("BasicAttributeSet"));
	
	//Default Character movement component values
	
	//Set size for collision
	GetCapsuleComponent()->InitCapsuleSize(35.0f, 90.0f);
	
	//Don't rotate when controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	
	//configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	
	GetCharacterMovement()->JumpZVelocity = 500.0f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.0f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.f;
	
}

// Called when the game starts or when spawned
void ABP_GASCharacter_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_GASCharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABP_GASCharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//return ability system component
UAbilitySystemComponent* ABP_GASCharacter_Base::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


//Grant abilities function, input an array of GameplayAbility classes
TArray<FGameplayAbilitySpecHandle> ABP_GASCharacter_Base::GrantAbilities( TArray<TSubclassOf<UGameplayAbility>> AbilitiesToGrant) 
{
	if (!AbilitySystemComponent || !HasAuthority())
	{
		return TArray<FGameplayAbilitySpecHandle>();
	}
	
	TArray<FGameplayAbilitySpecHandle> AbilitiesHandles; //Create array to store SpecHandles
	
	for (TSubclassOf<UGameplayAbility> Ability : AbilitiesToGrant) //for each ability in the inputed array, 
	{
		FGameplayAbilitySpecHandle SpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability, 1, -1, this));//call GiveAbility to this ability system component 
		AbilitiesHandles.Add(SpecHandle); //and store the output SpecHandle
	}
	
	return AbilitiesHandles; //Return the array of SpecHandles
}

//Remove abilities function
void ABP_GASCharacter_Base::RemoveAbilities(TArray<FGameplayAbilitySpecHandle> AbilityHandlesToRemove)
{
	
	if (!AbilitySystemComponent || !HasAuthority())
	{
		return;
	}
	
	for (FGameplayAbilitySpecHandle AbilityHandle : AbilityHandlesToRemove) //for each Handle in the given Array of SpecHandles
	{
		AbilitySystemComponent->ClearAbility(AbilityHandle);//Clear it from the ability system :)
	}
	
}


void ABP_GASCharacter_Base::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		GrantAbilities(StartingAbilities);
	}
}

void ABP_GASCharacter_Base::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}



