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
class UAFEffectTask_EffectAppliedToSelf;
#ifdef ABILITYFRAMEWORK_AFEffectTask_EffectAppliedToSelf_generated_h
#error "AFEffectTask_EffectAppliedToSelf.generated.h already included, missing '#pragma once' in AFEffectTask_EffectAppliedToSelf.h"
#endif
#define ABILITYFRAMEWORK_AFEffectTask_EffectAppliedToSelf_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_21_DELEGATE \
struct AFEffectTask_EffectAppliedToSelf_eventAFEffectEventDelegate_Parms \
{ \
	FGAEffectContext Context; \
	FAFPropertytHandle Property; \
	FAFEffectSpec Spec; \
}; \
static inline void FAFEffectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AFEffectEventDelegate, FGAEffectContext Context, FAFPropertytHandle Property, FAFEffectSpec Spec) \
{ \
	AFEffectTask_EffectAppliedToSelf_eventAFEffectEventDelegate_Parms Parms; \
	Parms.Context=Context; \
	Parms.Property=Property; \
	Parms.Spec=Spec; \
	AFEffectEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenEffectAppliedToSelf) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_EffectAppliedToSelf**)Z_Param__Result=UAFEffectTask_EffectAppliedToSelf::ListenEffectAppliedToSelf(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenEffectAppliedToSelf) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskName); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_EffectAppliedToSelf**)Z_Param__Result=UAFEffectTask_EffectAppliedToSelf::ListenEffectAppliedToSelf(Z_Param_OwningExtension,Z_Param_TaskName,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectTask_EffectAppliedToSelf(); \
	friend struct Z_Construct_UClass_UAFEffectTask_EffectAppliedToSelf_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_EffectAppliedToSelf, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_EffectAppliedToSelf)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectTask_EffectAppliedToSelf(); \
	friend struct Z_Construct_UClass_UAFEffectTask_EffectAppliedToSelf_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_EffectAppliedToSelf, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_EffectAppliedToSelf)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectTask_EffectAppliedToSelf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_EffectAppliedToSelf) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_EffectAppliedToSelf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_EffectAppliedToSelf); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_EffectAppliedToSelf(UAFEffectTask_EffectAppliedToSelf&&); \
	NO_API UAFEffectTask_EffectAppliedToSelf(const UAFEffectTask_EffectAppliedToSelf&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_EffectAppliedToSelf(UAFEffectTask_EffectAppliedToSelf&&); \
	NO_API UAFEffectTask_EffectAppliedToSelf(const UAFEffectTask_EffectAppliedToSelf&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_EffectAppliedToSelf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_EffectAppliedToSelf); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_EffectAppliedToSelf)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_16_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectTask_EffectAppliedToSelf>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_EffectAppliedToSelf_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
