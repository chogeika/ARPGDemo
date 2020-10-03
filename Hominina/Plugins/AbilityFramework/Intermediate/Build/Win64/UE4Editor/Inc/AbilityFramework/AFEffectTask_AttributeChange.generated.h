// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAFAttributeChangedData;
class UGAEffectExtension;
struct FGAAttribute;
class AActor;
class UAFEffectTask_AttributeChange;
#ifdef ABILITYFRAMEWORK_AFEffectTask_AttributeChange_generated_h
#error "AFEffectTask_AttributeChange.generated.h already included, missing '#pragma once' in AFEffectTask_AttributeChange.h"
#endif
#define ABILITYFRAMEWORK_AFEffectTask_AttributeChange_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_8_DELEGATE \
struct _Script_AbilityFramework_eventAFTaskAttributeChangedDelegate_Parms \
{ \
	FAFAttributeChangedData Payload; \
}; \
static inline void FAFTaskAttributeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AFTaskAttributeChangedDelegate, FAFAttributeChangedData Payload) \
{ \
	_Script_AbilityFramework_eventAFTaskAttributeChangedDelegate_Parms Parms; \
	Parms.Payload=Payload; \
	AFTaskAttributeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenAttributeChanged) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_STRUCT(FGAAttribute,Z_Param_InAttribute); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_AttributeChange**)Z_Param__Result=UAFEffectTask_AttributeChange::ListenAttributeChanged(Z_Param_OwningExtension,Z_Param_InAttribute,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenAttributeChanged) \
	{ \
		P_GET_OBJECT(UGAEffectExtension,Z_Param_OwningExtension); \
		P_GET_STRUCT(FGAAttribute,Z_Param_InAttribute); \
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget); \
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectTask_AttributeChange**)Z_Param__Result=UAFEffectTask_AttributeChange::ListenAttributeChanged(Z_Param_OwningExtension,Z_Param_InAttribute,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectTask_AttributeChange(); \
	friend struct Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_AttributeChange, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_AttributeChange)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectTask_AttributeChange(); \
	friend struct Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics; \
public: \
	DECLARE_CLASS(UAFEffectTask_AttributeChange, UAFEffectTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectTask_AttributeChange)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectTask_AttributeChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_AttributeChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_AttributeChange); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_AttributeChange); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_AttributeChange(UAFEffectTask_AttributeChange&&); \
	NO_API UAFEffectTask_AttributeChange(const UAFEffectTask_AttributeChange&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectTask_AttributeChange(UAFEffectTask_AttributeChange&&); \
	NO_API UAFEffectTask_AttributeChange(const UAFEffectTask_AttributeChange&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectTask_AttributeChange); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectTask_AttributeChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectTask_AttributeChange)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_13_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectTask_AttributeChange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_EffectTasks_AFEffectTask_AttributeChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
