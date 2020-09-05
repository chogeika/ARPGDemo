// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
 #include "Engine/StaticMesh.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "UITrigger.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FRamaMeleeHitSignature, class AActor*, HitActor, class UPrimitiveComponent*, HitComponent, const FVector&, ImpactPoint, const FVector&, ImpactNormal, FName, HitBoneName, const struct FHitResult&, HitResult);


UCLASS()
class HOMININA_API AUITrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUITrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	
	//This should be in the class which calls the delegate, and where the signature was defined
//This is an instance of the signature that was defined above!
	UPROPERTY(BlueprintAssignable, Category = "C_CODE")
	FRamaMeleeHitSignature RamaMeleeWeapon_OnHit;

	//Any class can add a function that uses the delegate signature and responds to the Broadcast() event 
	UFUNCTION()
		void RespondToMeleeDamageTaken(AActor* HitActor, UPrimitiveComponent* HitComponent, const FVector& ImpactPoint, const FVector& ImpactNormal, FName HitBoneName, const FHitResult& HitResult);

	// 実装はBP側でC++では宣言のみ
	UFUNCTION(Category = "C_CODE", BlueprintImplementableEvent, BlueprintCallable)
		void TestImpl();

private:
	//追加するシーンコンポーネントを保持
	UPROPERTY(Category = "C_CODE", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* m_EnemyRootCollider;
	UPROPERTY(Category = "C_CODE", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* m_EnemyMesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
