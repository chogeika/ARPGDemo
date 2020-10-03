// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARItemPickupBase_generated_h
#error "ARItemPickupBase.generated.h already included, missing '#pragma once' in ARItemPickupBase.h"
#endif
#define HOMININA_ARItemPickupBase_generated_h

#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARItemPickupBase(); \
	friend struct Z_Construct_UClass_AARItemPickupBase_Statics; \
public: \
	DECLARE_CLASS(AARItemPickupBase, AIFItemActorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARItemPickupBase)


#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAARItemPickupBase(); \
	friend struct Z_Construct_UClass_AARItemPickupBase_Statics; \
public: \
	DECLARE_CLASS(AARItemPickupBase, AIFItemActorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARItemPickupBase)


#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARItemPickupBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARItemPickupBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARItemPickupBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARItemPickupBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARItemPickupBase(AARItemPickupBase&&); \
	NO_API AARItemPickupBase(const AARItemPickupBase&); \
public:


#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARItemPickupBase(AARItemPickupBase&&); \
	NO_API AARItemPickupBase(const AARItemPickupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARItemPickupBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARItemPickupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARItemPickupBase)


#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnedBy() { return STRUCT_OFFSET(AARItemPickupBase, SpawnedBy); }


#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_9_PROLOG
#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_INCLASS \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARItemPickupBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARItemPickupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_ARItemPickupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
