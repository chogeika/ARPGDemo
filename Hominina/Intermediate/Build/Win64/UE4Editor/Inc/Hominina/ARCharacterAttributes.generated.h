// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARCharacterAttributes_generated_h
#error "ARCharacterAttributes.generated.h already included, missing '#pragma once' in ARCharacterAttributes.h"
#endif
#define HOMININA_ARCharacterAttributes_generated_h

#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCharacterAttributes(); \
	friend struct Z_Construct_UClass_UARCharacterAttributes_Statics; \
public: \
	DECLARE_CLASS(UARCharacterAttributes, UGAAttributesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARCharacterAttributes) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARCharacterAttributes(); \
	friend struct Z_Construct_UClass_UARCharacterAttributes_Statics; \
public: \
	DECLARE_CLASS(UARCharacterAttributes, UGAAttributesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARCharacterAttributes) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCharacterAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCharacterAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCharacterAttributes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCharacterAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCharacterAttributes(UARCharacterAttributes&&); \
	NO_API UARCharacterAttributes(const UARCharacterAttributes&); \
public:


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCharacterAttributes(UARCharacterAttributes&&); \
	NO_API UARCharacterAttributes(const UARCharacterAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCharacterAttributes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCharacterAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCharacterAttributes)


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_12_PROLOG
#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_INCLASS \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARCharacterAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Attributes_ARCharacterAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
