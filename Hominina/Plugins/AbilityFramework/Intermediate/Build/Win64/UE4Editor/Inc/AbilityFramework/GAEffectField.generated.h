// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_GAEffectField_generated_h
#error "GAEffectField.generated.h already included, missing '#pragma once' in GAEffectField.h"
#endif
#define ABILITYFRAMEWORK_GAEffectField_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_RPC_WRAPPERS \
	virtual void OnOtherFieldOverlap_Implementation(); \
	virtual void OnAbilityExecuted_Implementation(); \
 \
	DECLARE_FUNCTION(execOnOtherFieldOverlap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOtherFieldOverlap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAbilityExecuted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAbilityExecuted_Implementation(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOtherFieldOverlap_Implementation(); \
	virtual void OnAbilityExecuted_Implementation(); \
 \
	DECLARE_FUNCTION(execOnOtherFieldOverlap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOtherFieldOverlap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAbilityExecuted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAbilityExecuted_Implementation(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_EVENT_PARMS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAEffectField(); \
	friend struct Z_Construct_UClass_AGAEffectField_Statics; \
public: \
	DECLARE_CLASS(AGAEffectField, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(AGAEffectField)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAGAEffectField(); \
	friend struct Z_Construct_UClass_AGAEffectField_Statics; \
public: \
	DECLARE_CLASS(AGAEffectField, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(AGAEffectField)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGAEffectField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGAEffectField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAEffectField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAEffectField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGAEffectField(AGAEffectField&&); \
	NO_API AGAEffectField(const AGAEffectField&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGAEffectField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGAEffectField(AGAEffectField&&); \
	NO_API AGAEffectField(const AGAEffectField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAEffectField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAEffectField); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGAEffectField)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_29_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GAEffectField."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class AGAEffectField>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
