// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_AFTaskBase_generated_h
#error "AFTaskBase.generated.h already included, missing '#pragma once' in AFTaskBase.h"
#endif
#define ABILITYFRAMEWORK_AFTaskBase_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadyForActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadyForActivation(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadyForActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadyForActivation(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFTaskBase(); \
	friend struct Z_Construct_UClass_UAFTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAFTaskBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFTaskBase)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAFTaskBase(); \
	friend struct Z_Construct_UClass_UAFTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAFTaskBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFTaskBase)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFTaskBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFTaskBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFTaskBase(UAFTaskBase&&); \
	NO_API UAFTaskBase(const UAFTaskBase&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFTaskBase(UAFTaskBase&&); \
	NO_API UAFTaskBase(const UAFTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFTaskBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFTaskBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFTaskBase)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TaskOwner() { return STRUCT_OFFSET(UAFTaskBase, TaskOwner); }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_25_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFTaskBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFTaskBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
