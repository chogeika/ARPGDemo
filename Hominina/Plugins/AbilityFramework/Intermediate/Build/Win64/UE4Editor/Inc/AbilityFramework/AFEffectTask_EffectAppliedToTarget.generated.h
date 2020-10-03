// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGAEffectContext;
struct FAFPropertytHandle;
struct FAFEffectSpec;
class UGAEffectExtension;
class AActor;
class UAFEffectTask_EffectAppliedToTarget;
#ifdef ABILITYFRAMEWORK_AFEffectTask_EffectAppliedToTarget_generated_h
#error "AFEffectTask_EffectAppliedToTarget.generated.h already included, missing '#pragma once' in AFEffectTask_EffectAppliedToTarget.h"
#endif
#define ABILITYFRAMEWORK_AFEffectTask_EffectAppliedToTarget_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_21_DELEGATE \
struct AFEffectTask_EffectAppliedToTarget_eventAFEffectEventDelegate_Parms \
{ \
	FGAEffectContext Context; \
	FAFPropertytHandle Property; \
	FAFEffectSpec Spec; \
}; \
static inline void FAFEffectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AFEffectEventDelegate, FGAEffectContext Context, FAFPropertytHandle Property, FAFEffectSpec Spec) \
{ \
	AFEffectTask_EffectAppliedToTarget_eventAFEffectEventDelegate_Parms Parms; \
	Parms.Context=Context; \
	Parms.Property=Property; \
	Parms.Spec=Spec; \
	AFEffectEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenEffectAppliedToTarget) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_EffectAppliedToTarget**)Z_Param__Result=UAFEffectTask_EffectAppliedToTarget::ListenEffectAppliedToTarget(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenEffectAppliedToTarget) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_EffectAppliedToTarget**)Z_Param__Result=UAFEffectTask_EffectAppliedToTarget::ListenEffectAppliedToTarget(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectTask_EffectAppliedToTarget(); \
	friend struct Z_Construct_UClass_UAFEffectTask_EffectAppliedToTarget_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_EffectAppliedToTarget, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_EffectAppliedToTarget)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectTask_EffectAppliedToTarget(); \
	friend struct Z_Construct_UClass_UAFEffectTask_EffectAppliedToTarget_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_EffectAppliedToTarget, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_EffectAppliedToTarget)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectTask_EffectAppliedToTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_EffectAppliedToTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_EffectAppliedToTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_EffectAppliedToTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_EffectAppliedToTarget(UAFEffectTask_EffectAppliedToTarget&&); \
	NO_API UAFEffectTask_EffectAppliedToTarget(const UAFEffectTask_EffectAppliedToTarget&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_EffectAppliedToTarget(UAFEffectTask_EffectAppliedToTarget&&); \
	NO_API UAFEffectTask_EffectAppliedToTarget(const UAFEffectTask_EffectAppliedToTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_EffectAppliedToTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_EffectAppliedToTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_EffectAppliedToTarget)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_16_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectTask_EffectAppliedToTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
