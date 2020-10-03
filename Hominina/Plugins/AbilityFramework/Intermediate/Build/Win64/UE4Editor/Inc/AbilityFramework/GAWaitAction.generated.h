// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UGAWaitAction;
#ifdef ABILITYFRAMEWORK_GAWaitAction_generated_h
#error "GAWaitAction.generated.h already included, missing '#pragma once' in GAWaitAction.h"
#endif
#define ABILITYFRAMEWORK_GAWaitAction_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_24_DELEGATE \
static inline void FGAWaitActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& GAWaitActionDelegate) \
{ \
	GAWaitActionDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNewGAWaitAction) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InTaskOwner); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAWaitAction**)Z_Param__Result=UGAWaitAction::NewGAWaitAction(Z_Param_InTaskOwner,Z_Param_Time); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNewGAWaitAction) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InTaskOwner); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAWaitAction**)Z_Param__Result=UGAWaitAction::NewGAWaitAction(Z_Param_InTaskOwner,Z_Param_Time); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAWaitAction(); \
	friend struct Z_Construct_UClass_UGAWaitAction_Statics; \
public: \
	DECLARE_CLASS(UGAWaitAction, UAFTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAWaitAction)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGAWaitAction(); \
	friend struct Z_Construct_UClass_UGAWaitAction_Statics; \
public: \
	DECLARE_CLASS(UGAWaitAction, UAFTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAWaitAction)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAWaitAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAWaitAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAWaitAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAWaitAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAWaitAction(UGAWaitAction&&); \
	NO_API UGAWaitAction(const UGAWaitAction&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAWaitAction(UGAWaitAction&&); \
	NO_API UGAWaitAction(const UGAWaitAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAWaitAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAWaitAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAWaitAction)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_14_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAWaitAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_GAWaitAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
