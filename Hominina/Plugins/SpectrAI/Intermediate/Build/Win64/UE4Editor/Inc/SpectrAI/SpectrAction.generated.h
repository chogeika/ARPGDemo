// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USpectrContext;
class AAIController;
class USpectrBrainComponent;
#ifdef SPECTRAI_SpectrAction_generated_h
#error "SpectrAction.generated.h already included, missing '#pragma once' in SpectrAction.h"
#endif
#define SPECTRAI_SpectrAction_generated_h

#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_RPC_WRAPPERS \
	virtual bool EvaluateCondition_Implementation(USpectrContext* InContext, AAIController* AIController); \
	virtual float Score_Implementation(USpectrContext* InContext, AAIController* AIController); \
	virtual void MoveTo_Implementation(USpectrBrainComponent* Brain); \
 \
	DECLARE_FUNCTION(execMoveToTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveToTarget(Z_Param_Target,Z_Param_MinimumDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluateCondition) \
	{ \
		P_GET_OBJECT(USpectrContext,Z_Param_InContext); \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EvaluateCondition_Implementation(Z_Param_InContext,Z_Param_AIController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScore) \
	{ \
		P_GET_OBJECT(USpectrContext,Z_Param_InContext); \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Score_Implementation(Z_Param_InContext,Z_Param_AIController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActionFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishMove) \
	{ \
		P_GET_OBJECT(USpectrContext,Z_Param_InContext); \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_GET_OBJECT(USpectrBrainComponent,Z_Param_Brain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishMove(Z_Param_InContext,Z_Param_AIController,Z_Param_Brain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTo) \
	{ \
		P_GET_OBJECT(USpectrBrainComponent,Z_Param_Brain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveTo_Implementation(Z_Param_Brain); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveToTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveToTarget(Z_Param_Target,Z_Param_MinimumDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluateCondition) \
	{ \
		P_GET_OBJECT(USpectrContext,Z_Param_InContext); \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EvaluateCondition_Implementation(Z_Param_InContext,Z_Param_AIController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScore) \
	{ \
		P_GET_OBJECT(USpectrContext,Z_Param_InContext); \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Score_Implementation(Z_Param_InContext,Z_Param_AIController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActionFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActionFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishMove) \
	{ \
		P_GET_OBJECT(USpectrContext,Z_Param_InContext); \
		P_GET_OBJECT(AAIController,Z_Param_AIController); \
		P_GET_OBJECT(USpectrBrainComponent,Z_Param_Brain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishMove(Z_Param_InContext,Z_Param_AIController,Z_Param_Brain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveTo) \
	{ \
		P_GET_OBJECT(USpectrBrainComponent,Z_Param_Brain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveTo_Implementation(Z_Param_Brain); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_EVENT_PARMS \
	struct SpectrAction_eventEvaluateCondition_Parms \
	{ \
		USpectrContext* InContext; \
		AAIController* AIController; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SpectrAction_eventEvaluateCondition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SpectrAction_eventMoveTo_Parms \
	{ \
		USpectrBrainComponent* Brain; \
	}; \
	struct SpectrAction_eventOnExecute_Parms \
	{ \
		USpectrContext* InContext; \
		AAIController* AIController; \
		USpectrBrainComponent* Brain; \
	}; \
	struct SpectrAction_eventOnMoveFinished_Parms \
	{ \
		USpectrContext* InContext; \
		AAIController* AIController; \
		USpectrBrainComponent* Brain; \
	}; \
	struct SpectrAction_eventScore_Parms \
	{ \
		USpectrContext* InContext; \
		AAIController* AIController; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SpectrAction_eventScore_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_CALLBACK_WRAPPERS
#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpectrAction(); \
	friend struct Z_Construct_UClass_USpectrAction_Statics; \
public: \
	DECLARE_CLASS(USpectrAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpectrAI"), NO_API) \
	DECLARE_SERIALIZER(USpectrAction)


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSpectrAction(); \
	friend struct Z_Construct_UClass_USpectrAction_Statics; \
public: \
	DECLARE_CLASS(USpectrAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpectrAI"), NO_API) \
	DECLARE_SERIALIZER(USpectrAction)


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpectrAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectrAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpectrAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectrAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpectrAction(USpectrAction&&); \
	NO_API USpectrAction(const USpectrAction&); \
public:


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpectrAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpectrAction(USpectrAction&&); \
	NO_API USpectrAction(const USpectrAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpectrAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectrAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectrAction)


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_17_PROLOG \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_EVENT_PARMS


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_RPC_WRAPPERS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_CALLBACK_WRAPPERS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_INCLASS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_CALLBACK_WRAPPERS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPECTRAI_API UClass* StaticClass<class USpectrAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_SpectrAI_Source_SpectrAI_Public_SpectrAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
