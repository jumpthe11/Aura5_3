// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuroaCharacterBase.h"

// Sets default values
AAuroaCharacterBase::AAuroaCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon ->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon ->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* AAuroaCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void AAuroaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuroaCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAuroaCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

