// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGAEffectCueParams;
#ifdef ABILITYFRAMEWORK_AFCueStatic_generated_h
#error "AFCueStatic.generated.h already included, missing '#pragma once' in AFCueStatic.h"
#endif
#define ABILITYFRAMEWORK_AFCueStatic_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_RPC_WRAPPERS \
	virtual void OnRemoved_Implementation(FGAEffectCueParams const& Hit) const; \
	virtual void OnExpire_Implementation(FGAEffectCueParams const& Hit) const; \
	virtual void OnActivate_Implementation(FGAEffectCueParams const& Hit) const; \
	virtual bool OnExecuted_Implementation(FGAEffectCueParams const& Hit); \
 \
	DECLARE_FUNCTION(execOnRemoved) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRemoved_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExpire) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExpire_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActivate) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActivate_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExecuted) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnExecuted_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRemoved) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRemoved_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExpire) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExpire_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActivate) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActivate_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnExecuted) \
	{ \
		P_GET_STRUCT_REF(FGAEffectCueParams,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnExecuted_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_EVENT_PARMS \
	struct AFCueStatic_eventOnActivate_Parms \
	{ \
		FGAEffectCueParams Hit; \
	}; \
	struct AFCueStatic_eventOnExecuted_Parms \
	{ \
		FGAEffectCueParams Hit; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AFCueStatic_eventOnExecuted_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AFCueStatic_eventOnExpire_Parms \
	{ \
		FGAEffectCueParams Hit; \
	}; \
	struct AFCueStatic_eventOnRemoved_Parms \
	{ \
		FGAEffectCueParams Hit; \
	};


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAFCueStatic, NO_API)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFCueStatic(); \
	friend struct Z_Construct_UClass_UAFCueStatic_Statics; \
public: \
	DECLARE_CLASS(UAFCueStatic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFCueStatic) \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_ARCHIVESERIALIZER


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAFCueStatic(); \
	friend struct Z_Construct_UClass_UAFCueStatic_Statics; \
public: \
	DECLARE_CLASS(UAFCueStatic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFCueStatic) \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_ARCHIVESERIALIZER


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFCueStatic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFCueStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFCueStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFCueStatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFCueStatic(UAFCueStatic&&); \
	NO_API UAFCueStatic(const UAFCueStatic&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFCueStatic(UAFCueStatic&&); \
	NO_API UAFCueStatic(const UAFCueStatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFCueStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFCueStatic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFCueStatic)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_16_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFCueStatic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Effects_AFCueStatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
