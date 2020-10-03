// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFramework/Public/IFEquipmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFEquipmentComponent() {}
// Cross Module References
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFEquipmentComponent_NoRegister();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFEquipmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InventoryFramework();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryComponent_NoRegister();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory();
	INVENTORYFRAMEWORK_API UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment();
	INVENTORYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FIFItemData();
// End Cross Module References
	static FName NAME_UIFEquipmentComponent_ClientAddItemFromInventory = FName(TEXT("ClientAddItemFromInventory"));
	void UIFEquipmentComponent::ClientAddItemFromInventory(UIFInventoryComponent* Source, uint8 SourceIndex, uint8 EquipmentIndex)
	{
		IFEquipmentComponent_eventClientAddItemFromInventory_Parms Parms;
		Parms.Source=Source;
		Parms.SourceIndex=SourceIndex;
		Parms.EquipmentIndex=EquipmentIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFEquipmentComponent_ClientAddItemFromInventory),&Parms);
	}
	static FName NAME_UIFEquipmentComponent_ClientRemoveFromEquipment = FName(TEXT("ClientRemoveFromEquipment"));
	void UIFEquipmentComponent::ClientRemoveFromEquipment(uint8 EquipmentIndex)
	{
		IFEquipmentComponent_eventClientRemoveFromEquipment_Parms Parms;
		Parms.EquipmentIndex=EquipmentIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFEquipmentComponent_ClientRemoveFromEquipment),&Parms);
	}
	static FName NAME_UIFEquipmentComponent_ServerAddItemFromInventory = FName(TEXT("ServerAddItemFromInventory"));
	void UIFEquipmentComponent::ServerAddItemFromInventory(UIFInventoryComponent* Source, uint8 SourceIndex, uint8 EquipmentIndex)
	{
		IFEquipmentComponent_eventServerAddItemFromInventory_Parms Parms;
		Parms.Source=Source;
		Parms.SourceIndex=SourceIndex;
		Parms.EquipmentIndex=EquipmentIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFEquipmentComponent_ServerAddItemFromInventory),&Parms);
	}
	static FName NAME_UIFEquipmentComponent_ServerRemoveFromEquipment = FName(TEXT("ServerRemoveFromEquipment"));
	void UIFEquipmentComponent::ServerRemoveFromEquipment(uint8 EquipmentIndex)
	{
		IFEquipmentComponent_eventServerRemoveFromEquipment_Parms Parms;
		Parms.EquipmentIndex=EquipmentIndex;
		ProcessEvent(FindFunctionChecked(NAME_UIFEquipmentComponent_ServerRemoveFromEquipment),&Parms);
	}
	void UIFEquipmentComponent::StaticRegisterNativesUIFEquipmentComponent()
	{
		UClass* Class = UIFEquipmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAddItemFromInventory", &UIFEquipmentComponent::execClientAddItemFromInventory },
			{ "ClientRemoveFromEquipment", &UIFEquipmentComponent::execClientRemoveFromEquipment },
			{ "ServerAddItemFromInventory", &UIFEquipmentComponent::execServerAddItemFromInventory },
			{ "ServerRemoveFromEquipment", &UIFEquipmentComponent::execServerRemoveFromEquipment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentIndex;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventClientAddItemFromInventory_Parms, EquipmentIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventClientAddItemFromInventory_Parms, SourceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventClientAddItemFromInventory_Parms, Source), Z_Construct_UClass_UIFInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_EquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_SourceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09""Confirm that change can be made and do the same change on client.\n\x09We do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
		{ "ToolTip", "Confirm that change can be made and do the same change on client.\nWe do not predict inventory modifications. Clients MUST wait for server to make changes and send confirmation back." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFEquipmentComponent, nullptr, "ClientAddItemFromInventory", nullptr, nullptr, sizeof(IFEquipmentComponent_eventClientAddItemFromInventory_Parms), Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventClientRemoveFromEquipment_Parms, EquipmentIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::NewProp_EquipmentIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFEquipmentComponent, nullptr, "ClientRemoveFromEquipment", nullptr, nullptr, sizeof(IFEquipmentComponent_eventClientRemoveFromEquipment_Parms), Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentIndex;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventServerAddItemFromInventory_Parms, EquipmentIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventServerAddItemFromInventory_Parms, SourceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventServerAddItemFromInventory_Parms, Source), Z_Construct_UClass_UIFInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_EquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_SourceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFEquipmentComponent, nullptr, "ServerAddItemFromInventory", nullptr, nullptr, sizeof(IFEquipmentComponent_eventServerAddItemFromInventory_Parms), Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipmentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFEquipmentComponent_eventServerRemoveFromEquipment_Parms, EquipmentIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::NewProp_EquipmentIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFEquipmentComponent, nullptr, "ServerRemoveFromEquipment", nullptr, nullptr, sizeof(IFEquipmentComponent_eventServerRemoveFromEquipment_Parms), Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIFEquipmentComponent_NoRegister()
	{
		return UIFEquipmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIFEquipmentComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipmentItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFEquipmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIFEquipmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIFEquipmentComponent_ClientAddItemFromInventory, "ClientAddItemFromInventory" }, // 398935411
		{ &Z_Construct_UFunction_UIFEquipmentComponent_ClientRemoveFromEquipment, "ClientRemoveFromEquipment" }, // 412644559
		{ &Z_Construct_UFunction_UIFEquipmentComponent_ServerAddItemFromInventory, "ServerAddItemFromInventory" }, // 4180561850
		{ &Z_Construct_UFunction_UIFEquipmentComponent_ServerRemoveFromEquipment, "ServerRemoveFromEquipment" }, // 2998197355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFEquipmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "IFEquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_AvailableSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/*\n\x09""Currently available slots (must be smaller or equal to max slots);\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
		{ "ToolTip", "Currently available slots (must be smaller or equal to max slots);" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_AvailableSlots = { "AvailableSlots", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFEquipmentComponent, AvailableSlots), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_AvailableSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_AvailableSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_MaxSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_MaxSlots = { "MaxSlots", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFEquipmentComponent, MaxSlots), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_MaxSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_MaxSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/IFEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems = { "EquipmentItems", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFEquipmentComponent, EquipmentItems), METADATA_PARAMS(Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems_Inner = { "EquipmentItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIFItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIFEquipmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_AvailableSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_MaxSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFEquipmentComponent_Statics::NewProp_EquipmentItems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFEquipmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFEquipmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFEquipmentComponent_Statics::ClassParams = {
		&UIFEquipmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIFEquipmentComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UIFEquipmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIFEquipmentComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIFEquipmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFEquipmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFEquipmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFEquipmentComponent, 777488701);
	template<> INVENTORYFRAMEWORK_API UClass* StaticClass<UIFEquipmentComponent>()
	{
		return UIFEquipmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFEquipmentComponent(Z_Construct_UClass_UIFEquipmentComponent, &UIFEquipmentComponent::StaticClass, TEXT("/Script/InventoryFramework"), TEXT("UIFEquipmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFEquipmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
