// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGAAbilityBase;
class UGAAbilityTask_SpawnActor;
#ifdef ABILITYFRAMEWORK_GAAbilityTask_SpawnActor_generated_h
#error "GAAbilityTask_SpawnActor.generated.h already included, missing '#pragma once' in GAAbilityTask_SpawnActor.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_SpawnActor_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_8_DELEGATE \
struct _Script_AbilityFramework_eventGASSpawnActorDelegate_Parms \
{ \
	AActor* SpawnedActor; \
}; \
static inline void FGASSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& GASSpawnActorDelegate, AActor* SpawnedActor) \
{ \
	_Script_AbilityFramework_eventGASSpawnActorDelegate_Parms Parms; \
	Parms.SpawnedActor=SpawnedActor; \
	GASSpawnActorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSpawningActor(Z_Param_WorldContextObject,Z_Param_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActor) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_WorldContextObject,Z_Param_Class,Z_Param_Out_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActor) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_SpawnActor**)Z_Param__Result=UGAAbilityTask_SpawnActor::SpawnActor(Z_Param_WorldContextObject,Z_Param_InTaskName,Z_Param_Class); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSpawningActor(Z_Param_WorldContextObject,Z_Param_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActor) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_WorldContextObject,Z_Param_Class,Z_Param_Out_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActor) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_SpawnActor**)Z_Param__Result=UGAAbilityTask_SpawnActor::SpawnActor(Z_Param_WorldContextObject,Z_Param_InTaskName,Z_Param_Class); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_SpawnActor(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_SpawnActor, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_SpawnActor)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_SpawnActor(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_SpawnActor, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_SpawnActor)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_SpawnActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_SpawnActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_SpawnActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_SpawnActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_SpawnActor(UGAAbilityTask_SpawnActor&&); \
	NO_API UGAAbilityTask_SpawnActor(const UGAAbilityTask_SpawnActor&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_SpawnActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_SpawnActor(UGAAbilityTask_SpawnActor&&); \
	NO_API UGAAbilityTask_SpawnActor(const UGAAbilityTask_SpawnActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_SpawnActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_SpawnActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_SpawnActor)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_13_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_SpawnActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_SpawnActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
