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
class UAFEffectTask_EffectEvent;
#ifdef ABILITYFRAMEWORK_AFEffectTask_EffectEvent_generated_h
#error "AFEffectTask_EffectEvent.generated.h already included, missing '#pragma once' in AFEffectTask_EffectEvent.h"
#endif
#define ABILITYFRAMEWORK_AFEffectTask_EffectEvent_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_10_DELEGATE \
struct _Script_AbilityFramework_eventAFEffectEventDelegate_Parms \
{ \
	FAFEventData Payload; \
}; \
static inline void FAFEffectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AFEffectEventDelegate, FAFEventData Payload) \
{ \
	_Script_AbilityFramework_eventAFEffectEventDelegate_Parms Parms; \
	Parms.Payload=Payload; \
	AFEffectEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenEffectEvent) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_EffectEvent**)Z_Param__Result=UAFEffectTask_EffectEvent::ListenEffectEvent(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_EventTag,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenEffectEvent) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_EffectEvent**)Z_Param__Result=UAFEffectTask_EffectEvent::ListenEffectEvent(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_EventTag,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectTask_EffectEvent(); \
	friend struct Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_EffectEvent, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_EffectEvent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectTask_EffectEvent(); \
	friend struct Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_EffectEvent, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_EffectEvent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectTask_EffectEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_EffectEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_EffectEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_EffectEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_EffectEvent(UAFEffectTask_EffectEvent&&); \
	NO_API UAFEffectTask_EffectEvent(const UAFEffectTask_EffectEvent&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_EffectEvent(UAFEffectTask_EffectEvent&&); \
	NO_API UAFEffectTask_EffectEvent(const UAFEffectTask_EffectEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_EffectEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_EffectEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_EffectEvent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_15_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectTask_EffectEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
