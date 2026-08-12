// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_LockOn.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SOULSGAME_API UAC_LockOn : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UAC_LockOn();
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void ToggleLockOn();
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void AcquireTarget();
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void ReleaseTarget();
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	AActor* GetLockOnTarget() const;
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	bool IsLockedOn() const;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Targeting")
	float LockOnRange = 2000.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Targeting")
	float LockOnAngle = 30.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Targeting")
	TObjectPtr<AActor> CurrentTarget;
	

public:
	
};
