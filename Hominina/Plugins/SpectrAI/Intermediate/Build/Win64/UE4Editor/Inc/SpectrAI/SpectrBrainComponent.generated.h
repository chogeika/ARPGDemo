// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPECTRAI_SpectrBrainComponent_generated_h
#error "SpectrBrainComponent.generated.h already included, missing '#pragma once' in SpectrBrainComponent.h"
#endif
#define SPECTRAI_SpectrBrainComponent_generated_h

#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoalSpec_Statics; \
	SPECTRAI_API static class UScriptStruct* StaticStruct();


template<> SPECTRAI_API UScriptStruct* StaticStruct<struct FGoalSpec>();

#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpectrAI_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SPECTRAI_API UScriptStruct* StaticStruct<struct FSpectrAI>();

#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNextPlan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextPlan(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStarPlanning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StarPlanning(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNextPlan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextPlan(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStarPlanning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StarPlanning(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpectrBrainComponent(); \
	friend struct Z_Construct_UClass_USpectrBrainComponent_Statics; \
public: \
	DECLARE_CLASS(USpectrBrainComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpectrAI"), NO_API) \
	DECLARE_SERIALIZER(USpectrBrainComponent)


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_INCLASS \
private: \
	static void StaticRegisterNativesUSpectrBrainComponent(); \
	friend struct Z_Construct_UClass_USpectrBrainComponent_Statics; \
public: \
	DECLARE_CLASS(USpectrBrainComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpectrAI"), NO_API) \
	DECLARE_SERIALIZER(USpectrBrainComponent)


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpectrBrainComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectrBrainComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpectrBrainComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectrBrainComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpectrBrainComponent(USpectrBrainComponent&&); \
	NO_API USpectrBrainComponent(const USpectrBrainComponent&); \
public:


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpectrBrainComponent(USpectrBrainComponent&&); \
	NO_API USpectrBrainComponent(const USpectrBrainComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpectrBrainComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectrBrainComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectrBrainComponent)


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_259_PROLOG
#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_RPC_WRAPPERS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_INCLASS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h_262_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPECTRAI_API UClass* StaticClass<class USpectrBrainComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrBrainComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
