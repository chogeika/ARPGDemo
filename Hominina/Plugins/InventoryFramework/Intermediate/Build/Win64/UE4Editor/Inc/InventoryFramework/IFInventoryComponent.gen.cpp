// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFramework/Public/IFInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFInventoryComponent() {}
// Cross Module References
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryComponent_NoRegister();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InventoryFramework();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_AIFItemActorBase_NoRegister();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase_NoRegister();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFEquipmentComponent_NoRegister();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem();
	INVENTORYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FIFSlotAcceptedClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FIFItemData();
// End Cross Module References
	static FName NAME_UIFInventoryComponent_ClientAddAnySlot = FName(TEXT("ClientAddAnySlot"));
	void UIFInventoryComponent::ClientAddAnySlot(const FString& JsonData, uint8 InventoryIndex)
	{
		IFInventoryComponent_eventClientAddAnySlot_Parms Parms;
		Parms.JsonData=JsonData;
		Parms.InventoryIndex=InventoryIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ClientAddAnySlot),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ClientAddItemFromEquipment = FName(TEXT("ClientAddItemFromEquipment"));
	void UIFInventoryComponent::ClientAddItemFromEquipment(UIFEquipmentComponent* Source, uint8 SourceIndex, uint8 InventoryIndex)
	{
		IFInventoryComponent_eventClientAddItemFromEquipment_Parms Parms;
		Parms.Source=Source;
		Parms.SourceIndex=SourceIndex;
		Parms.InventoryIndex=InventoryIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ClientAddItemFromEquipment),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot = FName(TEXT("ClientAddItemFromEquipmentAnySlot"));
	void UIFInventoryComponent::ClientAddItemFromEquipmentAnySlot(UIFEquipmentComponent* Source, uint8 SourceIndex, uint8 InventoryIndex)
	{
		IFInventoryComponent_eventClientAddItemFromEquipmentAnySlot_Parms Parms;
		Parms.Source=Source;
		Parms.SourceIndex=SourceIndex;
		Parms.InventoryIndex=InventoryIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ClientRemoveItem = FName(TEXT("ClientRemoveItem"));
	void UIFInventoryComponent::ClientRemoveItem(uint8 Index)
	{
		IFInventoryComponent_eventClientRemoveItem_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ClientRemoveItem),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ClientSendJsonData = FName(TEXT("ClientSendJsonData"));
	void UIFInventoryComponent::ClientSendJsonData(const FString& Data)
	{
		IFInventoryComponent_eventClientSendJsonData_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ClientSendJsonData),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ServerAddAllItemsFromActor = FName(TEXT("ServerAddAllItemsFromActor"));
	void UIFInventoryComponent::ServerAddAllItemsFromActor(AIFItemActorBase* Source)
	{
		IFInventoryComponent_eventServerAddAllItemsFromActor_Parms Parms;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ServerAddAllItemsFromActor),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ServerAddItemFromClass = FName(TEXT("ServerAddItemFromClass"));
	void UIFInventoryComponent::ServerAddItemFromClass(FSoftObjectPath const& Item, uint8 InLocalIndex)
	{
		IFInventoryComponent_eventServerAddItemFromClass_Parms Parms;
		Parms.Item=Item;
		Parms.InLocalIndex=InLocalIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ServerAddItemFromClass),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ServerAddItemFromEquipment = FName(TEXT("ServerAddItemFromEquipment"));
	void UIFInventoryComponent::ServerAddItemFromEquipment(UIFEquipmentComponent* Source, uint8 SourceIndex, uint8 InventoryIndex)
	{
		IFInventoryComponent_eventServerAddItemFromEquipment_Parms Parms;
		Parms.Source=Source;
		Parms.SourceIndex=SourceIndex;
		Parms.InventoryIndex=InventoryIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ServerAddItemFromEquipment),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot = FName(TEXT("ServerAddItemFromEquipmentAnySlot"));
	void UIFInventoryComponent::ServerAddItemFromEquipmentAnySlot(UIFEquipmentComponent* Source, uint8 SourceIndex)
	{
		IFInventoryComponent_eventServerAddItemFromEquipmentAnySlot_Parms Parms;
		Parms.Source=Source;
		Parms.SourceIndex=SourceIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ServerMoveItemInInventory = FName(TEXT("ServerMoveItemInInventory"));
	void UIFInventoryComponent::ServerMoveItemInInventory(uint8 NewNetPostion, uint8 OldNetPositin)
	{
		IFInventoryComponent_eventServerMoveItemInInventory_Parms Parms;
		Parms.NewNetPostion=NewNetPostion;
		Parms.OldNetPositin=OldNetPositin;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ServerMoveItemInInventory),&Parms);
	}
	static FName NAME_UIFInventoryComponent_ServerRemoveItem = FName(TEXT("ServerRemoveItem"));
	void UIFInventoryComponent::ServerRemoveItem(uint8 InIndex)
	{
		IFInventoryComponent_eventServerRemoveItem_Parms Parms;
		Parms.InIndex=InIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFInventoryComponent_ServerRemoveItem),&Parms);
	}
	void UIFInventoryComponent::StaticRegisterNativesUIFInventoryComponent()
	{
		UClass* Class = UIFInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddAllItemsFromActor", &UIFInventoryComponent::execBP_AddAllItemsFromActor },
			{ "BP_AddItemFromClass", &UIFInventoryComponent::execBP_AddItemFromClass },
			{ "ClientAddAnySlot", &UIFInventoryComponent::execClientAddAnySlot },
			{ "ClientAddItemFromEquipment", &UIFInventoryComponent::execClientAddItemFromEquipment },
			{ "ClientAddItemFromEquipmentAnySlot", &UIFInventoryComponent::execClientAddItemFromEquipmentAnySlot },
			{ "ClientRemoveItem", &UIFInventoryComponent::execClientRemoveItem },
			{ "ClientSendJsonData", &UIFInventoryComponent::execClientSendJsonData },
			{ "OnItemLoaded", &UIFInventoryComponent::execOnItemLoaded },
			{ "OnItemLoadedFreeSlot", &UIFInventoryComponent::execOnItemLoadedFreeSlot },
			{ "ServerAddAllItemsFromActor", &UIFInventoryComponent::execServerAddAllItemsFromActor },
			{ "ServerAddItemFromClass", &UIFInventoryComponent::execServerAddItemFromClass },
			{ "ServerAddItemFromEquipment", &UIFInventoryComponent::execServerAddItemFromEquipment },
			{ "ServerAddItemFromEquipmentAnySlot", &UIFInventoryComponent::execServerAddItemFromEquipmentAnySlot },
			{ "ServerMoveItemInInventory", &UIFInventoryComponent::execServerMoveItemInInventory },
			{ "ServerRemoveItem", &UIFInventoryComponent::execServerRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics
	{
		struct IFInventoryComponent_eventBP_AddAllItemsFromActor_Parms
		{
			AIFItemActorBase* Source;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventBP_AddAllItemsFromActor_Parms, Source), Z_Construct_UClass_AIFItemActorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryFramework" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "BP_AddAllItemsFromActor", nullptr, nullptr, sizeof(IFInventoryComponent_eventBP_AddAllItemsFromActor_Parms), Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics
	{
		struct IFInventoryComponent_eventBP_AddItemFromClass_Parms
		{
			TSoftClassPtr<UIFItemBase>  Item;
			uint8 InLocalIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLocalIndex;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::NewProp_InLocalIndex = { "InLocalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventBP_AddItemFromClass_Parms, InLocalIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventBP_AddItemFromClass_Parms, Item), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::NewProp_InLocalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryFramework" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "BP_AddItemFromClass", nullptr, nullptr, sizeof(IFInventoryComponent_eventBP_AddItemFromClass_Parms), Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InventoryIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddAnySlot_Parms, InventoryIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_JsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddAnySlot_Parms, JsonData), METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_JsonData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_JsonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_InventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::NewProp_JsonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09""Confirm that change can be made and do the same change on client.\n\x09We do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Confirm that change can be made and do the same change on client.\nWe do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ClientAddAnySlot", nullptr, nullptr, sizeof(IFInventoryComponent_eventClientAddAnySlot_Parms), Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InventoryIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddItemFromEquipment_Parms, InventoryIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddItemFromEquipment_Parms, SourceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddItemFromEquipment_Parms, Source), Z_Construct_UClass_UIFEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_InventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_SourceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09\x09""Confirm that change can be made and do the same change on client.\n\x09\x09We do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Confirm that change can be made and do the same change on client.\nWe do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ClientAddItemFromEquipment", nullptr, nullptr, sizeof(IFInventoryComponent_eventClientAddItemFromEquipment_Parms), Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InventoryIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddItemFromEquipmentAnySlot_Parms, InventoryIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddItemFromEquipmentAnySlot_Parms, SourceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientAddItemFromEquipmentAnySlot_Parms, Source), Z_Construct_UClass_UIFEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_InventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_SourceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09""Confirm that change can be made and do the same change on client.\n\x09We do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Confirm that change can be made and do the same change on client.\nWe do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ClientAddItemFromEquipmentAnySlot", nullptr, nullptr, sizeof(IFInventoryComponent_eventClientAddItemFromEquipmentAnySlot_Parms), Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientRemoveItem_Parms, Index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ClientRemoveItem", nullptr, nullptr, sizeof(IFInventoryComponent_eventClientRemoveItem_Parms), Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventClientSendJsonData_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ClientSendJsonData", nullptr, nullptr, sizeof(IFInventoryComponent_eventClientSendJsonData_Parms), Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics
	{
		struct IFInventoryComponent_eventOnItemLoaded_Parms
		{
			TSoftClassPtr<UIFItemBase>  InItem;
			uint8 InNetIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNetIndex;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_InItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::NewProp_InNetIndex = { "InNetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventOnItemLoaded_Parms, InNetIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventOnItemLoaded_Parms, InItem), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::NewProp_InNetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::NewProp_InItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "OnItemLoaded", nullptr, nullptr, sizeof(IFInventoryComponent_eventOnItemLoaded_Parms), Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics
	{
		struct IFInventoryComponent_eventOnItemLoadedFreeSlot_Parms
		{
			TSoftClassPtr<UIFItemBase>  InItem;
		};
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_InItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventOnItemLoadedFreeSlot_Parms, InItem), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::NewProp_InItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "OnItemLoadedFreeSlot", nullptr, nullptr, sizeof(IFInventoryComponent_eventOnItemLoadedFreeSlot_Parms), Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddAllItemsFromActor_Parms, Source), Z_Construct_UClass_AIFItemActorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ServerAddAllItemsFromActor", nullptr, nullptr, sizeof(IFInventoryComponent_eventServerAddAllItemsFromActor_Parms), Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLocalIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_InLocalIndex = { "InLocalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromClass_Parms, InLocalIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromClass_Parms, Item), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_InLocalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ServerAddItemFromClass", nullptr, nullptr, sizeof(IFInventoryComponent_eventServerAddItemFromClass_Parms), Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InventoryIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromEquipment_Parms, InventoryIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromEquipment_Parms, SourceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromEquipment_Parms, Source), Z_Construct_UClass_UIFEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_InventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_SourceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ServerAddItemFromEquipment", nullptr, nullptr, sizeof(IFInventoryComponent_eventServerAddItemFromEquipment_Parms), Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromEquipmentAnySlot_Parms, SourceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerAddItemFromEquipmentAnySlot_Parms, Source), Z_Construct_UClass_UIFEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_SourceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ServerAddItemFromEquipmentAnySlot", nullptr, nullptr, sizeof(IFInventoryComponent_eventServerAddItemFromEquipmentAnySlot_Parms), Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldNetPositin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewNetPostion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::NewProp_OldNetPositin = { "OldNetPositin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerMoveItemInInventory_Parms, OldNetPositin), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::NewProp_NewNetPostion = { "NewNetPostion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerMoveItemInInventory_Parms, NewNetPostion), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::NewProp_OldNetPositin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::NewProp_NewNetPostion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ServerMoveItemInInventory", nullptr, nullptr, sizeof(IFInventoryComponent_eventServerMoveItemInInventory_Parms), Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFInventoryComponent_eventServerRemoveItem_Parms, InIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFInventoryComponent, nullptr, "ServerRemoveItem", nullptr, nullptr, sizeof(IFInventoryComponent_eventServerRemoveItem_Parms), Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIFInventoryComponent_NoRegister()
	{
		return UIFInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIFInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvailableSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptedSlotClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptedSlotClasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcceptedSlotClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptedClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AcceptedClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIFInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIFInventoryComponent_BP_AddAllItemsFromActor, "BP_AddAllItemsFromActor" }, // 3531075448
		{ &Z_Construct_UFunction_UIFInventoryComponent_BP_AddItemFromClass, "BP_AddItemFromClass" }, // 1886314470
		{ &Z_Construct_UFunction_UIFInventoryComponent_ClientAddAnySlot, "ClientAddAnySlot" }, // 969072480
		{ &Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipment, "ClientAddItemFromEquipment" }, // 665390410
		{ &Z_Construct_UFunction_UIFInventoryComponent_ClientAddItemFromEquipmentAnySlot, "ClientAddItemFromEquipmentAnySlot" }, // 3920976830
		{ &Z_Construct_UFunction_UIFInventoryComponent_ClientRemoveItem, "ClientRemoveItem" }, // 2272140666
		{ &Z_Construct_UFunction_UIFInventoryComponent_ClientSendJsonData, "ClientSendJsonData" }, // 431371040
		{ &Z_Construct_UFunction_UIFInventoryComponent_OnItemLoaded, "OnItemLoaded" }, // 995238575
		{ &Z_Construct_UFunction_UIFInventoryComponent_OnItemLoadedFreeSlot, "OnItemLoadedFreeSlot" }, // 3407772586
		{ &Z_Construct_UFunction_UIFInventoryComponent_ServerAddAllItemsFromActor, "ServerAddAllItemsFromActor" }, // 2656805565
		{ &Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromClass, "ServerAddItemFromClass" }, // 424358122
		{ &Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipment, "ServerAddItemFromEquipment" }, // 993547957
		{ &Z_Construct_UFunction_UIFInventoryComponent_ServerAddItemFromEquipmentAnySlot, "ServerAddItemFromEquipmentAnySlot" }, // 215371044
		{ &Z_Construct_UFunction_UIFInventoryComponent_ServerMoveItemInInventory, "ServerMoveItemInInventory" }, // 772300590
		{ &Z_Construct_UFunction_UIFInventoryComponent_ServerRemoveItem, "ServerRemoveItem" }, // 3739234459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "IFInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AvailableSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/*\n\x09\x09""Currently available slots (must be smaller or equal to max slots);\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Currently available slots (must be smaller or equal to max slots);" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AvailableSlots = { "AvailableSlots", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFInventoryComponent, AvailableSlots), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AvailableSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AvailableSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_MaxSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_MaxSlots = { "MaxSlots", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFInventoryComponent, MaxSlots), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_MaxSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_MaxSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/*\n\x09\x09Which items slot will accept.\n\n\x09\x09Order is Equvalent to slot order on server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Which items slot will accept.\n\nOrder is Equvalent to slot order on server." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses = { "AcceptedSlotClasses", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFInventoryComponent, AcceptedSlotClasses), METADATA_PARAMS(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses_Inner = { "AcceptedSlotClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIFSlotAcceptedClasses, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/*\n\x09\x09Which items this inventory accept.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Which items this inventory accept." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses = { "AcceptedClasses", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFInventoryComponent, AcceptedClasses), METADATA_PARAMS(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses_Inner = { "AcceptedClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UIFItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems_MetaData[] = {
		{ "Comment", "/* Key is deserialized from Json and it stored in backend. *///UPROPERTY()\n//\x09TMap<uint8, FIFItem> InventoryItems;\n" },
		{ "ModuleRelativePath", "Public/IFInventoryComponent.h" },
		{ "ToolTip", "Key is deserialized from Json and it stored in backend. //UPROPERTY()\n//     TMap<uint8, FIFItem> InventoryItems;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFInventoryComponent, InventoryItems), METADATA_PARAMS(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIFItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIFInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AvailableSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_MaxSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedSlotClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_AcceptedClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFInventoryComponent_Statics::NewProp_InventoryItems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFInventoryComponent_Statics::ClassParams = {
		&UIFInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIFInventoryComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIFInventoryComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFInventoryComponent, 2534623119);
	template<> INVENTORYFRAMEWORK_API UClass* StaticClass<UIFInventoryComponent>()
	{
		return UIFInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFInventoryComponent(Z_Construct_UClass_UIFInventoryComponent, &UIFInventoryComponent::StaticClass, TEXT("/Script/InventoryFramework"), TEXT("UIFInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
