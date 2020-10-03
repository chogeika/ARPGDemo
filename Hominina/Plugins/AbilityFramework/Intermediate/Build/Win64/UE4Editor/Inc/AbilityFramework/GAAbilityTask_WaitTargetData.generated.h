// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_GAAbilityTask_WaitTargetData_generated_h
#error "GAAbilityTask_WaitTargetData.generated.h already included, missing '#pragma once' in GAAbilityTask_WaitTargetData.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_WaitTargetData_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_7_DELEGATE \
static inline void FGASOnTargetingTaskConfimred_DelegateWrapper(const FMulticastScriptDelegate& GASOnTargetingTaskConfimred) \
{ \
	GASOnTargetingTaskConfimred.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConfirm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConfirm(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConfirm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConfirm(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_WaitTargetData, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_WaitTargetData)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_WaitTargetData, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_WaitTargetData)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_WaitTargetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_WaitTargetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_WaitTargetData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_WaitTargetData(UGAAbilityTask_WaitTargetData&&); \
	NO_API UGAAbilityTask_WaitTargetData(const UGAAbilityTask_WaitTargetData&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_WaitTargetData(UGAAbilityTask_WaitTargetData&&); \
	NO_API UGAAbilityTask_WaitTargetData(const UGAAbilityTask_WaitTargetData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_WaitTargetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_WaitTargetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_WaitTargetData)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_12_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_WaitTargetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_WaitTargetData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
