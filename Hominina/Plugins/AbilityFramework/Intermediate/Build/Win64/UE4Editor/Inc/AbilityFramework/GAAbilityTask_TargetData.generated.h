// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UGAAbilityBase;
enum class EGASConfirmType : uint8;
class UGAAbilityTask_TargetData;
#ifdef ABILITYFRAMEWORK_GAAbilityTask_TargetData_generated_h
#error "GAAbilityTask_TargetData.generated.h already included, missing '#pragma once' in GAAbilityTask_TargetData.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_TargetData_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_8_DELEGATE \
struct _Script_AbilityFramework_eventGASOnReceiveTargetData_Parms \
{ \
	FHitResult HitResult; \
}; \
static inline void FGASOnReceiveTargetData_DelegateWrapper(const FMulticastScriptDelegate& GASOnReceiveTargetData, FHitResult const& HitResult) \
{ \
	_Script_AbilityFramework_eventGASOnReceiveTargetData_Parms Parms; \
	Parms.HitResult=HitResult; \
	GASOnReceiveTargetData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCastEndedConfirm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCastEndedConfirm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConfirm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConfirm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTargetDataTask) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_UBOOL(Z_Param_bDrawCorrectedDebug); \
		P_GET_UBOOL(Z_Param_bUseCorrectedTrace); \
		P_GET_ENUM(EGASConfirmType,Z_Param_ConfirmTypeIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_TargetData**)Z_Param__Result=UGAAbilityTask_TargetData::CreateTargetDataTask(Z_Param_WorldContextObject,Z_Param_InTaskName,Z_Param_bDrawDebug,Z_Param_bDrawCorrectedDebug,Z_Param_bUseCorrectedTrace,EGASConfirmType(Z_Param_ConfirmTypeIn),Z_Param_Range); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCastEndedConfirm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCastEndedConfirm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConfirm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConfirm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTargetDataTask) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_UBOOL(Z_Param_bDrawCorrectedDebug); \
		P_GET_UBOOL(Z_Param_bUseCorrectedTrace); \
		P_GET_ENUM(EGASConfirmType,Z_Param_ConfirmTypeIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_TargetData**)Z_Param__Result=UGAAbilityTask_TargetData::CreateTargetDataTask(Z_Param_WorldContextObject,Z_Param_InTaskName,Z_Param_bDrawDebug,Z_Param_bDrawCorrectedDebug,Z_Param_bUseCorrectedTrace,EGASConfirmType(Z_Param_ConfirmTypeIn),Z_Param_Range); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_TargetData(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_TargetData_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_TargetData, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_TargetData)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_TargetData(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_TargetData_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_TargetData, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_TargetData)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_TargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_TargetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_TargetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_TargetData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_TargetData(UGAAbilityTask_TargetData&&); \
	NO_API UGAAbilityTask_TargetData(const UGAAbilityTask_TargetData&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_TargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_TargetData(UGAAbilityTask_TargetData&&); \
	NO_API UGAAbilityTask_TargetData(const UGAAbilityTask_TargetData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_TargetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_TargetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_TargetData)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_21_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_TargetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetData_h


#define FOREACH_ENUM_EGASCONFIRMTYPE(op) \
	op(EGASConfirmType::Instant) \
	op(EGASConfirmType::WaitForConfirm) 

enum class EGASConfirmType : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGASConfirmType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
