// Copyright by Arkiant


#include "Character/AuraCharacterBase.h"

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	/*
	* Configuration for the character's weapon
	*/
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	// Attach the weapon to a socket
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	// Disable collision for the weapon
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

