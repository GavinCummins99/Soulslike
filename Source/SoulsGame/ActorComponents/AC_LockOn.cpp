// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_LockOn.h"

#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Engine/OverlapResult.h"
#include "CollisionQueryParams.h"


// Sets default values for this component's properties
UAC_LockOn::UAC_LockOn()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = false;

    // ...
}


// Toggles the lock-on state: if a target is currently locked, releases it;
// otherwise attempts to acquire a new target.
void UAC_LockOn::ToggleLockOn()
{
    if (IsLockedOn())
    {
        ReleaseTarget();
    }
    else
    {
        AcquireTarget();
    }
}

/*
 * Attempts to find and lock onto the best target within range and view angle.
 *
 * Searches for Pawns within LockOnRange of the owning actor's camera, then
 * selects the one closest to the camera's forward direction (i.e. most
 * centered on screen), provided it falls within LockOnAngle degrees.
 *
 * Sets CurrentTarget to the best candidate found, or nullptr if none qualify.
 */
void UAC_LockOn::AcquireTarget()
{
    AActor* Owner = GetOwner();

    // No owner means there's nothing to lock on from (camera, position, etc.)
    if (!Owner)
    {
        return;
    }

    // Lock-on is driven by the camera's position and facing direction,
    // so we need a valid camera component to proceed.
    UCameraComponent* Camera = Owner->FindComponentByClass<UCameraComponent>();

    if (!Camera)
    {
        return;
    }

    const FVector CameraLocation = Camera->GetComponentLocation();
    const FVector CameraForward = Camera->GetForwardVector();

    TArray<FOverlapResult> Overlaps;

    // Exclude the owner itself from the overlap results, since it shouldn't
    // be considered a valid lock-on target for its own camera.
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(Owner);

    // Gather all pawns within LockOnRange of the camera as potential targets.
    FCollisionShape Sphere = FCollisionShape::MakeSphere(LockOnRange);

    GetWorld()->OverlapMultiByChannel(
        Overlaps,
        CameraLocation,
        FQuat::Identity,
        ECC_Pawn,
        Sphere,
        QueryParams
    );

    AActor* BestTarget = nullptr;

    // Start the threshold at LockOnAngle so only candidates within the
    // allowed cone of view can ever be considered.
    float BestAngle = LockOnAngle;

    for (const FOverlapResult& Overlap : Overlaps)
    {
        AActor* Candidate = Overlap.GetActor();

        // Skip actors that have been destroyed or are otherwise invalid.
        if (!IsValid(Candidate))
        {
            continue;
        }

        // Direction from the camera to the candidate, used to measure
        // how far off-center the candidate is relative to the view.
        FVector Direction =
            (Candidate->GetActorLocation() - CameraLocation).GetSafeNormal();

        // Angle (in degrees) between the camera's forward vector and the
        // direction to the candidate. Smaller angle = closer to screen center.
        float Angle = FMath::RadiansToDegrees(
            FMath::Acos(FVector::DotProduct(CameraForward, Direction))
        );

        // Keep track of the candidate with the smallest angle seen so far,
        // effectively picking the target most centered on screen.
        if (Angle < BestAngle)
        {
            BestAngle = Angle;
            BestTarget = Candidate;
        }
    }

    // Assign the best candidate found (or nullptr if none qualified).
    CurrentTarget = BestTarget;
}

// Clears the current lock-on target.
void UAC_LockOn::ReleaseTarget()
{
    CurrentTarget = nullptr;
}

// Returns the actor currently locked onto, or nullptr if none.
AActor* UAC_LockOn::GetLockOnTarget() const
{
    return CurrentTarget.Get();
}

// Returns whether a valid lock-on target is currently set.
bool UAC_LockOn::IsLockedOn() const
{
    return IsValid(CurrentTarget);
}