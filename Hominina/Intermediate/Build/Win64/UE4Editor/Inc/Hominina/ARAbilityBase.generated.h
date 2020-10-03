// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARAbilityBase_generated_h
#error "ARAbilityBase.generated.h already included, missing '#pragma once' in ARAbilityBase.h"
#endif
#define HOMININA_ARAbilityBase_generated_h

#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARAbilityBase(); \
	friend struct Z_Construct_UClass_UARAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UARAbilityBase, UGAAbilityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARAbilityBase)


#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARAbilityBase(); \
	friend struct Z_Construct_UClass_UARAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UARAbilityBase, UGAAbilityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARAbilityBase)


#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARAbilityBase(UARAbilityBase&&); \
	NO_API UARAbilityBase(const UARAbilityBase&); \
public:


#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARAbilityBase(UARAbilityBase&&); \
	NO_API UARAbilityBase(const UARAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARAbilityBase)


#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_12_PROLOG
#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_INCLASS \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Abilities_ARAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
