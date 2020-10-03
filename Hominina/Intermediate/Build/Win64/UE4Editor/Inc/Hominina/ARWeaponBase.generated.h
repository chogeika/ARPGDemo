// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARWeaponBase_generated_h
#error "ARWeaponBase.generated.h already included, missing '#pragma once' in ARWeaponBase.h"
#endif
#define HOMININA_ARWeaponBase_generated_h

#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARWeaponBase(); \
	friend struct Z_Construct_UClass_AARWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AARWeaponBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARWeaponBase)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAARWeaponBase(); \
	friend struct Z_Construct_UClass_AARWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AARWeaponBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARWeaponBase)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARWeaponBase(AARWeaponBase&&); \
	NO_API AARWeaponBase(const AARWeaponBase&); \
public:


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARWeaponBase(AARWeaponBase&&); \
	NO_API AARWeaponBase(const AARWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARWeaponBase)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AARWeaponBase, Mesh); }


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_9_PROLOG
#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_INCLASS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Weapons_ARWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
