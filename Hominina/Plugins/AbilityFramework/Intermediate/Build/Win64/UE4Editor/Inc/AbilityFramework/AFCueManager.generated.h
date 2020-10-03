// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_AFCueManager_generated_h
#error "AFCueManager.generated.h already included, missing '#pragma once' in AFCueManager.h"
#endif
#define ABILITYFRAMEWORK_AFCueManager_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFCueData_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFCueData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_RPC_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFCueManager(); \
	friend struct Z_Construct_UClass_UAFCueManager_Statics; \
public: \
	DECLARE_CLASS(UAFCueManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFCueManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUAFCueManager(); \
	friend struct Z_Construct_UClass_UAFCueManager_Statics; \
public: \
	DECLARE_CLASS(UAFCueManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFCueManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFCueManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFCueManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFCueManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFCueManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFCueManager(UAFCueManager&&); \
	NO_API UAFCueManager(const UAFCueManager&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFCueManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFCueManager(UAFCueManager&&); \
	NO_API UAFCueManager(const UAFCueManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFCueManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFCueManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFCueManager)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticCues() { return STRUCT_OFFSET(UAFCueManager, StaticCues); }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_90_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFCueManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueManager_h


#define FOREACH_ENUM_EAFCUEEVENT(op) \
	op(Activated) \
	op(Executed) \
	op(Expire) \
	op(Removed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
