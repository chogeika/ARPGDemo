// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FVector;
class USkeletalMeshComponent;
class AARWeaponBase;
struct FGAAttribute;
class UAFEffectsComponent;
class UAFAbilityComponent;
#ifdef HOMININA_ARCharacter_generated_h
#error "ARCharacter.generated.h already included, missing '#pragma once' in ARCharacter.h"
#endif
#define HOMININA_ARCharacter_generated_h

#define Hominina_Source_Hominina_Public_ARCharacter_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARCameraTransform_Statics; \
	HOMININA_API static class UScriptStruct* StaticStruct();


template<> HOMININA_API UScriptStruct* StaticStruct<struct FARCameraTransform>();

#define Hominina_Source_Hominina_Public_ARCharacter_h_55_RPC_WRAPPERS \
	virtual void ClientPossesedBy_Implementation(AController* NewController); \
 \
	DECLARE_FUNCTION(execCalculateSpatialGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateSpatialGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPossesedBy) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientPossesedBy_Implementation(Z_Param_NewController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainWeaponSocket) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Socket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMainWeaponSocket(Z_Param_Out_Socket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainWeaponMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainWeaponMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AARWeaponBase**)Z_Param__Result=P_THIS->GetMainWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectsComponent**)Z_Param__Result=P_THIS->GetEffectsComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityComp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=P_THIS->GetAbilityComp(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateSpatialGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateSpatialGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPossesedBy) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientPossesedBy_Implementation(Z_Param_NewController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainWeaponSocket) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Socket); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMainWeaponSocket(Z_Param_Out_Socket); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainWeaponMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainWeaponMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AARWeaponBase**)Z_Param__Result=P_THIS->GetMainWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectsComponent**)Z_Param__Result=P_THIS->GetEffectsComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityComp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=P_THIS->GetAbilityComp(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_EVENT_PARMS \
	struct ARCharacter_eventClientPossesedBy_Parms \
	{ \
		AController* NewController; \
	};


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_CALLBACK_WRAPPERS
#define Hominina_Source_Hominina_Public_ARCharacter_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARCharacter(); \
	friend struct Z_Construct_UClass_AARCharacter_Statics; \
public: \
	DECLARE_CLASS(AARCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AARCharacter*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_INCLASS \
private: \
	static void StaticRegisterNativesAARCharacter(); \
	friend struct Z_Construct_UClass_AARCharacter_Statics; \
public: \
	DECLARE_CLASS(AARCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AARCharacter*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARCharacter(AARCharacter&&); \
	NO_API AARCharacter(const AARCharacter&); \
public:


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARCharacter(AARCharacter&&); \
	NO_API AARCharacter(const AARCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARCharacter)


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AARCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AARCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Abilities() { return STRUCT_OFFSET(AARCharacter, Abilities); } \
	FORCEINLINE static uint32 __PPO__EffectsComponent() { return STRUCT_OFFSET(AARCharacter, EffectsComponent); } \
	FORCEINLINE static uint32 __PPO__AbilitiesToGive() { return STRUCT_OFFSET(AARCharacter, AbilitiesToGive); } \
	FORCEINLINE static uint32 __PPO__Head() { return STRUCT_OFFSET(AARCharacter, Head); } \
	FORCEINLINE static uint32 __PPO__Shoulders() { return STRUCT_OFFSET(AARCharacter, Shoulders); } \
	FORCEINLINE static uint32 __PPO__Arms() { return STRUCT_OFFSET(AARCharacter, Arms); } \
	FORCEINLINE static uint32 __PPO__Hands() { return STRUCT_OFFSET(AARCharacter, Hands); } \
	FORCEINLINE static uint32 __PPO__Torso() { return STRUCT_OFFSET(AARCharacter, Torso); } \
	FORCEINLINE static uint32 __PPO__Legs() { return STRUCT_OFFSET(AARCharacter, Legs); } \
	FORCEINLINE static uint32 __PPO__Feets() { return STRUCT_OFFSET(AARCharacter, Feets); } \
	FORCEINLINE static uint32 __PPO__Backpack() { return STRUCT_OFFSET(AARCharacter, Backpack); } \
	FORCEINLINE static uint32 __PPO__LegsCloth() { return STRUCT_OFFSET(AARCharacter, LegsCloth); } \
	FORCEINLINE static uint32 __PPO__WeaponHolsteredRight() { return STRUCT_OFFSET(AARCharacter, WeaponHolsteredRight); } \
	FORCEINLINE static uint32 __PPO__WeaponHolsteredLeft() { return STRUCT_OFFSET(AARCharacter, WeaponHolsteredLeft); } \
	FORCEINLINE static uint32 __PPO__HolsteredBackDown() { return STRUCT_OFFSET(AARCharacter, HolsteredBackDown); } \
	FORCEINLINE static uint32 __PPO__WeaponHolsteredSideLeft() { return STRUCT_OFFSET(AARCharacter, WeaponHolsteredSideLeft); } \
	FORCEINLINE static uint32 __PPO__WeaponEquipedMain() { return STRUCT_OFFSET(AARCharacter, WeaponEquipedMain); }


#define Hominina_Source_Hominina_Public_ARCharacter_h_52_PROLOG \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_EVENT_PARMS


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_INCLASS \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_ARCharacter_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARCharacter_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_ARCharacter_h


#define FOREACH_ENUM_ABILITYINPUT(op) \
	op(AbilityInput::Shoot) \
	op(AbilityInput::Reload) \
	op(AbilityInput::NextWeapon) \
	op(AbilityInput::PreviousWeapon) \
	op(AbilityInput::NextAbilitySet) \
	op(AbilityInput::PreviousAbilitySet) \
	op(AbilityInput::Ability01) \
	op(AbilityInput::Ability02) \
	op(AbilityInput::Ability03) \
	op(AbilityInput::Ability04) 

enum class AbilityInput : uint8;
template<> HOMININA_API UEnum* StaticEnum<AbilityInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
