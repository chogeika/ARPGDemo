// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UGAAbilityBase;
class UAnimMontage;
class UGAAbilityTask_PlayMontage;
#ifdef ABILITYFRAMEWORK_GAAbilityTask_PlayMontage_generated_h
#error "GAAbilityTask_PlayMontage.generated.h already included, missing '#pragma once' in GAAbilityTask_PlayMontage.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_PlayMontage_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_9_DELEGATE \
struct _Script_AbilityFramework_eventGASGenericMontageDelegate_Parms \
{ \
	FGameplayTag Tag; \
	FName NotifyName; \
}; \
static inline void FGASGenericMontageDelegate_DelegateWrapper(const FMulticastScriptDelegate& GASGenericMontageDelegate, FGameplayTag Tag, FName NotifyName) \
{ \
	_Script_AbilityFramework_eventGASGenericMontageDelegate_Parms Parms; \
	Parms.Tag=Tag; \
	Parms.NotifyName=NotifyName; \
	GASGenericMontageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbilityPlayMontage) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionNameIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRateIn); \
		P_GET_UBOOL(Z_Param_bInUseActivationTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_PlayMontage**)Z_Param__Result=UGAAbilityTask_PlayMontage::AbilityPlayMontage(Z_Param_WorldContextObject,Z_Param_InTaskName,Z_Param_MontageIn,Z_Param_SectionNameIn,Z_Param_PlayRateIn,Z_Param_bInUseActivationTime); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbilityPlayMontage) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionNameIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRateIn); \
		P_GET_UBOOL(Z_Param_bInUseActivationTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_PlayMontage**)Z_Param__Result=UGAAbilityTask_PlayMontage::AbilityPlayMontage(Z_Param_WorldContextObject,Z_Param_InTaskName,Z_Param_MontageIn,Z_Param_SectionNameIn,Z_Param_PlayRateIn,Z_Param_bInUseActivationTime); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_PlayMontage(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_PlayMontage, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_PlayMontage)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_PlayMontage(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_PlayMontage, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_PlayMontage)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_PlayMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_PlayMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_PlayMontage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_PlayMontage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_PlayMontage(UGAAbilityTask_PlayMontage&&); \
	NO_API UGAAbilityTask_PlayMontage(const UGAAbilityTask_PlayMontage&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_PlayMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_PlayMontage(UGAAbilityTask_PlayMontage&&); \
	NO_API UGAAbilityTask_PlayMontage(const UGAAbilityTask_PlayMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_PlayMontage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_PlayMontage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_PlayMontage)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_14_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_PlayMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_PlayMontage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
