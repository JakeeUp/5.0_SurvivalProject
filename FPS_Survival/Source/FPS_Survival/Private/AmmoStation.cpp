// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoStation.h"
#include "Components/CapsuleComponent.h"
#include "FPS_Survival/FPS_SurvivalCharacter.h"
// Sets default values
AAmmoStation::AAmmoStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pMesh = CreateDefaultSubobject<UStaticMeshComponent>("Box Mesh");
	m_pMesh->SetupAttachment(RootComponent);

	M_PCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("Collider");
	M_PCapsuleComponent->InitCapsuleSize(55.0f,95.0f);
	M_PCapsuleComponent->SetupAttachment(m_pMesh);

	M_PCapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AAmmoStation::OnCapsuleBeginOverlap);
	M_PCapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AAmmoStation::OnCapsuleEndOverlap);
}

// Called when the game starts or when spawned
void AAmmoStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAmmoStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAmmoStation::OnCapsuleBeginOverlap(UPrimitiveComponent* a_pOverlappedComponent, AActor* a_pOtherActor,
	UPrimitiveComponent* a_pOtherComp, int32 a_iOtherBodyIndex, bool a_bFromSweep, const FHitResult& a_pSweepResult)
{
	//Set the player to being able to interact with station
	AFPS_SurvivalCharacter* pPlayer = Cast<AFPS_SurvivalCharacter>(a_pOtherActor);
	pPlayer->m_bCanInteract = true;
	UE_LOG(LogTemp, Warning, TEXT("CAN INTERACT NOW"));
}

void AAmmoStation::OnCapsuleEndOverlap(UPrimitiveComponent* a_pOverlappedComponent, AActor* a_pOtherActor,
	UPrimitiveComponent* a_pOtherComp, int32 a_iOtherBodyIndex)
{
	//Set the player to being able to interact with station
	AFPS_SurvivalCharacter* pPlayer = Cast<AFPS_SurvivalCharacter>(a_pOtherActor);
	pPlayer->m_bCanInteract = false;
}

