// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAFAttributeBase;
#ifdef HOMININA_ARGunAttributes_generated_h
#error "ARGunAttributes.generated.h already included, missing '#pragma once' in ARGunAttributes.h"
#endif
#define HOMININA_ARGunAttributes_generated_h

#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARGunAttributesItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOMININA_API UScriptStruct* StaticStruct<struct FARGunAttributesItem>();

#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Magazine) \
	{ \
		P_GET_STRUCT(FAFAttributeBase,Z_Param_OldVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Magazine(Z_Param_OldVal); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Magazine) \
	{ \
		P_GET_STRUCT(FAFAttributeBase,Z_Param_OldVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Magazine(Z_Param_OldVal); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGunAttributes(); \
	friend struct Z_Construct_UClass_UARGunAttributes_Statics; \
public: \
	DECLARE_CLASS(UARGunAttributes, UGAAttributesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARGunAttributes) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUARGunAttributes(); \
	friend struct Z_Construct_UClass_UARGunAttributes_Statics; \
public: \
	DECLARE_CLASS(UARGunAttributes, UGAAttributesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARGunAttributes) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGunAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGunAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGunAttributes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGunAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGunAttributes(UARGunAttributes&&); \
	NO_API UARGunAttributes(const UARGunAttributes&); \
public:


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGunAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGunAttributes(UARGunAttributes&&); \
	NO_API UARGunAttributes(const UARGunAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGunAttributes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGunAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGunAttributes)


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_43_PROLOG
#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_INCLASS \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARGunAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Attributes_ARGunAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
