// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARWeaponModificationView_generated_h
#error "ARWeaponModificationView.generated.h already included, missing '#pragma once' in ARWeaponModificationView.h"
#endif
#define HOMININA_ARWeaponModificationView_generated_h

#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseModificationView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseModificationView(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseModificationView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseModificationView(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARWeaponModificationView(); \
	friend struct Z_Construct_UClass_UARWeaponModificationView_Statics; \
public: \
	DECLARE_CLASS(UARWeaponModificationView, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARWeaponModificationView)


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARWeaponModificationView(); \
	friend struct Z_Construct_UClass_UARWeaponModificationView_Statics; \
public: \
	DECLARE_CLASS(UARWeaponModificationView, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARWeaponModificationView)


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARWeaponModificationView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARWeaponModificationView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARWeaponModificationView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARWeaponModificationView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARWeaponModificationView(UARWeaponModificationView&&); \
	NO_API UARWeaponModificationView(const UARWeaponModificationView&); \
public:


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARWeaponModificationView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARWeaponModificationView(UARWeaponModificationView&&); \
	NO_API UARWeaponModificationView(const UARWeaponModificationView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARWeaponModificationView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARWeaponModificationView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARWeaponModificationView)


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_12_PROLOG
#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_INCLASS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARWeaponModificationView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARWeaponModificationView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
