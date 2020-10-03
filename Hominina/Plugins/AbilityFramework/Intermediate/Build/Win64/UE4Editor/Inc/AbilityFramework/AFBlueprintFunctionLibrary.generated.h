// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;
#ifdef ABILITYFRAMEWORK_AFBlueprintFunctionLibrary_generated_h
#error "AFBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AFBlueprintFunctionLibrary.h"
#endif
#define ABILITYFRAMEWORK_AFBlueprintFunctionLibrary_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerAbilityReleasedByTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFBlueprintFunctionLibrary::TriggerAbilityReleasedByTag(Z_Param_Target,Z_Param_Out_AbilityTag,Z_Param_ActionTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerAbilityPressedByTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFBlueprintFunctionLibrary::TriggerAbilityPressedByTag(Z_Param_Target,Z_Param_Out_AbilityTag,Z_Param_ActionTag); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerAbilityReleasedByTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFBlueprintFunctionLibrary::TriggerAbilityReleasedByTag(Z_Param_Target,Z_Param_Out_AbilityTag,Z_Param_ActionTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerAbilityPressedByTag) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAFBlueprintFunctionLibrary::TriggerAbilityPressedByTag(Z_Param_Target,Z_Param_Out_AbilityTag,Z_Param_ActionTag); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAFBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFBlueprintFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAFBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAFBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFBlueprintFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFBlueprintFunctionLibrary(UAFBlueprintFunctionLibrary&&); \
	NO_API UAFBlueprintFunctionLibrary(const UAFBlueprintFunctionLibrary&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFBlueprintFunctionLibrary(UAFBlueprintFunctionLibrary&&); \
	NO_API UAFBlueprintFunctionLibrary(const UAFBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFBlueprintFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_8_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
