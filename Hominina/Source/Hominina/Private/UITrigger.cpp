// Fill out your copyright notice in the Description page of Project Settings.


#include "UITrigger.h"

// Sets default values
AUITrigger::AUITrigger(const FObjectInitializer& ObjectInitializer) : AActor(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	 //ルートは必ず何かに付け替える。
    //でないと変なことになる。
    m_EnemyRootCollider = CreateDefaultSubobject<UBoxComponent>("RootCollider");
    RootComponent = Cast<USceneComponent>(m_EnemyRootCollider);

	m_EnemyRootCollider->OnComponentBeginOverlap.AddDynamic(this, &AUITrigger::OnBoxBeginOverlap);

	this->RamaMeleeWeapon_OnHit.AddDynamic(this, &AUITrigger::RespondToMeleeDamageTaken);

    //メッシュを追加する。
    m_EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

void AUITrigger::RespondToMeleeDamageTaken(AActor* HitActor, UPrimitiveComponent* HitComponent, const FVector& ImpactPoint, const FVector& ImpactNormal, FName HitBoneName, const FHitResult& HitResult)
{
	//GEngine->AddOnScreenDebugMessage(1, 1, FColor(1, 1, 1, 100), TEXT("HIT3"));
}

// Called when the game starts or when spawned
void AUITrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUITrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUITrigger::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(1, 1, FColor(1, 1, 1, 100), TEXT("HIT"));

	
	//Only the code that is supposed to initiate the event calls Broadcast()
	if (RamaMeleeWeapon_OnHit.IsBound()) //<~~~~
	{
		//GEngine->AddOnScreenDebugMessage(1, 1, FColor(1, 1, 1, 100), TEXT("HIT2"));
		RamaMeleeWeapon_OnHit.Broadcast(OtherActor, OtherComp, SweepResult.ImpactPoint, SweepResult.ImpactNormal, SweepResult.BoneName, SweepResult);
	}
	else {

		this->RamaMeleeWeapon_OnHit.AddDynamic(this, &AUITrigger::RespondToMeleeDamageTaken);
		RamaMeleeWeapon_OnHit.Broadcast(OtherActor, OtherComp, SweepResult.ImpactPoint, SweepResult.ImpactNormal, SweepResult.BoneName, SweepResult);
	}

	AUITrigger::TestImpl();
}

