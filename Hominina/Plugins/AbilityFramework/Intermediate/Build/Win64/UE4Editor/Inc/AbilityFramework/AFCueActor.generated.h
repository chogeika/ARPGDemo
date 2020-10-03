// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FHitResult;
#ifdef ABILITYFRAMEWORK_AFCueActor_generated_h
#error "AFCueActor.generated.h already included, missing '#pragma once' in AFCueActor.h"
#endif
#define ABILITYFRAMEWORK_AFCueActor_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_RPC_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_EVENT_PARMS \
	struct AFCueActor_eventBeginCue_Parms \
	{ \
		AActor* InstigatorOut; \
		AActor* TargetOut; \
		UObject* Causer; \
		FHitResult HitInfo; \
	};


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AAFCueActor, NO_API)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAFCueActor(); \
	friend struct Z_Construct_UClass_AAFCueActor_Statics; \
public: \
	DECLARE_CLASS(AAFCueActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(AAFCueActor) \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_ARCHIVESERIALIZER


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAFCueActor(); \
	friend struct Z_Construct_UClass_AAFCueActor_Statics; \
public: \
	DECLARE_CLASS(AAFCueActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(AAFCueActor) \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_ARCHIVESERIALIZER


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAFCueActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAFCueActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAFCueActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAFCueActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAFCueActor(AAFCueActor&&); \
	NO_API AAFCueActor(const AAFCueActor&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAFCueActor(AAFCueActor&&); \
	NO_API AAFCueActor(const AAFCueActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAFCueActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAFCueActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAFCueActor)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CueTag() { return STRUCT_OFFSET(AAFCueActor, CueTag); } \
	FORCEINLINE static uint32 __PPO__EffectCueTagSearch() { return STRUCT_OFFSET(AAFCueActor, EffectCueTagSearch); } \
	FORCEINLINE static uint32 __PPO__AssetBundleData() { return STRUCT_OFFSET(AAFCueActor, AssetBundleData); }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_13_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class AAFCueActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
