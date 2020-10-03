// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARGameMode_generated_h
#error "ARGameMode.generated.h already included, missing '#pragma once' in ARGameMode.h"
#endif
#define HOMININA_ARGameMode_generated_h

#define Hominina_Source_Hominina_Public_ARGameMode_h_11_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_ARGameMode_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_ARGameMode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARGameMode(); \
	friend struct Z_Construct_UClass_AARGameMode_Statics; \
public: \
	DECLARE_CLASS(AARGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Hominina"), HOMININA_API) \
	DECLARE_SERIALIZER(AARGameMode)


#define Hominina_Source_Hominina_Public_ARGameMode_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAARGameMode(); \
	friend struct Z_Construct_UClass_AARGameMode_Statics; \
public: \
	DECLARE_CLASS(AARGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Hominina"), HOMININA_API) \
	DECLARE_SERIALIZER(AARGameMode)


#define Hominina_Source_Hominina_Public_ARGameMode_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOMININA_API AARGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOMININA_API, AARGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOMININA_API AARGameMode(AARGameMode&&); \
	HOMININA_API AARGameMode(const AARGameMode&); \
public:


#define Hominina_Source_Hominina_Public_ARGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOMININA_API AARGameMode(AARGameMode&&); \
	HOMININA_API AARGameMode(const AARGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOMININA_API, AARGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARGameMode)


#define Hominina_Source_Hominina_Public_ARGameMode_h_11_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_ARGameMode_h_8_PROLOG
#define Hominina_Source_Hominina_Public_ARGameMode_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_INCLASS \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_ARGameMode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_ARGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
