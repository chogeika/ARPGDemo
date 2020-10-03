// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_AFSimpleInterface_generated_h
#error "AFSimpleInterface.generated.h already included, missing '#pragma once' in AFSimpleInterface.h"
#endif
#define ABILITYFRAMEWORK_AFSimpleInterface_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_RPC_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ABILITYFRAMEWORK_API UAFSimpleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFSimpleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ABILITYFRAMEWORK_API, UAFSimpleInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFSimpleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABILITYFRAMEWORK_API UAFSimpleInterface(UAFSimpleInterface&&); \
	ABILITYFRAMEWORK_API UAFSimpleInterface(const UAFSimpleInterface&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ABILITYFRAMEWORK_API UAFSimpleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABILITYFRAMEWORK_API UAFSimpleInterface(UAFSimpleInterface&&); \
	ABILITYFRAMEWORK_API UAFSimpleInterface(const UAFSimpleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ABILITYFRAMEWORK_API, UAFSimpleInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFSimpleInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFSimpleInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAFSimpleInterface(); \
	friend struct Z_Construct_UClass_UAFSimpleInterface_Statics; \
public: \
	DECLARE_CLASS(UAFSimpleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AbilityFramework"), ABILITYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UAFSimpleInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAFSimpleInterface() {} \
public: \
	typedef UAFSimpleInterface UClassType; \
	typedef IAFSimpleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAFSimpleInterface() {} \
public: \
	typedef UAFSimpleInterface UClassType; \
	typedef IAFSimpleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_10_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFSimpleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFSimpleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
