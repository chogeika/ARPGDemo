// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGAAbilityBase;
class UGAAbilityTask_Repeat;
#ifdef ABILITYFRAMEWORK_GAAbilityTask_Repeat_generated_h
#error "GAAbilityTask_Repeat.generated.h already included, missing '#pragma once' in GAAbilityTask_Repeat.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_Repeat_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_8_DELEGATE \
static inline void FGASOnTaskRepeated_DelegateWrapper(const FMulticastScriptDelegate& GASOnTaskRepeated) \
{ \
	GASOnTaskRepeated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateRepeatTask) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_Repeat**)Z_Param__Result=UGAAbilityTask_Repeat::CreateRepeatTask(Z_Param_WorldContextObject,Z_Param_InTaskName); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateRepeatTask) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_Repeat**)Z_Param__Result=UGAAbilityTask_Repeat::CreateRepeatTask(Z_Param_WorldContextObject,Z_Param_InTaskName); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_Repeat(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_Repeat_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_Repeat, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_Repeat)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_Repeat(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_Repeat_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_Repeat, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_Repeat)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_Repeat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_Repeat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_Repeat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_Repeat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_Repeat(UGAAbilityTask_Repeat&&); \
	NO_API UGAAbilityTask_Repeat(const UGAAbilityTask_Repeat&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_Repeat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_Repeat(UGAAbilityTask_Repeat&&); \
	NO_API UGAAbilityTask_Repeat(const UGAAbilityTask_Repeat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_Repeat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_Repeat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_Repeat)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnTaskRepeated() { return STRUCT_OFFSET(UGAAbilityTask_Repeat, OnTaskRepeated); }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_13_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_Repeat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_Repeat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
