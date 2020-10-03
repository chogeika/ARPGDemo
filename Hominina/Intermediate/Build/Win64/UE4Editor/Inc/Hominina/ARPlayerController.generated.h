// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapsuleComponent;
class APawn;
#ifdef HOMININA_ARPlayerController_generated_h
#error "ARPlayerController.generated.h already included, missing '#pragma once' in ARPlayerController.h"
#endif
#define HOMININA_ARPlayerController_generated_h

#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_RPC_WRAPPERS \
	virtual void ClientPossesed_Implementation(APawn* InPawn); \
 \
	DECLARE_FUNCTION(execComputeBoundsScreenSize) \
	{ \
		P_GET_OBJECT(UCapsuleComponent,Z_Param_InTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ComputeBoundsScreenSize(Z_Param_InTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPossesed) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientPossesed_Implementation(Z_Param_InPawn); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeBoundsScreenSize) \
	{ \
		P_GET_OBJECT(UCapsuleComponent,Z_Param_InTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ComputeBoundsScreenSize(Z_Param_InTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPossesed) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientPossesed_Implementation(Z_Param_InPawn); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_EVENT_PARMS \
	struct ARPlayerController_eventClientPossesed_Parms \
	{ \
		APawn* InPawn; \
	};


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_CALLBACK_WRAPPERS
#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPlayerController(); \
	friend struct Z_Construct_UClass_AARPlayerController_Statics; \
public: \
	DECLARE_CLASS(AARPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AARPlayerController*>(this); }


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAARPlayerController(); \
	friend struct Z_Construct_UClass_AARPlayerController_Statics; \
public: \
	DECLARE_CLASS(AARPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AARPlayerController*>(this); }


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPlayerController(AARPlayerController&&); \
	NO_API AARPlayerController(const AARPlayerController&); \
public:


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPlayerController(AARPlayerController&&); \
	NO_API AARPlayerController(const AARPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPlayerController)


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_ARPlayerController_h_16_PROLOG \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_EVENT_PARMS


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_INCLASS \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_ARPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_ARPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
