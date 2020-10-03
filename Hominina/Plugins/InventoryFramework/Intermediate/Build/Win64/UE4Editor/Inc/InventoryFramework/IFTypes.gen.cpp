// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFramework/Public/IFTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFTypes() {}
// Cross Module References
	INVENTORYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FIFSlotAcceptedClasses();
	UPackage* Z_Construct_UPackage__Script_InventoryFramework();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase_NoRegister();
	INVENTORYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FIFItemData();
// End Cross Module References
class UScriptStruct* FIFSlotAcceptedClasses::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIFSlotAcceptedClasses, Z_Construct_UPackage__Script_InventoryFramework(), TEXT("IFSlotAcceptedClasses"), sizeof(FIFSlotAcceptedClasses), Get_Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Hash());
	}
	return Singleton;
}
template<> INVENTORYFRAMEWORK_API UScriptStruct* StaticStruct<FIFSlotAcceptedClasses>()
{
	return FIFSlotAcceptedClasses::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIFSlotAcceptedClasses(FIFSlotAcceptedClasses::StaticStruct, TEXT("/Script/InventoryFramework"), TEXT("IFSlotAcceptedClasses"), false, nullptr, nullptr);
static struct FScriptStruct_InventoryFramework_StaticRegisterNativesFIFSlotAcceptedClasses
{
	FScriptStruct_InventoryFramework_StaticRegisterNativesFIFSlotAcceptedClasses()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IFSlotAcceptedClasses")),new UScriptStruct::TCppStructOps<FIFSlotAcceptedClasses>);
	}
} ScriptStruct_InventoryFramework_StaticRegisterNativesFIFSlotAcceptedClasses;
	struct Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptedClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AcceptedClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIFSlotAcceptedClasses>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses_MetaData[] = {
		{ "Category", "IFSlotAcceptedClasses" },
		{ "ModuleRelativePath", "Public/IFTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses = { "AcceptedClasses", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIFSlotAcceptedClasses, AcceptedClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses_Inner = { "AcceptedClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UIFItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::NewProp_AcceptedClasses_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFramework,
		nullptr,
		&NewStructOps,
		"IFSlotAcceptedClasses",
		sizeof(FIFSlotAcceptedClasses),
		alignof(FIFSlotAcceptedClasses),
		Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIFSlotAcceptedClasses()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventoryFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IFSlotAcceptedClasses"), sizeof(FIFSlotAcceptedClasses), Get_Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIFSlotAcceptedClasses_Hash() { return 3688635179U; }
class UScriptStruct* FIFItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FIFItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIFItemData, Z_Construct_UPackage__Script_InventoryFramework(), TEXT("IFItemData"), sizeof(FIFItemData), Get_Z_Construct_UScriptStruct_FIFItemData_Hash());
	}
	return Singleton;
}
template<> INVENTORYFRAMEWORK_API UScriptStruct* StaticStruct<FIFItemData>()
{
	return FIFItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIFItemData(FIFItemData::StaticStruct, TEXT("/Script/InventoryFramework"), TEXT("IFItemData"), false, nullptr, nullptr);
static struct FScriptStruct_InventoryFramework_StaticRegisterNativesFIFItemData
{
	FScriptStruct_InventoryFramework_StaticRegisterNativesFIFItemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IFItemData")),new UScriptStruct::TCppStructOps<FIFItemData>);
	}
} ScriptStruct_InventoryFramework_StaticRegisterNativesFIFItemData;
	struct Z_Construct_UScriptStruct_FIFItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIFItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IFTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIFItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIFItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "IFItemData" },
		{ "ModuleRelativePath", "Public/IFTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIFItemData, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/IFTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIFItemData, Item), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIFItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIFItemData_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIFItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFramework,
		nullptr,
		&NewStructOps,
		"IFItemData",
		sizeof(FIFItemData),
		alignof(FIFItemData),
		Z_Construct_UScriptStruct_FIFItemData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FIFItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIFItemData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIFItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIFItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIFItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventoryFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IFItemData"), sizeof(FIFItemData), Get_Z_Construct_UScriptStruct_FIFItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIFItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIFItemData_Hash() { return 3426307057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
