// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARInventoryScreenWidget_generated_h
#error "ARInventoryScreenWidget.generated.h already included, missing '#pragma once' in ARInventoryScreenWidget.h"
#endif
#define HOMININA_ARInventoryScreenWidget_generated_h

#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnModifyWeaponClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnModifyWeaponClicked(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnModifyWeaponClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnModifyWeaponClicked(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARInventoryScreenWidget(); \
	friend struct Z_Construct_UClass_UARInventoryScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UARInventoryScreenWidget, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARInventoryScreenWidget)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUARInventoryScreenWidget(); \
	friend struct Z_Construct_UClass_UARInventoryScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UARInventoryScreenWidget, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARInventoryScreenWidget)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARInventoryScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARInventoryScreenWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARInventoryScreenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARInventoryScreenWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARInventoryScreenWidget(UARInventoryScreenWidget&&); \
	NO_API UARInventoryScreenWidget(const UARInventoryScreenWidget&); \
public:


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARInventoryScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARInventoryScreenWidget(UARInventoryScreenWidget&&); \
	NO_API UARInventoryScreenWidget(const UARInventoryScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARInventoryScreenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARInventoryScreenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARInventoryScreenWidget)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_20_PROLOG
#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_INCLASS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARInventoryScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Inventory_ARInventoryScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
