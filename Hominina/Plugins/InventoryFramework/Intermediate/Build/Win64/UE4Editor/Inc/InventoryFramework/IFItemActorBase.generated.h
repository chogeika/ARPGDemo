// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIFInventoryComponent;
#ifdef INVENTORYFRAMEWORK_IFItemActorBase_generated_h
#error "IFItemActorBase.generated.h already included, missing '#pragma once' in IFItemActorBase.h"
#endif
#define INVENTORYFRAMEWORK_IFItemActorBase_generated_h

#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GiveAllItemsToInstigator) \
	{ \
		P_GET_OBJECT(UIFInventoryComponent,Z_Param_Inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GiveAllItemsToInstigator(Z_Param_Inventory); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GiveAllItemsToInstigator) \
	{ \
		P_GET_OBJECT(UIFInventoryComponent,Z_Param_Inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GiveAllItemsToInstigator(Z_Param_Inventory); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIFItemActorBase(); \
	friend struct Z_Construct_UClass_AIFItemActorBase_Statics; \
public: \
	DECLARE_CLASS(AIFItemActorBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryFramework"), NO_API) \
	DECLARE_SERIALIZER(AIFItemActorBase)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIFItemActorBase(); \
	friend struct Z_Construct_UClass_AIFItemActorBase_Statics; \
public: \
	DECLARE_CLASS(AIFItemActorBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryFramework"), NO_API) \
	DECLARE_SERIALIZER(AIFItemActorBase)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIFItemActorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIFItemActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIFItemActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIFItemActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIFItemActorBase(AIFItemActorBase&&); \
	NO_API AIFItemActorBase(const AIFItemActorBase&); \
public:


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIFItemActorBase(AIFItemActorBase&&); \
	NO_API AIFItemActorBase(const AIFItemActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIFItemActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIFItemActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIFItemActorBase)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Items() { return STRUCT_OFFSET(AIFItemActorBase, Items); }


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_9_PROLOG
#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_RPC_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_INCLASS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYFRAMEWORK_API UClass* StaticClass<class AIFItemActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFItemActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
