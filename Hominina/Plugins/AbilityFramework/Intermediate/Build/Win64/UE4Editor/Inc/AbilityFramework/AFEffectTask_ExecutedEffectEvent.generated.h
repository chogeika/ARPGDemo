// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAFEventData;
class UGAEffectExtension;
struct FGameplayTag;
class AActor;
class UAFEffectTask_ExecutedEffectEvent;
#ifdef ABILITYFRAMEWORK_AFEffectTask_ExecutedEffectEvent_generated_h
#error "AFEffectTask_ExecutedEffectEvent.generated.h already included, missing '#pragma once' in AFEffectTask_ExecutedEffectEvent.h"
#endif
#define ABILITYFRAMEWORK_AFEffectTask_ExecutedEffectEvent_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_20_DELEGATE \
struct AFEffectTask_ExecutedEffectEvent_eventAFEffectEventDelegate_Parms \
{ \
	FAFEventData Payload; \
}; \
static inline void FAFEffectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AFEffectEventDelegate, FAFEventData Payload) \
{ \
	AFEffectTask_ExecutedEffectEvent_eventAFEffectEventDelegate_Parms Parms; \
	Parms.Payload=Payload; \
	AFEffectEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenExecutedEffectEvent) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_ExecutedEffectEvent**)Z_Param__Result=UAFEffectTask_ExecutedEffectEvent::ListenExecutedEffectEvent(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_EventTag,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenExecutedEffectEvent) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_ExecutedEffectEvent**)Z_Param__Result=UAFEffectTask_ExecutedEffectEvent::ListenExecutedEffectEvent(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_EventTag,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectTask_ExecutedEffectEvent(); \
	friend struct Z_Construct_UClass_UAFEffectTask_ExecutedEffectEvent_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_ExecutedEffectEvent, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_ExecutedEffectEvent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectTask_ExecutedEffectEvent(); \
	friend struct Z_Construct_UClass_UAFEffectTask_ExecutedEffectEvent_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_ExecutedEffectEvent, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_ExecutedEffectEvent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectTask_ExecutedEffectEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_ExecutedEffectEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_ExecutedEffectEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_ExecutedEffectEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_ExecutedEffectEvent(UAFEffectTask_ExecutedEffectEvent&&); \
	NO_API UAFEffectTask_ExecutedEffectEvent(const UAFEffectTask_ExecutedEffectEvent&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_ExecutedEffectEvent(UAFEffectTask_ExecutedEffectEvent&&); \
	NO_API UAFEffectTask_ExecutedEffectEvent(const UAFEffectTask_ExecutedEffectEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_ExecutedEffectEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_ExecutedEffectEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_ExecutedEffectEvent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_15_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectTask_ExecutedEffectEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_ExecutedEffectEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
