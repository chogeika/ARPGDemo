// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Attributes/ARGunAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARGunAttributes() {}
// Cross Module References
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARGunAttributesItem();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeBase();
	HOMININA_API UClass* Z_Construct_UClass_UARGunAttributes_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARGunAttributes();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBase();
	HOMININA_API UFunction* Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine();
// End Cross Module References
class UScriptStruct* FARGunAttributesItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOMININA_API uint32 Get_Z_Construct_UScriptStruct_FARGunAttributesItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARGunAttributesItem, Z_Construct_UPackage__Script_Hominina(), TEXT("ARGunAttributesItem"), sizeof(FARGunAttributesItem), Get_Z_Construct_UScriptStruct_FARGunAttributesItem_Hash());
	}
	return Singleton;
}
template<> HOMININA_API UScriptStruct* StaticStruct<FARGunAttributesItem>()
{
	return FARGunAttributesItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARGunAttributesItem(FARGunAttributesItem::StaticStruct, TEXT("/Script/Hominina"), TEXT("ARGunAttributesItem"), false, nullptr, nullptr);
static struct FScriptStruct_Hominina_StaticRegisterNativesFARGunAttributesItem
{
	FScriptStruct_Hominina_StaticRegisterNativesFARGunAttributesItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARGunAttributesItem")),new UScriptStruct::TCppStructOps<FARGunAttributesItem>);
	}
} ScriptStruct_Hominina_StaticRegisterNativesFARGunAttributesItem;
	struct Z_Construct_UScriptStruct_FARGunAttributesItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalStability_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalStability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalStability_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalStability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Magazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CritChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Mirror of Attribute Object to be used inside Items.\n*/" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
		{ "ToolTip", "Mirror of Attribute Object to be used inside Items." },
	};
#endif
	void* Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARGunAttributesItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, Spread), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Spread_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_VerticalStability_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_VerticalStability = { "VerticalStability", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, VerticalStability), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_VerticalStability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_VerticalStability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_HorizontalStability_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_HorizontalStability = { "HorizontalStability", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, HorizontalStability), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_HorizontalStability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_HorizontalStability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, ReloadSpeed), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_ReloadSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_ReloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, RateOfFire), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_RateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Magazine_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Magazine = { "Magazine", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, Magazine), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Magazine_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Magazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, CritChance), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_CritChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARGunAttributesItem, BaseDamage), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_BaseDamage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_BaseDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_VerticalStability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_HorizontalStability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_ReloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_Magazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::NewProp_BaseDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
		nullptr,
		&NewStructOps,
		"ARGunAttributesItem",
		sizeof(FARGunAttributesItem),
		alignof(FARGunAttributesItem),
		Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARGunAttributesItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARGunAttributesItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARGunAttributesItem"), sizeof(FARGunAttributesItem), Get_Z_Construct_UScriptStruct_FARGunAttributesItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARGunAttributesItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARGunAttributesItem_Hash() { return 1159122084U; }
	void UARGunAttributes::StaticRegisterNativesUARGunAttributes()
	{
		UClass* Class = UARGunAttributes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Magazine", &UARGunAttributes::execOnRep_Magazine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics
	{
		struct ARGunAttributes_eventOnRep_Magazine_Parms
		{
			FAFAttributeBase OldVal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::NewProp_OldVal = { "OldVal", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGunAttributes_eventOnRep_Magazine_Parms, OldVal), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::NewProp_OldVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGunAttributes, nullptr, "OnRep_Magazine", nullptr, nullptr, sizeof(ARGunAttributes_eventOnRep_Magazine_Parms), Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARGunAttributes_NoRegister()
	{
		return UARGunAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UARGunAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalStability_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalStability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalStability_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalStability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Magazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CritChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGunAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAttributesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGunAttributes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGunAttributes_OnRep_Magazine, "OnRep_Magazine" }, // 1310439567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * 1. Register FAFReplicationHandle with attribute change.\n * 2. If handle is valid then attribute change is also valid (for attribute prediction)\n * 3. If valid we don't override with server values.\n * 4. Wont work on attributes which can be changed by several sources at the same time like HP.\n * This will require custom treatment.\n */" },
		{ "IncludePath", "Attributes/ARGunAttributes.h" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
		{ "ToolTip", "1. Register FAFReplicationHandle with attribute change.\n2. If handle is valid then attribute change is also valid (for attribute prediction)\n3. If valid we don't override with server values.\n4. Wont work on attributes which can be changed by several sources at the same time like HP.\nThis will require custom treatment." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, Spread), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Spread_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_VerticalStability_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_VerticalStability = { "VerticalStability", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, VerticalStability), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_VerticalStability_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_VerticalStability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_HorizontalStability_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_HorizontalStability = { "HorizontalStability", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, HorizontalStability), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_HorizontalStability_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_HorizontalStability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, ReloadSpeed), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_ReloadSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_ReloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, RateOfFire), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_RateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Magazine_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Magazine = { "Magazine", "OnRep_Magazine", (EPropertyFlags)0x0010008101000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, Magazine), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Magazine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Magazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, CritChance), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_CritChance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGunAttributes_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARGunAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGunAttributes_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGunAttributes, BaseDamage), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_BaseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::NewProp_BaseDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARGunAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_VerticalStability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_HorizontalStability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_ReloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_Magazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGunAttributes_Statics::NewProp_BaseDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGunAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGunAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARGunAttributes_Statics::ClassParams = {
		&UARGunAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARGunAttributes_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARGunAttributes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARGunAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGunAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARGunAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARGunAttributes, 13567636);
	template<> HOMININA_API UClass* StaticClass<UARGunAttributes>()
	{
		return UARGunAttributes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARGunAttributes(Z_Construct_UClass_UARGunAttributes, &UARGunAttributes::StaticClass, TEXT("/Script/Hominina"), TEXT("UARGunAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGunAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
