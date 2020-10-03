// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARListItemView_generated_h
#error "ARListItemView.generated.h already included, missing '#pragma once' in ARListItemView.h"
#endif
#define HOMININA_ARListItemView_generated_h

#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARListItemView(); \
	friend struct Z_Construct_UClass_UARListItemView_Statics; \
public: \
	DECLARE_CLASS(UARListItemView, UIFItemWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARListItemView)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARListItemView(); \
	friend struct Z_Construct_UClass_UARListItemView_Statics; \
public: \
	DECLARE_CLASS(UARListItemView, UIFItemWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARListItemView)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARListItemView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARListItemView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARListItemView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARListItemView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARListItemView(UARListItemView&&); \
	NO_API UARListItemView(const UARListItemView&); \
public:


#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARListItemView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARListItemView(UARListItemView&&); \
	NO_API UARListItemView(const UARListItemView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARListItemView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARListItemView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARListItemView)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemTooltip() { return STRUCT_OFFSET(UARListItemView, ItemTooltip); }


#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_12_PROLOG
#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_INCLASS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARListItemView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Inventory_ARListItemView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
