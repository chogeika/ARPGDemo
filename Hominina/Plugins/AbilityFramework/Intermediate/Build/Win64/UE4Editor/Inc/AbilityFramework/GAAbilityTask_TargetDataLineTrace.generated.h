// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FAFLineTraceConfirmData;
struct FAFLineTraceData;
class UGAAbilityBase;
class USkeletalMeshComponent;
enum class EAFConfirmType : uint8;
class UGAAbilityTask_TargetDataLineTrace;
#ifdef ABILITYFRAMEWORK_GAAbilityTask_TargetDataLineTrace_generated_h
#error "GAAbilityTask_TargetDataLineTrace.generated.h already included, missing '#pragma once' in GAAbilityTask_TargetDataLineTrace.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityTask_TargetDataLineTrace_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFLineTraceConfirmData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFLineTraceData_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFLineTraceData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_9_DELEGATE \
struct _Script_AbilityFramework_eventAFOnTargetReceived_Parms \
{ \
	FHitResult HitResult; \
}; \
static inline void FAFOnTargetReceived_DelegateWrapper(const FMulticastScriptDelegate& AFOnTargetReceived, FHitResult const& HitResult) \
{ \
	_Script_AbilityFramework_eventAFOnTargetReceived_Parms Parms; \
	Parms.HitResult=HitResult; \
	AFOnTargetReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_RPC_WRAPPERS \
	virtual void ClientConfirmHitInfo_Implementation(FAFLineTraceConfirmData ConfirmData); \
	virtual bool ServerConfirmHitInfo_Validate(FAFLineTraceData ); \
	virtual void ServerConfirmHitInfo_Implementation(FAFLineTraceData TraceData); \
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
	DECLARE_FUNCTION(execClientConfirmHitInfo) \
	{ \
		P_GET_STRUCT(FAFLineTraceConfirmData,Z_Param_ConfirmData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientConfirmHitInfo_Implementation(Z_Param_ConfirmData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerConfirmHitInfo) \
	{ \
		P_GET_STRUCT(FAFLineTraceData,Z_Param_TraceData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerConfirmHitInfo_Validate(Z_Param_TraceData)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerConfirmHitInfo_Validate")); \
			return; \
		} \
		P_THIS->ServerConfirmHitInfo_Implementation(Z_Param_TraceData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTargetDataLineTrace) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InTraceChannel); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSocketComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_ENUM(EAFConfirmType,Z_Param_ConfirmTypeIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_TargetDataLineTrace**)Z_Param__Result=UGAAbilityTask_TargetDataLineTrace::CreateTargetDataLineTrace(Z_Param_WorldContextObject,Z_Param_InTaskName,ETraceTypeQuery(Z_Param_InTraceChannel),Z_Param_InSocketComponent,Z_Param_InSocketName,Z_Param_bDrawDebug,EAFConfirmType(Z_Param_ConfirmTypeIn),Z_Param_Range); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execClientConfirmHitInfo) \
	{ \
		P_GET_STRUCT(FAFLineTraceConfirmData,Z_Param_ConfirmData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientConfirmHitInfo_Implementation(Z_Param_ConfirmData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerConfirmHitInfo) \
	{ \
		P_GET_STRUCT(FAFLineTraceData,Z_Param_TraceData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerConfirmHitInfo_Validate(Z_Param_TraceData)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerConfirmHitInfo_Validate")); \
			return; \
		} \
		P_THIS->ServerConfirmHitInfo_Implementation(Z_Param_TraceData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTargetDataLineTrace) \
	{ \
		P_GET_OBJECT(UGAAbilityBase,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InTaskName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InTraceChannel); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSocketComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_GET_ENUM(EAFConfirmType,Z_Param_ConfirmTypeIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityTask_TargetDataLineTrace**)Z_Param__Result=UGAAbilityTask_TargetDataLineTrace::CreateTargetDataLineTrace(Z_Param_WorldContextObject,Z_Param_InTaskName,ETraceTypeQuery(Z_Param_InTraceChannel),Z_Param_InSocketComponent,Z_Param_InSocketName,Z_Param_bDrawDebug,EAFConfirmType(Z_Param_ConfirmTypeIn),Z_Param_Range); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_EVENT_PARMS \
	struct GAAbilityTask_TargetDataLineTrace_eventClientConfirmHitInfo_Parms \
	{ \
		FAFLineTraceConfirmData ConfirmData; \
	}; \
	struct GAAbilityTask_TargetDataLineTrace_eventServerConfirmHitInfo_Parms \
	{ \
		FAFLineTraceData TraceData; \
	};


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_TargetDataLineTrace(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_TargetDataLineTrace, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_TargetDataLineTrace)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityTask_TargetDataLineTrace(); \
	friend struct Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityTask_TargetDataLineTrace, UGAAbilityTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityTask_TargetDataLineTrace)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityTask_TargetDataLineTrace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_TargetDataLineTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_TargetDataLineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_TargetDataLineTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_TargetDataLineTrace(UGAAbilityTask_TargetDataLineTrace&&); \
	NO_API UGAAbilityTask_TargetDataLineTrace(const UGAAbilityTask_TargetDataLineTrace&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityTask_TargetDataLineTrace(UGAAbilityTask_TargetDataLineTrace&&); \
	NO_API UGAAbilityTask_TargetDataLineTrace(const UGAAbilityTask_TargetDataLineTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityTask_TargetDataLineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityTask_TargetDataLineTrace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityTask_TargetDataLineTrace)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_44_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityTask_TargetDataLineTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_Tasks_GAAbilityTask_TargetDataLineTrace_h


#define FOREACH_ENUM_EAFCONFIRMTYPE(op) \
	op(EAFConfirmType::Instant) \
	op(EAFConfirmType::WaitForConfirm) 

enum class EAFConfirmType : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFConfirmType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
