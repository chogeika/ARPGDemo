// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIFInventoryComponent;
#ifdef INVENTORYFRAMEWORK_IFEquipmentComponent_generated_h
#error "IFEquipmentComponent.generated.h already included, missing '#pragma once' in IFEquipmentComponent.h"
#endif
#define INVENTORYFRAMEWORK_IFEquipmentComponent_generated_h

#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_RPC_WRAPPERS \
	virtual void ClientRemoveFromEquipment_Implementation(uint8 EquipmentIndex); \
	virtual bool ServerRemoveFromEquipment_Validate(uint8 ); \
	virtual void ServerRemoveFromEquipment_Implementation(uint8 EquipmentIndex); \
	virtual void ClientAddItemFromInventory_Implementation(UIFInventoryComponent* Source, uint8 SourceIndex, uint8 EquipmentIndex); \
	virtual bool ServerAddItemFromInventory_Validate(UIFInventoryComponent* , uint8 , uint8 ); \
	virtual void ServerAddItemFromInventory_Implementation(UIFInventoryComponent* Source, uint8 SourceIndex, uint8 EquipmentIndex); \
 \
	DECLARE_FUNCTION(execClientRemoveFromEquipment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientRemoveFromEquipment_Implementation(Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemoveFromEquipment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemoveFromEquipment_Validate(Z_Param_EquipmentIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemoveFromEquipment_Validate")); \
			return; \
		} \
		P_THIS->ServerRemoveFromEquipment_Implementation(Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddItemFromInventory) \
	{ \
		P_GET_OBJECT(UIFInventoryComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddItemFromInventory_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromInventory) \
	{ \
		P_GET_OBJECT(UIFInventoryComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromInventory_Validate(Z_Param_Source,Z_Param_SourceIndex,Z_Param_EquipmentIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromInventory_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromInventory_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientRemoveFromEquipment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientRemoveFromEquipment_Implementation(Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemoveFromEquipment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemoveFromEquipment_Validate(Z_Param_EquipmentIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemoveFromEquipment_Validate")); \
			return; \
		} \
		P_THIS->ServerRemoveFromEquipment_Implementation(Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddItemFromInventory) \
	{ \
		P_GET_OBJECT(UIFInventoryComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddItemFromInventory_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromInventory) \
	{ \
		P_GET_OBJECT(UIFInventoryComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EquipmentIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromInventory_Validate(Z_Param_Source,Z_Param_SourceIndex,Z_Param_EquipmentIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromInventory_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromInventory_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_EquipmentIndex); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_EVENT_PARMS \
	struct IFEquipmentComponent_eventClientAddItemFromInventory_Parms \
	{ \
		UIFInventoryComponent* Source; \
		uint8 SourceIndex; \
		uint8 EquipmentIndex; \
	}; \
	struct IFEquipmentComponent_eventClientRemoveFromEquipment_Parms \
	{ \
		uint8 EquipmentIndex; \
	}; \
	struct IFEquipmentComponent_eventServerAddItemFromInventory_Parms \
	{ \
		UIFInventoryComponent* Source; \
		uint8 SourceIndex; \
		uint8 EquipmentIndex; \
	}; \
	struct IFEquipmentComponent_eventServerRemoveFromEquipment_Parms \
	{ \
		uint8 EquipmentIndex; \
	};


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_CALLBACK_WRAPPERS
#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIFEquipmentComponent(); \
	friend struct Z_Construct_UClass_UIFEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UIFEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryFramework"), NO_API) \
	DECLARE_SERIALIZER(UIFEquipmentComponent)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUIFEquipmentComponent(); \
	friend struct Z_Construct_UClass_UIFEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UIFEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryFramework"), NO_API) \
	DECLARE_SERIALIZER(UIFEquipmentComponent)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFEquipmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFEquipmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFEquipmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFEquipmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFEquipmentComponent(UIFEquipmentComponent&&); \
	NO_API UIFEquipmentComponent(const UIFEquipmentComponent&); \
public:


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFEquipmentComponent(UIFEquipmentComponent&&); \
	NO_API UIFEquipmentComponent(const UIFEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFEquipmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFEquipmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIFEquipmentComponent)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquipmentItems() { return STRUCT_OFFSET(UIFEquipmentComponent, EquipmentItems); } \
	FORCEINLINE static uint32 __PPO__MaxSlots() { return STRUCT_OFFSET(UIFEquipmentComponent, MaxSlots); } \
	FORCEINLINE static uint32 __PPO__AvailableSlots() { return STRUCT_OFFSET(UIFEquipmentComponent, AvailableSlots); }


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_12_PROLOG \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_EVENT_PARMS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_RPC_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_CALLBACK_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_INCLASS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_CALLBACK_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYFRAMEWORK_API UClass* StaticClass<class UIFEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFEquipmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
