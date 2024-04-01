// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthStation.h"
#include "Components/CapsuleComponent.h"
#include "FPS_Survival/FPS_SurvivalCharacter.h"
// Sets default values
AHealthStation::AHealthStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	m_pHealthMesh = CreateDefaultSubobject<UStaticMeshComponent>("Box Mesh");
	m_pHealthMesh->SetupAttachment(RootComponent);

	M_PHealthCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("Collider");
	M_PHealthCapsuleComponent->InitCapsuleSize(55.0f,95.0f);
	M_PHealthCapsuleComponent->SetupAttachment(m_pHealthMesh);

	M_PHealthCapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AHealthStation::OnCapsuleBeginOverlap);
	M_PHealthCapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AHealthStation::OnCapsuleEndOverlap);
}

// Called when the game starts or when spawned
void AHealthStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealthStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthStation::OnCapsuleBeginOverlap(UPrimitiveComponent* a_pOverlappedComponent, AActor* a_pOtherActor,
	UPrimitiveComponent* a_pOtherComp, int32 a_iOtherBodyIndex, bool a_bFromSweep, const FHitResult& a_pSweepResult)
{
	//Set the player to being able to interact with station
	AFPS_SurvivalCharacter* pPlayer = Cast<AFPS_SurvivalCharacter>(a_pOtherActor);
	pPlayer->m_bCanInteractHealth = true;
	UE_LOG(LogTemp, Warning, TEXT("CAN INTERACT HEALTH NOW"));
}

void AHealthStation::OnCapsuleEndOverlap(UPrimitiveComponent* a_pOverlappedComponent, AActor* a_pOtherActor,
	UPrimitiveComponent* a_pOtherComp, int32 a_iOtherBodyIndex)
{
	//Set the player to being able to interact with station
	AFPS_SurvivalCharacter* pPlayer = Cast<AFPS_SurvivalCharacter>(a_pOtherActor);
	pPlayer->m_bCanInteractHealth = false;
}

