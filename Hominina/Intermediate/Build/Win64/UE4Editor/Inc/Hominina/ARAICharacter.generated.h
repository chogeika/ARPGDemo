// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGAAttribute;
class UAFEffectsComponent;
class UAFAbilityComponent;
#ifdef HOMININA_ARAICharacter_generated_h
#error "ARAICharacter.generated.h already included, missing '#pragma once' in ARAICharacter.h"
#endif
#define HOMININA_ARAICharacter_generated_h

#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectsComponent**)Z_Param__Result=P_THIS->GetEffectsComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityComp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=P_THIS->GetAbilityComp(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFEffectsComponent**)Z_Param__Result=P_THIS->GetEffectsComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityComp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAFAbilityComponent**)Z_Param__Result=P_THIS->GetAbilityComp(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARAICharacter(); \
	friend struct Z_Construct_UClass_AARAICharacter_Statics; \
public: \
	DECLARE_CLASS(AARAICharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARAICharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AARAICharacter*>(this); }


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAARAICharacter(); \
	friend struct Z_Construct_UClass_AARAICharacter_Statics; \
public: \
	DECLARE_CLASS(AARAICharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARAICharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AARAICharacter*>(this); }


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARAICharacter(AARAICharacter&&); \
	NO_API AARAICharacter(const AARAICharacter&); \
public:


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARAICharacter(AARAICharacter&&); \
	NO_API AARAICharacter(const AARAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARAICharacter)


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Abilities() { return STRUCT_OFFSET(AARAICharacter, Abilities); } \
	FORCEINLINE static uint32 __PPO__EffectsComponent() { return STRUCT_OFFSET(AARAICharacter, EffectsComponent); } \
	FORCEINLINE static uint32 __PPO__SpawnedBy() { return STRUCT_OFFSET(AARAICharacter, SpawnedBy); }


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_15_PROLOG
#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_INCLASS \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_AI_ARAICharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_AI_ARAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
