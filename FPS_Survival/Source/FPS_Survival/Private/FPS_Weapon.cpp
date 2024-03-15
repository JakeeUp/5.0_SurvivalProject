// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_Weapon.h"

// Sets default values
AFPS_Weapon::AFPS_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pMesh = CreateDefaultSubobject<UStaticMeshComponent>("Weapon Mesh");
	m_pMesh->SetupAttachment(RootComponent);

	m_pWeaponComponent = CreateDefaultSubobject<UTP_WeaponComponent>("Weapon Component");
	

}

// Called when the game starts or when spawned
void AFPS_Weapon::BeginPlay()
{
	Super::BeginPlay();

	//assign weapon component variables
	m_pWeaponComponent->m_wFireSound = m_pFireSound;
	m_pWeaponComponent->m_wEmptySound = m_pEmptySound;
	m_pWeaponComponent->m_wEnvironmentalSounds = m_pEnvironmentalSounds;
	m_pWeaponComponent->m_wMuzzleOffset = m_vMuzzleOffset;
	m_pWeaponComponent->m_wMuzzleFlash = m_pMuzzleFlash;
	
}

// Called every frame
void AFPS_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

