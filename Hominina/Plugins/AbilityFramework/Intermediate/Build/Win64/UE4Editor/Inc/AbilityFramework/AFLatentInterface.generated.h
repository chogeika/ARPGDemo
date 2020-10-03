// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_AFLatentInterface_generated_h
#error "AFLatentInterface.generated.h already included, missing '#pragma once' in AFLatentInterface.h"
#endif
#define ABILITYFRAMEWORK_AFLatentInterface_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_RPC_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFLatentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFLatentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFLatentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFLatentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFLatentInterface(UAFLatentInterface&&); \
	NO_API UAFLatentInterface(const UAFLatentInterface&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFLatentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFLatentInterface(UAFLatentInterface&&); \
	NO_API UAFLatentInterface(const UAFLatentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFLatentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFLatentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFLatentInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAFLatentInterface(); \
	friend struct Z_Construct_UClass_UAFLatentInterface_Statics; \
public: \
	DECLARE_CLASS(UAFLatentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFLatentInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAFLatentInterface() {} \
public: \
	typedef UAFLatentInterface UClassType; \
	typedef IAFLatentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IAFLatentInterface() {} \
public: \
	typedef UAFLatentInterface UClassType; \
	typedef IAFLatentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_7_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFLatentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_LatentActions_AFLatentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
