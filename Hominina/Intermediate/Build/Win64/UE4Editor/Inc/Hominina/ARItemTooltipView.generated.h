// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FARItemTooltipData;
#ifdef HOMININA_ARItemTooltipView_generated_h
#error "ARItemTooltipView.generated.h already included, missing '#pragma once' in ARItemTooltipView.h"
#endif
#define HOMININA_ARItemTooltipView_generated_h

#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_EVENT_PARMS \
	struct ARItemTooltipView_eventOnTooltipCreated_Parms \
	{ \
		TArray<FARItemTooltipData> OutItems; \
	};


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_CALLBACK_WRAPPERS
#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARItemTooltipView(); \
	friend struct Z_Construct_UClass_UARItemTooltipView_Statics; \
public: \
	DECLARE_CLASS(UARItemTooltipView, UARItemView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARItemTooltipView)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUARItemTooltipView(); \
	friend struct Z_Construct_UClass_UARItemTooltipView_Statics; \
public: \
	DECLARE_CLASS(UARItemTooltipView, UARItemView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARItemTooltipView)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARItemTooltipView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARItemTooltipView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARItemTooltipView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARItemTooltipView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARItemTooltipView(UARItemTooltipView&&); \
	NO_API UARItemTooltipView(const UARItemTooltipView&); \
public:


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARItemTooltipView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARItemTooltipView(UARItemTooltipView&&); \
	NO_API UARItemTooltipView(const UARItemTooltipView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARItemTooltipView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARItemTooltipView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARItemTooltipView)


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_PRIVATE_PROPERTY_OFFSET
#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_13_PROLOG \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_EVENT_PARMS


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_INCLASS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARItemTooltipView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Inventory_ARItemTooltipView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
