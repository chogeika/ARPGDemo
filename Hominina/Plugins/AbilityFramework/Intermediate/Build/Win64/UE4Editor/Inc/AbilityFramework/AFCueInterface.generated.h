// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_AFCueInterface_generated_h
#error "AFCueInterface.generated.h already included, missing '#pragma once' in AFCueInterface.h"
#endif
#define ABILITYFRAMEWORK_AFCueInterface_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_RPC_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ABILITYFRAMEWORK_API UAFCueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFCueInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ABILITYFRAMEWORK_API, UAFCueInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFCueInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABILITYFRAMEWORK_API UAFCueInterface(UAFCueInterface&&); \
	ABILITYFRAMEWORK_API UAFCueInterface(const UAFCueInterface&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ABILITYFRAMEWORK_API UAFCueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABILITYFRAMEWORK_API UAFCueInterface(UAFCueInterface&&); \
	ABILITYFRAMEWORK_API UAFCueInterface(const UAFCueInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ABILITYFRAMEWORK_API, UAFCueInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFCueInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFCueInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAFCueInterface(); \
	friend struct Z_Construct_UClass_UAFCueInterface_Statics; \
public: \
	DECLARE_CLASS(UAFCueInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AbilityFramework"), ABILITYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UAFCueInterface)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAFCueInterface() {} \
public: \
	typedef UAFCueInterface UClassType; \
	typedef IAFCueInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IAFCueInterface() {} \
public: \
	typedef UAFCueInterface UClassType; \
	typedef IAFCueInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_9_PROLOG
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFCueInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFCueInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
