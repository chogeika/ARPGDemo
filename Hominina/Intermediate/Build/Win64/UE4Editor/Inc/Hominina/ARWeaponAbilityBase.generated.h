// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAFFunctionModifier;
#ifdef HOMININA_ARWeaponAbilityBase_generated_h
#error "ARWeaponAbilityBase.generated.h already included, missing '#pragma once' in ARWeaponAbilityBase.h"
#endif
#define HOMININA_ARWeaponAbilityBase_generated_h

#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReloadWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyDamageEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT(FAFFunctionModifier,Z_Param_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyDamageEffect(Z_Param_Target,Z_Param_Modifier); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReloadWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyDamageEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT(FAFFunctionModifier,Z_Param_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyDamageEffect(Z_Param_Target,Z_Param_Modifier); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARWeaponAbilityBase(); \
	friend struct Z_Construct_UClass_UARWeaponAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UARWeaponAbilityBase, UARAbilityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARWeaponAbilityBase)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUARWeaponAbilityBase(); \
	friend struct Z_Construct_UClass_UARWeaponAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UARWeaponAbilityBase, UARAbilityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARWeaponAbilityBase)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARWeaponAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARWeaponAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARWeaponAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARWeaponAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARWeaponAbilityBase(UARWeaponAbilityBase&&); \
	NO_API UARWeaponAbilityBase(const UARWeaponAbilityBase&); \
public:


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARWeaponAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARWeaponAbilityBase(UARWeaponAbilityBase&&); \
	NO_API UARWeaponAbilityBase(const UARWeaponAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARWeaponAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARWeaponAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARWeaponAbilityBase)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmmoToAdd() { return STRUCT_OFFSET(UARWeaponAbilityBase, AmmoToAdd); } \
	FORCEINLINE static uint32 __PPO__AmmoToTake() { return STRUCT_OFFSET(UARWeaponAbilityBase, AmmoToTake); } \
	FORCEINLINE static uint32 __PPO__DefaultDamageEffects() { return STRUCT_OFFSET(UARWeaponAbilityBase, DefaultDamageEffects); } \
	FORCEINLINE static uint32 __PPO__DamageEffects() { return STRUCT_OFFSET(UARWeaponAbilityBase, DamageEffects); } \
	FORCEINLINE static uint32 __PPO__WeaponActor() { return STRUCT_OFFSET(UARWeaponAbilityBase, WeaponActor); } \
	FORCEINLINE static uint32 __PPO__WeaponItem() { return STRUCT_OFFSET(UARWeaponAbilityBase, WeaponItem); } \
	FORCEINLINE static uint32 __PPO__UpgradeContainer() { return STRUCT_OFFSET(UARWeaponAbilityBase, UpgradeContainer); } \
	FORCEINLINE static uint32 __PPO__MagazineUpgradeProperty() { return STRUCT_OFFSET(UARWeaponAbilityBase, MagazineUpgradeProperty); } \
	FORCEINLINE static uint32 __PPO__MagazineEffectHandle() { return STRUCT_OFFSET(UARWeaponAbilityBase, MagazineEffectHandle); } \
	FORCEINLINE static uint32 __PPO__MagazineSpecHandle() { return STRUCT_OFFSET(UARWeaponAbilityBase, MagazineSpecHandle); } \
	FORCEINLINE static uint32 __PPO__BarrelUpgradeProperty() { return STRUCT_OFFSET(UARWeaponAbilityBase, BarrelUpgradeProperty); } \
	FORCEINLINE static uint32 __PPO__BarrelEffectHandle() { return STRUCT_OFFSET(UARWeaponAbilityBase, BarrelEffectHandle); } \
	FORCEINLINE static uint32 __PPO__BarrelSpecHandle() { return STRUCT_OFFSET(UARWeaponAbilityBase, BarrelSpecHandle); } \
	FORCEINLINE static uint32 __PPO__ScopeUpgradeProperty() { return STRUCT_OFFSET(UARWeaponAbilityBase, ScopeUpgradeProperty); } \
	FORCEINLINE static uint32 __PPO__ScopeEffectHandle() { return STRUCT_OFFSET(UARWeaponAbilityBase, ScopeEffectHandle); } \
	FORCEINLINE static uint32 __PPO__ScopeSpecHandle() { return STRUCT_OFFSET(UARWeaponAbilityBase, ScopeSpecHandle); }


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_14_PROLOG
#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_INCLASS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARWeaponAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Weapons_ARWeaponAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
