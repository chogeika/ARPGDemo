// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIFItemBase;
#ifdef INVENTORYFRAMEWORKUI_IFItemWidget_generated_h
#error "IFItemWidget.generated.h already included, missing '#pragma once' in IFItemWidget.h"
#endif
#define INVENTORYFRAMEWORKUI_IFItemWidget_generated_h

#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_RPC_WRAPPERS
#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_EVENT_PARMS \
	struct IFItemWidget_eventBP_OnItemChanged_Parms \
	{ \
		UIFItemBase* Item; \
	}; \
	struct IFItemWidget_eventBP_OnItemCreated_Parms \
	{ \
		UIFItemBase* Item; \
	}; \
	struct IFItemWidget_eventBP_OnItemRemoved_Parms \
	{ \
		UIFItemBase* Item; \
	};


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_CALLBACK_WRAPPERS
#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIFItemWidget(); \
	friend struct Z_Construct_UClass_UIFItemWidget_Statics; \
public: \
	DECLARE_CLASS(UIFItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryFrameworkUI"), NO_API) \
	DECLARE_SERIALIZER(UIFItemWidget)


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUIFItemWidget(); \
	friend struct Z_Construct_UClass_UIFItemWidget_Statics; \
public: \
	DECLARE_CLASS(UIFItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryFrameworkUI"), NO_API) \
	DECLARE_SERIALIZER(UIFItemWidget)


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFItemWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFItemWidget(UIFItemWidget&&); \
	NO_API UIFItemWidget(const UIFItemWidget&); \
public:


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFItemWidget(UIFItemWidget&&); \
	NO_API UIFItemWidget(const UIFItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFItemWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFItemWidget)


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_12_PROLOG \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_EVENT_PARMS


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_RPC_WRAPPERS \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_CALLBACK_WRAPPERS \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_INCLASS \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_CALLBACK_WRAPPERS \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYFRAMEWORKUI_API UClass* StaticClass<class UIFItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_InventoryFrameworkUI_Source_InventoryFrameworkUI_Public_IFItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
