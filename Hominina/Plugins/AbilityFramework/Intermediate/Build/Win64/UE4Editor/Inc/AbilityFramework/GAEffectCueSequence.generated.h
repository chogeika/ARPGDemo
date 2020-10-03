// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
#ifdef ABILITYFRAMEWORK_GAEffectCueSequence_generated_h
#error "GAEffectCueSequence.generated.h already included, missing '#pragma once' in GAEffectCueSequence.h"
#endif
#define ABILITYFRAMEWORK_GAEffectCueSequence_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartTime(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartTime(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAEffectCueSequence(); \
	friend struct Z_Construct_UClass_UGAEffectCueSequence_Statics; \
public: \
	DECLARE_CLASS(UGAEffectCueSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAEffectCueSequence)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGAEffectCueSequence(); \
	friend struct Z_Construct_UClass_UGAEffectCueSequence_Statics; \
public: \
	DECLARE_CLASS(UGAEffectCueSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAEffectCueSequence)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAEffectCueSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAEffectCueSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAEffectCueSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAEffectCueSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAEffectCueSequence(UGAEffectCueSequence&&); \
	NO_API UGAEffectCueSequence(const UGAEffectCueSequence&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAEffectCueSequence(UGAEffectCueSequence&&); \
	NO_API UGAEffectCueSequence(const UGAEffectCueSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAEffectCueSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAEffectCueSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAEffectCueSequence)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_13_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAEffectCueSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_GAEffectCueSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
