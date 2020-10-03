// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIFItemBase;
#ifdef HOMININA_ARItemWeaponWidget_generated_h
#error "ARItemWeaponWidget.generated.h already included, missing '#pragma once' in ARItemWeaponWidget.h"
#endif
#define HOMININA_ARItemWeaponWidget_generated_h

#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWeaponRemoved2) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_GET_OBJECT(UIFItemBase,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponRemoved2(Z_Param_InNetIndex,Z_Param_InLocalIndex,Z_Param_InItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWeaponUpdated2) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_GET_OBJECT(UIFItemBase,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponUpdated2(Z_Param_InNetIndex,Z_Param_InLocalIndex,Z_Param_InItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWeaponAdded2) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_GET_OBJECT(UIFItemBase,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponAdded2(Z_Param_InNetIndex,Z_Param_InLocalIndex,Z_Param_InItem); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWeaponRemoved2) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_GET_OBJECT(UIFItemBase,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponRemoved2(Z_Param_InNetIndex,Z_Param_InLocalIndex,Z_Param_InItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWeaponUpdated2) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_GET_OBJECT(UIFItemBase,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponUpdated2(Z_Param_InNetIndex,Z_Param_InLocalIndex,Z_Param_InItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWeaponAdded2) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_GET_OBJECT(UIFItemBase,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWeaponAdded2(Z_Param_InNetIndex,Z_Param_InLocalIndex,Z_Param_InItem); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARItemWeaponWidget(); \
	friend struct Z_Construct_UClass_UARItemWeaponWidget_Statics; \
public: \
	DECLARE_CLASS(UARItemWeaponWidget, UARItemView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARItemWeaponWidget)


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARItemWeaponWidget(); \
	friend struct Z_Construct_UClass_UARItemWeaponWidget_Statics; \
public: \
	DECLARE_CLASS(UARItemWeaponWidget, UARItemView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARItemWeaponWidget)


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARItemWeaponWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARItemWeaponWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARItemWeaponWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARItemWeaponWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARItemWeaponWidget(UARItemWeaponWidget&&); \
	NO_API UARItemWeaponWidget(const UARItemWeaponWidget&); \
public:


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARItemWeaponWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARItemWeaponWidget(UARItemWeaponWidget&&); \
	NO_API UARItemWeaponWidget(const UARItemWeaponWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARItemWeaponWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARItemWeaponWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARItemWeaponWidget)


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_12_PROLOG
#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_INCLASS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARItemWeaponWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Inventory_Weapons_ARItemWeaponWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
