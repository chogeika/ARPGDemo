// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef HOMININA_UITrigger_generated_h
#error "UITrigger.generated.h already included, missing '#pragma once' in UITrigger.h"
#endif
#define HOMININA_UITrigger_generated_h

#define Hominina_Source_Hominina_Public_UITrigger_h_12_DELEGATE \
struct _Script_Hominina_eventRamaMeleeHitSignature_Parms \
{ \
	AActor* HitActor; \
	UPrimitiveComponent* HitComponent; \
	FVector ImpactPoint; \
	FVector ImpactNormal; \
	FName HitBoneName; \
	FHitResult HitResult; \
}; \
static inline void FRamaMeleeHitSignature_DelegateWrapper(const FMulticastScriptDelegate& RamaMeleeHitSignature, AActor* HitActor, UPrimitiveComponent* HitComponent, FVector const& ImpactPoint, FVector const& ImpactNormal, FName HitBoneName, FHitResult const& HitResult) \
{ \
	_Script_Hominina_eventRamaMeleeHitSignature_Parms Parms; \
	Parms.HitActor=HitActor; \
	Parms.HitComponent=HitComponent; \
	Parms.ImpactPoint=ImpactPoint; \
	Parms.ImpactNormal=ImpactNormal; \
	Parms.HitBoneName=HitBoneName; \
	Parms.HitResult=HitResult; \
	RamaMeleeHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Source_Hominina_Public_UITrigger_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRespondToMeleeDamageTaken) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RespondToMeleeDamageTaken(Z_Param_HitActor,Z_Param_HitComponent,Z_Param_Out_ImpactPoint,Z_Param_Out_ImpactNormal,Z_Param_HitBoneName,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UITrigger_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRespondToMeleeDamageTaken) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RespondToMeleeDamageTaken(Z_Param_HitActor,Z_Param_HitComponent,Z_Param_Out_ImpactPoint,Z_Param_Out_ImpactNormal,Z_Param_HitBoneName,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UITrigger_h_18_EVENT_PARMS
#define Hominina_Source_Hominina_Public_UITrigger_h_18_CALLBACK_WRAPPERS
#define Hominina_Source_Hominina_Public_UITrigger_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUITrigger(); \
	friend struct Z_Construct_UClass_AUITrigger_Statics; \
public: \
	DECLARE_CLASS(AUITrigger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AUITrigger)


#define Hominina_Source_Hominina_Public_UITrigger_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAUITrigger(); \
	friend struct Z_Construct_UClass_AUITrigger_Statics; \
public: \
	DECLARE_CLASS(AUITrigger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AUITrigger)


#define Hominina_Source_Hominina_Public_UITrigger_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUITrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUITrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUITrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUITrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUITrigger(AUITrigger&&); \
	NO_API AUITrigger(const AUITrigger&); \
public:


#define Hominina_Source_Hominina_Public_UITrigger_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUITrigger(AUITrigger&&); \
	NO_API AUITrigger(const AUITrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUITrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUITrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUITrigger)


#define Hominina_Source_Hominina_Public_UITrigger_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_EnemyRootCollider() { return STRUCT_OFFSET(AUITrigger, m_EnemyRootCollider); } \
	FORCEINLINE static uint32 __PPO__m_EnemyMesh() { return STRUCT_OFFSET(AUITrigger, m_EnemyMesh); }


#define Hominina_Source_Hominina_Public_UITrigger_h_15_PROLOG \
	Hominina_Source_Hominina_Public_UITrigger_h_18_EVENT_PARMS


#define Hominina_Source_Hominina_Public_UITrigger_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UITrigger_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UITrigger_h_18_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UITrigger_h_18_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_UITrigger_h_18_INCLASS \
	Hominina_Source_Hominina_Public_UITrigger_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UITrigger_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UITrigger_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UITrigger_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UITrigger_h_18_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_UITrigger_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UITrigger_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AUITrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UITrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
