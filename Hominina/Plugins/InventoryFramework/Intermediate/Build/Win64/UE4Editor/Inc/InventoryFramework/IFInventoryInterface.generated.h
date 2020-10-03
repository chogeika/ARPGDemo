// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYFRAMEWORK_IFInventoryInterface_generated_h
#error "IFInventoryInterface.generated.h already included, missing '#pragma once' in IFInventoryInterface.h"
#endif
#define INVENTORYFRAMEWORK_IFInventoryInterface_generated_h

#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_RPC_WRAPPERS
#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYFRAMEWORK_API UIFInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFInventoryInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYFRAMEWORK_API, UIFInventoryInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFInventoryInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INVENTORYFRAMEWORK_API UIFInventoryInterface(UIFInventoryInterface&&); \
	INVENTORYFRAMEWORK_API UIFInventoryInterface(const UIFInventoryInterface&); \
public:


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYFRAMEWORK_API UIFInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INVENTORYFRAMEWORK_API UIFInventoryInterface(UIFInventoryInterface&&); \
	INVENTORYFRAMEWORK_API UIFInventoryInterface(const UIFInventoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYFRAMEWORK_API, UIFInventoryInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFInventoryInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFInventoryInterface)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIFInventoryInterface(); \
	friend struct Z_Construct_UClass_UIFInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(UIFInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryFramework"), INVENTORYFRAMEWORK_API) \
	DECLARE_SERIALIZER(UIFInventoryInterface)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIFInventoryInterface() {} \
public: \
	typedef UIFInventoryInterface UClassType; \
	typedef IIFInventoryInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIFInventoryInterface() {} \
public: \
	typedef UIFInventoryInterface UClassType; \
	typedef IIFInventoryInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_10_PROLOG
#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_RPC_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYFRAMEWORK_API UClass* StaticClass<class UIFInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
