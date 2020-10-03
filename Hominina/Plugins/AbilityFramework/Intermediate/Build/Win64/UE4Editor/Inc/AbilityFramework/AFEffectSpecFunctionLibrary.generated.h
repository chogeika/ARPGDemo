// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAFEffectSpecHandle;
enum class EAFTagCompare : uint8;
struct FGameplayTag;
enum class EAFTagCompareResult : uint8;
enum class EAFTagContainerCompare : uint8;
struct FGameplayTagContainer;
#ifdef ABILITYFRAMEWORK_AFEffectSpecFunctionLibrary_generated_h
#error "AFEffectSpecFunctionLibrary.generated.h already included, missing '#pragma once' in AFEffectSpecFunctionLibrary.h"
#endif
#define ABILITYFRAMEWORK_AFEffectSpecFunctionLibrary_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompareOwnedTag) \
	{ \
		P_GET_STRUCT(FAFEffectSpecHandle,Z_Param_Spec); \
		P_GET_ENUM(EAFTagCompare,Z_Param_Mode); \
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag); \
		P_GET_ENUM_REF(EAFTagCompareResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFEffectSpecFunctionLibrary::CompareOwnedTag(Z_Param_Spec,EAFTagCompare(Z_Param_Mode),Z_Param_InTag,(EAFTagCompareResult&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareOwnedTags) \
	{ \
		P_GET_STRUCT(FAFEffectSpecHandle,Z_Param_Spec); \
		P_GET_ENUM(EAFTagContainerCompare,Z_Param_Mode); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTags); \
		P_GET_ENUM_REF(EAFTagCompareResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFEffectSpecFunctionLibrary::CompareOwnedTags(Z_Param_Spec,EAFTagContainerCompare(Z_Param_Mode),Z_Param_Out_InTags,(EAFTagCompareResult&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendOwnedTags) \
	{ \
		P_GET_STRUCT(FAFEffectSpecHandle,Z_Param_Spec); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFEffectSpecFunctionLibrary::AppendOwnedTags(Z_Param_Spec,Z_Param_Out_InTags); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompareOwnedTag) \
	{ \
		P_GET_STRUCT(FAFEffectSpecHandle,Z_Param_Spec); \
		P_GET_ENUM(EAFTagCompare,Z_Param_Mode); \
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag); \
		P_GET_ENUM_REF(EAFTagCompareResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFEffectSpecFunctionLibrary::CompareOwnedTag(Z_Param_Spec,EAFTagCompare(Z_Param_Mode),Z_Param_InTag,(EAFTagCompareResult&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareOwnedTags) \
	{ \
		P_GET_STRUCT(FAFEffectSpecHandle,Z_Param_Spec); \
		P_GET_ENUM(EAFTagContainerCompare,Z_Param_Mode); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTags); \
		P_GET_ENUM_REF(EAFTagCompareResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFEffectSpecFunctionLibrary::CompareOwnedTags(Z_Param_Spec,EAFTagContainerCompare(Z_Param_Mode),Z_Param_Out_InTags,(EAFTagCompareResult&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendOwnedTags) \
	{ \
		P_GET_STRUCT(FAFEffectSpecHandle,Z_Param_Spec); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFEffectSpecFunctionLibrary::AppendOwnedTags(Z_Param_Spec,Z_Param_Out_InTags); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectSpecFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAFEffectSpecFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectSpecFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectSpecFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAFEffectSpecFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectSpecFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectSpecFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectSpecFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectSpecFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectSpecFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectSpecFunctionLibrary(UAFEffectSpecFunctionLibrary&&); \
	NO_API UAFEffectSpecFunctionLibrary(const UAFEffectSpecFunctionLibrary&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectSpecFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectSpecFunctionLibrary(UAFEffectSpecFunctionLibrary&&); \
	NO_API UAFEffectSpecFunctionLibrary(const UAFEffectSpecFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectSpecFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectSpecFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectSpecFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_35_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectSpecFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFEffectSpecFunctionLibrary_h


#define FOREACH_ENUM_EAFTAGCOMPARE(op) \
	op(EAFTagCompare::HasTag) \
	op(EAFTagCompare::HasTagExact) 

enum class EAFTagCompare : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFTagCompare>();

#define FOREACH_ENUM_EAFTAGCONTAINERCOMPARE(op) \
	op(EAFTagContainerCompare::HasAny) \
	op(EAFTagContainerCompare::HasAnyExact) \
	op(EAFTagContainerCompare::HasAll) \
	op(EAFTagContainerCompare::HasAllExact) 

enum class EAFTagContainerCompare : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFTagContainerCompare>();

#define FOREACH_ENUM_EAFTAGCOMPARERESULT(op) \
	op(EAFTagCompareResult::Match) \
	op(EAFTagCompareResult::NoMatch) 

enum class EAFTagCompareResult : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFTagCompareResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
