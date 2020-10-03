// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARItemSpawnerBase_generated_h
#error "ARItemSpawnerBase.generated.h already included, missing '#pragma once' in ARItemSpawnerBase.h"
#endif
#define HOMININA_ARItemSpawnerBase_generated_h

#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleRespawn(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleRespawn(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARItemSpawnerBase(); \
	friend struct Z_Construct_UClass_AARItemSpawnerBase_Statics; \
public: \
	DECLARE_CLASS(AARItemSpawnerBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARItemSpawnerBase)


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAARItemSpawnerBase(); \
	friend struct Z_Construct_UClass_AARItemSpawnerBase_Statics; \
public: \
	DECLARE_CLASS(AARItemSpawnerBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARItemSpawnerBase)


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARItemSpawnerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARItemSpawnerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARItemSpawnerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARItemSpawnerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARItemSpawnerBase(AARItemSpawnerBase&&); \
	NO_API AARItemSpawnerBase(const AARItemSpawnerBase&); \
public:


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARItemSpawnerBase(AARItemSpawnerBase&&); \
	NO_API AARItemSpawnerBase(const AARItemSpawnerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARItemSpawnerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARItemSpawnerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARItemSpawnerBase)


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_15_PROLOG
#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_INCLASS \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARItemSpawnerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARItemSpawnerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_ARItemSpawnerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
