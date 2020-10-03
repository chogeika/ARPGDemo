// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UObject;
struct FAFPropertytHandle;
struct FGAEffectHandle;
class AActor;
struct FGAAttribute;
#ifdef ABILITYFRAMEWORK_GAAttributesBlueprintFunctionLibrary_generated_h
#error "GAAttributesBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GAAttributesBlueprintFunctionLibrary.h"
#endif
#define ABILITYFRAMEWORK_GAAttributesBlueprintFunctionLibrary_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExchangeAttributesValues) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT(FAFPropertytHandle,Z_Param_From); \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_FromHandle); \
		P_GET_OBJECT(UObject,Z_Param_FromTarget); \
		P_GET_STRUCT(FAFPropertytHandle,Z_Param_To); \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_ToHandle); \
		P_GET_OBJECT(UObject,Z_Param_ToTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGAAttributesBlueprintFunctionLibrary::ExchangeAttributesValues(Z_Param_Instigator,Z_Param_Causer,Z_Param_From,Z_Param_FromHandle,Z_Param_FromTarget,Z_Param_To,Z_Param_ToHandle,Z_Param_ToTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeFloat) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetAttributeFloat(Z_Param_Target,Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAttributeValue) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT(FGAAttribute,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetCurrentAttributeValue(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFinalAttributeValue) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT(FGAAttribute,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetFinalAttributeValue(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttribute) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetAttribute(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualAttribute) \
	{ \
		P_GET_STRUCT_REF(FGAAttribute,Z_Param_Out_Compare); \
		P_GET_STRUCT(FGAAttribute,Z_Param_Against); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::EqualAttribute(Z_Param_Out_Compare,Z_Param_Against); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExchangeAttributesValues) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Instigator); \
		P_GET_OBJECT(UObject,Z_Param_Causer); \
		P_GET_STRUCT(FAFPropertytHandle,Z_Param_From); \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_FromHandle); \
		P_GET_OBJECT(UObject,Z_Param_FromTarget); \
		P_GET_STRUCT(FAFPropertytHandle,Z_Param_To); \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_ToHandle); \
		P_GET_OBJECT(UObject,Z_Param_ToTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGAAttributesBlueprintFunctionLibrary::ExchangeAttributesValues(Z_Param_Instigator,Z_Param_Causer,Z_Param_From,Z_Param_FromHandle,Z_Param_FromTarget,Z_Param_To,Z_Param_ToHandle,Z_Param_ToTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeFloat) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetAttributeFloat(Z_Param_Target,Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAttributeValue) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT(FGAAttribute,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetCurrentAttributeValue(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFinalAttributeValue) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT(FGAAttribute,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetFinalAttributeValue(Z_Param_Target,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttribute) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::GetAttribute(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualAttribute) \
	{ \
		P_GET_STRUCT_REF(FGAAttribute,Z_Param_Out_Compare); \
		P_GET_STRUCT(FGAAttribute,Z_Param_Against); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGAAttributesBlueprintFunctionLibrary::EqualAttribute(Z_Param_Out_Compare,Z_Param_Against); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAttributesBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGAAttributesBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAttributesBlueprintFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGAAttributesBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGAAttributesBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAttributesBlueprintFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAttributesBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAttributesBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAttributesBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAttributesBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAttributesBlueprintFunctionLibrary(UGAAttributesBlueprintFunctionLibrary&&); \
	NO_API UGAAttributesBlueprintFunctionLibrary(const UGAAttributesBlueprintFunctionLibrary&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAttributesBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAttributesBlueprintFunctionLibrary(UGAAttributesBlueprintFunctionLibrary&&); \
	NO_API UGAAttributesBlueprintFunctionLibrary(const UGAAttributesBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAttributesBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAttributesBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAttributesBlueprintFunctionLibrary)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_8_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GAAttributesBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAttributesBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Attributes_GAAttributesBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
