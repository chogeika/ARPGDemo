// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_AFAttributeInterface_generated_h
#error "AFAttributeInterface.generated.h already included, missing '#pragma once' in AFAttributeInterface.h"
#endif
#define ABILITYFRAMEWORK_AFAttributeInterface_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_RPC_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ABILITYFRAMEWORK_API UAFAttributeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFAttributeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ABILITYFRAMEWORK_API, UAFAttributeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFAttributeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABILITYFRAMEWORK_API UAFAttributeInterface(UAFAttributeInterface&&); \
	ABILITYFRAMEWORK_API UAFAttributeInterface(const UAFAttributeInterface&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ABILITYFRAMEWORK_API UAFAttributeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABILITYFRAMEWORK_API UAFAttributeInterface(UAFAttributeInterface&&); \
	ABILITYFRAMEWORK_API UAFAttributeInterface(const UAFAttributeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ABILITYFRAMEWORK_API, UAFAttributeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFAttributeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFAttributeInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAFAttributeInterface(); \
	friend struct Z_Construct_UClass_UAFAttributeInterface_Statics; \
public: \
	DECLARE_CLASS(UAFAttributeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AbilityFramework"), ABILITYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UAFAttributeInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAFAttributeInterface() {} \
public: \
	typedef UAFAttributeInterface UClassType; \
	typedef IAFAttributeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAFAttributeInterface() {} \
public: \
	typedef UAFAttributeInterface UClassType; \
	typedef IAFAttributeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_10_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFAttributeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAttributeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
