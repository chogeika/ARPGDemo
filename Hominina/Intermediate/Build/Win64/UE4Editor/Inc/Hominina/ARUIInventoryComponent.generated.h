// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARUIInventoryComponent_generated_h
#error "ARUIInventoryComponent.generated.h already included, missing '#pragma once' in ARUIInventoryComponent.h"
#endif
#define HOMININA_ARUIInventoryComponent_generated_h

#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARUIInventoryComponent(); \
	friend struct Z_Construct_UClass_UARUIInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UARUIInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARUIInventoryComponent)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUARUIInventoryComponent(); \
	friend struct Z_Construct_UClass_UARUIInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UARUIInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARUIInventoryComponent)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARUIInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARUIInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARUIInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARUIInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARUIInventoryComponent(UARUIInventoryComponent&&); \
	NO_API UARUIInventoryComponent(const UARUIInventoryComponent&); \
public:


#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARUIInventoryComponent(UARUIInventoryComponent&&); \
	NO_API UARUIInventoryComponent(const UARUIInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARUIInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARUIInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARUIInventoryComponent)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InventoryViewClass() { return STRUCT_OFFSET(UARUIInventoryComponent, InventoryViewClass); } \
	FORCEINLINE static uint32 __PPO__ListItemWeaponClass() { return STRUCT_OFFSET(UARUIInventoryComponent, ListItemWeaponClass); } \
	FORCEINLINE static uint32 __PPO__ListItemMagazinelass() { return STRUCT_OFFSET(UARUIInventoryComponent, ListItemMagazinelass); } \
	FORCEINLINE static uint32 __PPO__WeaponModificationViewClass() { return STRUCT_OFFSET(UARUIInventoryComponent, WeaponModificationViewClass); } \
	FORCEINLINE static uint32 __PPO__InventoryView() { return STRUCT_OFFSET(UARUIInventoryComponent, InventoryView); } \
	FORCEINLINE static uint32 __PPO__WeaponModificationView() { return STRUCT_OFFSET(UARUIInventoryComponent, WeaponModificationView); } \
	FORCEINLINE static uint32 __PPO__SelectedWeapon() { return STRUCT_OFFSET(UARUIInventoryComponent, SelectedWeapon); }


#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_10_PROLOG
#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_INCLASS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARUIInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Inventory_ARUIInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
