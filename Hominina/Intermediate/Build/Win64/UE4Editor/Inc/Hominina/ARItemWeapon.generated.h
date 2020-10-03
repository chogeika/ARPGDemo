// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARItemWeapon_generated_h
#error "ARItemWeapon.generated.h already included, missing '#pragma once' in ARItemWeapon.h"
#endif
#define HOMININA_ARItemWeapon_generated_h

#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARItemWeapon(); \
	friend struct Z_Construct_UClass_UARItemWeapon_Statics; \
public: \
	DECLARE_CLASS(UARItemWeapon, UARItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARItemWeapon)


#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUARItemWeapon(); \
	friend struct Z_Construct_UClass_UARItemWeapon_Statics; \
public: \
	DECLARE_CLASS(UARItemWeapon, UARItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARItemWeapon)


#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARItemWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARItemWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARItemWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARItemWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARItemWeapon(UARItemWeapon&&); \
	NO_API UARItemWeapon(const UARItemWeapon&); \
public:


#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARItemWeapon(UARItemWeapon&&); \
	NO_API UARItemWeapon(const UARItemWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARItemWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARItemWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARItemWeapon)


#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_22_PROLOG
#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_INCLASS \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARItemWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Weapons_ARItemWeapon_h


#define FOREACH_ENUM_EARWEAPONUPGRADETYPE(op) \
	op(EARWeaponUpgradeType::Magazine) 

enum class EARWeaponUpgradeType : uint8;
template<> HOMININA_API UEnum* StaticEnum<EARWeaponUpgradeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
