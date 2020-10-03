// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIFItemBase;
class UIFEquipmentComponent;
struct FSoftObjectPath;
class AIFItemActorBase;
#ifdef INVENTORYFRAMEWORK_IFInventoryComponent_generated_h
#error "IFInventoryComponent.generated.h already included, missing '#pragma once' in IFInventoryComponent.h"
#endif
#define INVENTORYFRAMEWORK_IFInventoryComponent_generated_h

#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_RPC_WRAPPERS \
	virtual void ClientSendJsonData_Implementation(const FString& Data); \
	virtual void ClientRemoveItem_Implementation(uint8 Index); \
	virtual bool ServerRemoveItem_Validate(uint8 ); \
	virtual void ServerRemoveItem_Implementation(uint8 InIndex); \
	virtual void ClientAddAnySlot_Implementation(const FString& JsonData, uint8 InventoryIndex); \
	virtual void ClientAddItemFromEquipmentAnySlot_Implementation(UIFEquipmentComponent* Source, uint8 SourceIndex, uint8 InventoryIndex); \
	virtual bool ServerAddItemFromEquipmentAnySlot_Validate(UIFEquipmentComponent* , uint8 ); \
	virtual void ServerAddItemFromEquipmentAnySlot_Implementation(UIFEquipmentComponent* Source, uint8 SourceIndex); \
	virtual void ClientAddItemFromEquipment_Implementation(UIFEquipmentComponent* Source, uint8 SourceIndex, uint8 InventoryIndex); \
	virtual bool ServerAddItemFromEquipment_Validate(UIFEquipmentComponent* , uint8 , uint8 ); \
	virtual void ServerAddItemFromEquipment_Implementation(UIFEquipmentComponent* Source, uint8 SourceIndex, uint8 InventoryIndex); \
	virtual bool ServerAddItemFromClass_Validate(FSoftObjectPath const& , uint8 ); \
	virtual void ServerAddItemFromClass_Implementation(FSoftObjectPath const& Item, uint8 InLocalIndex); \
	virtual bool ServerAddAllItemsFromActor_Validate(AIFItemActorBase* ); \
	virtual void ServerAddAllItemsFromActor_Implementation(AIFItemActorBase* Source); \
	virtual bool ServerMoveItemInInventory_Validate(uint8 , uint8 ); \
	virtual void ServerMoveItemInInventory_Implementation(uint8 NewNetPostion, uint8 OldNetPositin); \
 \
	DECLARE_FUNCTION(execClientSendJsonData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSendJsonData_Implementation(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemLoaded) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UIFItemBase> ,Z_Param_InItem); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemLoaded(Z_Param_InItem,Z_Param_InNetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemLoadedFreeSlot) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UIFItemBase> ,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemLoadedFreeSlot(Z_Param_InItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientRemoveItem) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientRemoveItem_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemoveItem) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemoveItem_Validate(Z_Param_InIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemoveItem_Validate")); \
			return; \
		} \
		P_THIS->ServerRemoveItem_Implementation(Z_Param_InIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddAnySlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JsonData); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddAnySlot_Implementation(Z_Param_JsonData,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddItemFromEquipmentAnySlot) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddItemFromEquipmentAnySlot_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromEquipmentAnySlot) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromEquipmentAnySlot_Validate(Z_Param_Source,Z_Param_SourceIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromEquipmentAnySlot_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromEquipmentAnySlot_Implementation(Z_Param_Source,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddItemFromEquipment) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddItemFromEquipment_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromEquipment) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromEquipment_Validate(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromEquipment_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromEquipment_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddItemFromClass) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UIFItemBase> ,Z_Param_Item); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddItemFromClass(Z_Param_Item,Z_Param_InLocalIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromClass) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_Item); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromClass_Validate(Z_Param_Item,Z_Param_InLocalIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromClass_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromClass_Implementation(Z_Param_Item,Z_Param_InLocalIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddAllItemsFromActor) \
	{ \
		P_GET_OBJECT(AIFItemActorBase,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddAllItemsFromActor(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddAllItemsFromActor) \
	{ \
		P_GET_OBJECT(AIFItemActorBase,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddAllItemsFromActor_Validate(Z_Param_Source)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddAllItemsFromActor_Validate")); \
			return; \
		} \
		P_THIS->ServerAddAllItemsFromActor_Implementation(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveItemInInventory) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewNetPostion); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldNetPositin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveItemInInventory_Validate(Z_Param_NewNetPostion,Z_Param_OldNetPositin)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveItemInInventory_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveItemInInventory_Implementation(Z_Param_NewNetPostion,Z_Param_OldNetPositin); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientSendJsonData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSendJsonData_Implementation(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemLoaded) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UIFItemBase> ,Z_Param_InItem); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InNetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemLoaded(Z_Param_InItem,Z_Param_InNetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnItemLoadedFreeSlot) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UIFItemBase> ,Z_Param_InItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnItemLoadedFreeSlot(Z_Param_InItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientRemoveItem) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientRemoveItem_Implementation(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemoveItem) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemoveItem_Validate(Z_Param_InIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemoveItem_Validate")); \
			return; \
		} \
		P_THIS->ServerRemoveItem_Implementation(Z_Param_InIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddAnySlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JsonData); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddAnySlot_Implementation(Z_Param_JsonData,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddItemFromEquipmentAnySlot) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddItemFromEquipmentAnySlot_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromEquipmentAnySlot) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromEquipmentAnySlot_Validate(Z_Param_Source,Z_Param_SourceIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromEquipmentAnySlot_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromEquipmentAnySlot_Implementation(Z_Param_Source,Z_Param_SourceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddItemFromEquipment) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddItemFromEquipment_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromEquipment) \
	{ \
		P_GET_OBJECT(UIFEquipmentComponent,Z_Param_Source); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SourceIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InventoryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromEquipment_Validate(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromEquipment_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromEquipment_Implementation(Z_Param_Source,Z_Param_SourceIndex,Z_Param_InventoryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddItemFromClass) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UIFItemBase> ,Z_Param_Item); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddItemFromClass(Z_Param_Item,Z_Param_InLocalIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddItemFromClass) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_Item); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InLocalIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddItemFromClass_Validate(Z_Param_Item,Z_Param_InLocalIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddItemFromClass_Validate")); \
			return; \
		} \
		P_THIS->ServerAddItemFromClass_Implementation(Z_Param_Item,Z_Param_InLocalIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddAllItemsFromActor) \
	{ \
		P_GET_OBJECT(AIFItemActorBase,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddAllItemsFromActor(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddAllItemsFromActor) \
	{ \
		P_GET_OBJECT(AIFItemActorBase,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddAllItemsFromActor_Validate(Z_Param_Source)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddAllItemsFromActor_Validate")); \
			return; \
		} \
		P_THIS->ServerAddAllItemsFromActor_Implementation(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveItemInInventory) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewNetPostion); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldNetPositin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveItemInInventory_Validate(Z_Param_NewNetPostion,Z_Param_OldNetPositin)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveItemInInventory_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveItemInInventory_Implementation(Z_Param_NewNetPostion,Z_Param_OldNetPositin); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_EVENT_PARMS \
	struct IFInventoryComponent_eventClientAddAnySlot_Parms \
	{ \
		FString JsonData; \
		uint8 InventoryIndex; \
	}; \
	struct IFInventoryComponent_eventClientAddItemFromEquipment_Parms \
	{ \
		UIFEquipmentComponent* Source; \
		uint8 SourceIndex; \
		uint8 InventoryIndex; \
	}; \
	struct IFInventoryComponent_eventClientAddItemFromEquipmentAnySlot_Parms \
	{ \
		UIFEquipmentComponent* Source; \
		uint8 SourceIndex; \
		uint8 InventoryIndex; \
	}; \
	struct IFInventoryComponent_eventClientRemoveItem_Parms \
	{ \
		uint8 Index; \
	}; \
	struct IFInventoryComponent_eventClientSendJsonData_Parms \
	{ \
		FString Data; \
	}; \
	struct IFInventoryComponent_eventServerAddAllItemsFromActor_Parms \
	{ \
		AIFItemActorBase* Source; \
	}; \
	struct IFInventoryComponent_eventServerAddItemFromClass_Parms \
	{ \
		FSoftObjectPath Item; \
		uint8 InLocalIndex; \
	}; \
	struct IFInventoryComponent_eventServerAddItemFromEquipment_Parms \
	{ \
		UIFEquipmentComponent* Source; \
		uint8 SourceIndex; \
		uint8 InventoryIndex; \
	}; \
	struct IFInventoryComponent_eventServerAddItemFromEquipmentAnySlot_Parms \
	{ \
		UIFEquipmentComponent* Source; \
		uint8 SourceIndex; \
	}; \
	struct IFInventoryComponent_eventServerMoveItemInInventory_Parms \
	{ \
		uint8 NewNetPostion; \
		uint8 OldNetPositin; \
	}; \
	struct IFInventoryComponent_eventServerRemoveItem_Parms \
	{ \
		uint8 InIndex; \
	};


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_CALLBACK_WRAPPERS
#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIFInventoryComponent(); \
	friend struct Z_Construct_UClass_UIFInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UIFInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryFramework"), NO_API) \
	DECLARE_SERIALIZER(UIFInventoryComponent)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUIFInventoryComponent(); \
	friend struct Z_Construct_UClass_UIFInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UIFInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryFramework"), NO_API) \
	DECLARE_SERIALIZER(UIFInventoryComponent)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFInventoryComponent(UIFInventoryComponent&&); \
	NO_API UIFInventoryComponent(const UIFInventoryComponent&); \
public:


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFInventoryComponent(UIFInventoryComponent&&); \
	NO_API UIFInventoryComponent(const UIFInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIFInventoryComponent)


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InventoryItems() { return STRUCT_OFFSET(UIFInventoryComponent, InventoryItems); } \
	FORCEINLINE static uint32 __PPO__AcceptedClasses() { return STRUCT_OFFSET(UIFInventoryComponent, AcceptedClasses); } \
	FORCEINLINE static uint32 __PPO__AcceptedSlotClasses() { return STRUCT_OFFSET(UIFInventoryComponent, AcceptedSlotClasses); } \
	FORCEINLINE static uint32 __PPO__MaxSlots() { return STRUCT_OFFSET(UIFInventoryComponent, MaxSlots); } \
	FORCEINLINE static uint32 __PPO__AvailableSlots() { return STRUCT_OFFSET(UIFInventoryComponent, AvailableSlots); }


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_16_PROLOG \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_EVENT_PARMS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_RPC_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_CALLBACK_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_INCLASS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_CALLBACK_WRAPPERS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYFRAMEWORK_API UClass* StaticClass<class UIFInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_InventoryFramework_Source_InventoryFramework_Public_IFInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
