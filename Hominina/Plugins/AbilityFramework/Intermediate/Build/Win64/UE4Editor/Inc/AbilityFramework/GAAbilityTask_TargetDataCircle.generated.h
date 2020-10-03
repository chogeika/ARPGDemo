// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGAAbilityBase;
enum class EGASConfirmType : uint8;
class UGAAbilityTask_TargetDataCircle;
#ifdef ABILITYFRAMEWORK_GAAbilityTask_TargetDataCircle_generated_h
#error "GAAbilityTask_TargetDataCircle.generated.h already included, missing '#pragma once' in GAAbilityTask_TargetDataCircle.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_TargetDataCircle_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTargetCircleDataTask) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_ENUM(EGASConfirmType,Z_Param_ConfirmTypeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_TargetDataCircle**)Z_Param__Result=UGAAbilityTask_TargetDataCircle::TargetCircleDataTask(Z_Param_WorldContextObject,Z_Param_InTaskName,EGASConfirmType(Z_Param_ConfirmTypeIn)); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTargetCircleDataTask) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_ENUM(EGASConfirmType,Z_Param_ConfirmTypeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_TargetDataCircle**)Z_Param__Result=UGAAbilityTask_TargetDataCircle::TargetCircleDataTask(Z_Param_WorldContextObject,Z_Param_InTaskName,EGASConfirmType(Z_Param_ConfirmTypeIn)); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_TargetDataCircle(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_TargetDataCircle, UGAAbilityTask_TargetData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_TargetDataCircle)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_TargetDataCircle(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_TargetDataCircle, UGAAbilityTask_TargetData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_TargetDataCircle)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_TargetDataCircle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_TargetDataCircle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_TargetDataCircle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_TargetDataCircle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_TargetDataCircle(UGAAbilityTask_TargetDataCircle&&); \
	NO_API UGAAbilityTask_TargetDataCircle(const UGAAbilityTask_TargetDataCircle&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_TargetDataCircle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_TargetDataCircle(UGAAbilityTask_TargetDataCircle&&); \
	NO_API UGAAbilityTask_TargetDataCircle(const UGAAbilityTask_TargetDataCircle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_TargetDataCircle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_TargetDataCircle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_TargetDataCircle)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_14_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_TargetDataCircle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataCircle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
