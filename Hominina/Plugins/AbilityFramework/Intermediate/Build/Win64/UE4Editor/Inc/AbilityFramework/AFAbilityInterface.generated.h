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
#ifdef ABILITYFRAMEWORK_AFAbilityInterface_generated_h
#error "AFAbilityInterface.generated.h already included, missing '#pragma once' in AFAbilityInterface.h"
#endif
#define ABILITYFRAMEWORK_AFAbilityInterface_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_RPC_WRAPPERS \
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


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFAbilityInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFAbilityInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFAbilityInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFAbilityInterface(UAFAbilityInterface&&); \
	NO_API UAFAbilityInterface(const UAFAbilityInterface&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFAbilityInterface(UAFAbilityInterface&&); \
	NO_API UAFAbilityInterface(const UAFAbilityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFAbilityInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFAbilityInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFAbilityInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAFAbilityInterface(); \
	friend struct Z_Construct_UClass_UAFAbilityInterface_Statics; \
public: \
	DECLARE_CLASS(UAFAbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFAbilityInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAFAbilityInterface() {} \
public: \
	typedef UAFAbilityInterface UClassType; \
	typedef IAFAbilityInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IAFAbilityInterface() {} \
public: \
	typedef UAFAbilityInterface UClassType; \
	typedef IAFAbilityInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_12_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFAbilityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
