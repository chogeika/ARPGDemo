// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAFEffectSpecHandle;
class UObject;
struct FAFPropertytHandle;
class APawn;
struct FGameplayTag;
struct FGAEffectHandle;
class UAFAbilityComponent;
struct FAFContextHandle;
struct FGAEffectContext;
struct FHitResult;
struct FAFFunctionModifier;
class AActor;
#ifdef ABILITYFRAMEWORK_GABlueprintLibrary_generated_h
#error "GABlueprintLibrary.generated.h already included, missing '#pragma once' in GABlueprintLibrary.h"
#endif
#define ABILITYFRAMEWORK_GABlueprintLibrary_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execModifyAttributeSimple) \
	{ \
		P_GET_STRUCT_REF(FAFEffectSpecHandle,Z_Param_Out_InSpec); \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::ModifyAttributeSimple(Z_Param_Out_InSpec,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyEffectFromSpec) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_STRUCT_REF(FAFEffectSpecHandle,Z_Param_Out_InSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::ApplyEffectFromSpec(Z_Param_Out_InEffect,Z_Param_Out_InSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateEffectSpec) \
	{ \
		P_GET_STRUCT_REF(FAFEffectSpecHandle,Z_Param_Out_InOutSpec); \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::CreateEffectSpec(Z_Param_Out_InOutSpec,Z_Param_Out_InEffect,Z_Param_Target,Z_Param_Instigator,Z_Param_Causer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcastEffectEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::BroadcastEffectEvent(Z_Param_Target,Z_Param_EventTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigatorComponent) \
	{ \
		P_GET_STRUCT_REF(FGAEffectHandle,Z_Param_Out_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=UGABlueprintLibrary::GetInstigatorComponent(Z_Param_Out_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetComponent) \
	{ \
		P_GET_STRUCT_REF(FGAEffectHandle,Z_Param_Out_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=UGABlueprintLibrary::GetTargetComponent(Z_Param_Out_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContext) \
	{ \
		P_GET_STRUCT_REF(FAFContextHandle,Z_Param_Out_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGAEffectContext*)Z_Param__Result=UGABlueprintLibrary::GetContext(Z_Param_Out_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToTargets) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_Targets); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToTargets(Z_Param_Out_InEffect,Z_Param_Out_Targets,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToActors) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_TARRAY(AActor*,Z_Param_Targets); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToActors(Z_Param_Out_InEffect,Z_Param_Targets,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToObjects) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_TARRAY(UObject*,Z_Param_Targets); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToObjects(Z_Param_Out_InEffect,Z_Param_Targets,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToLocation) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToLocation(Z_Param_Out_InEffect,Z_Param_Out_Target,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToActor) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToActor(Z_Param_Out_InEffect,Z_Param_Target,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToObject) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToObject(Z_Param_Out_InEffect,Z_Param_Target,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyAttributeSimple) \
	{ \
		P_GET_STRUCT_REF(FAFEffectSpecHandle,Z_Param_Out_InSpec); \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::ModifyAttributeSimple(Z_Param_Out_InSpec,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyEffectFromSpec) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_STRUCT_REF(FAFEffectSpecHandle,Z_Param_Out_InSpec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::ApplyEffectFromSpec(Z_Param_Out_InEffect,Z_Param_Out_InSpec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateEffectSpec) \
	{ \
		P_GET_STRUCT_REF(FAFEffectSpecHandle,Z_Param_Out_InOutSpec); \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::CreateEffectSpec(Z_Param_Out_InOutSpec,Z_Param_Out_InEffect,Z_Param_Target,Z_Param_Instigator,Z_Param_Causer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcastEffectEvent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGABlueprintLibrary::BroadcastEffectEvent(Z_Param_Target,Z_Param_EventTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigatorComponent) \
	{ \
		P_GET_STRUCT_REF(FGAEffectHandle,Z_Param_Out_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=UGABlueprintLibrary::GetInstigatorComponent(Z_Param_Out_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetComponent) \
	{ \
		P_GET_STRUCT_REF(FGAEffectHandle,Z_Param_Out_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=UGABlueprintLibrary::GetTargetComponent(Z_Param_Out_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContext) \
	{ \
		P_GET_STRUCT_REF(FAFContextHandle,Z_Param_Out_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGAEffectContext*)Z_Param__Result=UGABlueprintLibrary::GetContext(Z_Param_Out_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToTargets) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_Targets); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToTargets(Z_Param_Out_InEffect,Z_Param_Out_Targets,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToActors) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_TARRAY(AActor*,Z_Param_Targets); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToActors(Z_Param_Out_InEffect,Z_Param_Targets,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToObjects) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_TARRAY(UObject*,Z_Param_Targets); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToObjects(Z_Param_Out_InEffect,Z_Param_Targets,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToLocation) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToLocation(Z_Param_Out_InEffect,Z_Param_Out_Target,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToActor) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToActor(Z_Param_Out_InEffect,Z_Param_Target,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyGameEffectToObject) \
	{ \
		P_GET_STRUCT_REF(FAFPropertytHandle,Z_Param_Out_InEffect); \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT_REF(FAFFunctionModifier,Z_Param_Out_Modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGAEffectHandle>*)Z_Param__Result=UGABlueprintLibrary::ApplyGameEffectToObject(Z_Param_Out_InEffect,Z_Param_Target,Z_Param_Instigator,Z_Param_Causer,Z_Param_Out_Modifier); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGABlueprintLibrary(); \
	friend struct Z_Construct_UClass_UGABlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UGABlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGABlueprintLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGABlueprintLibrary(); \
	friend struct Z_Construct_UClass_UGABlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UGABlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGABlueprintLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGABlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGABlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGABlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGABlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGABlueprintLibrary(UGABlueprintLibrary&&); \
	NO_API UGABlueprintLibrary(const UGABlueprintLibrary&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGABlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGABlueprintLibrary(UGABlueprintLibrary&&); \
	NO_API UGABlueprintLibrary(const UGABlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGABlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGABlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGABlueprintLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_8_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GABlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGABlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GABlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
