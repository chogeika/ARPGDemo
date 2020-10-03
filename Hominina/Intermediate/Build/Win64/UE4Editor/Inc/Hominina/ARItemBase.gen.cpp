// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemBase() {}
// Cross Module References
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARItemTooltipData();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARPlayerAttributeMod();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeMod();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	HOMININA_API UClass* Z_Construct_UClass_UARItemBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemBase();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectContainerSimple();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectSpecBase_NoRegister();
// End Cross Module References
class UScriptStruct* FARItemTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOMININA_API uint32 Get_Z_Construct_UScriptStruct_FARItemTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARItemTooltipData, Z_Construct_UPackage__Script_Hominina(), TEXT("ARItemTooltipData"), sizeof(FARItemTooltipData), Get_Z_Construct_UScriptStruct_FARItemTooltipData_Hash());
	}
	return Singleton;
}
template<> HOMININA_API UScriptStruct* StaticStruct<FARItemTooltipData>()
{
	return FARItemTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARItemTooltipData(FARItemTooltipData::StaticStruct, TEXT("/Script/Hominina"), TEXT("ARItemTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_Hominina_StaticRegisterNativesFARItemTooltipData
{
	FScriptStruct_Hominina_StaticRegisterNativesFARItemTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARItemTooltipData")),new UScriptStruct::TCppStructOps<FARItemTooltipData>);
	}
} ScriptStruct_Hominina_StaticRegisterNativesFARItemTooltipData;
	struct Z_Construct_UScriptStruct_FARItemTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARItemTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARItemTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ARItemTooltipData" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARItemTooltipData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ARItemTooltipData" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARItemTooltipData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARItemTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARItemTooltipData_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARItemTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
		nullptr,
		&NewStructOps,
		"ARItemTooltipData",
		sizeof(FARItemTooltipData),
		alignof(FARItemTooltipData),
		Z_Construct_UScriptStruct_FARItemTooltipData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARItemTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARItemTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARItemTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARItemTooltipData"), sizeof(FARItemTooltipData), Get_Z_Construct_UScriptStruct_FARItemTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARItemTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARItemTooltipData_Hash() { return 3023735068U; }
class UScriptStruct* FARPlayerAttributeMod::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOMININA_API uint32 Get_Z_Construct_UScriptStruct_FARPlayerAttributeMod_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPlayerAttributeMod, Z_Construct_UPackage__Script_Hominina(), TEXT("ARPlayerAttributeMod"), sizeof(FARPlayerAttributeMod), Get_Z_Construct_UScriptStruct_FARPlayerAttributeMod_Hash());
	}
	return Singleton;
}
template<> HOMININA_API UScriptStruct* StaticStruct<FARPlayerAttributeMod>()
{
	return FARPlayerAttributeMod::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARPlayerAttributeMod(FARPlayerAttributeMod::StaticStruct, TEXT("/Script/Hominina"), TEXT("ARPlayerAttributeMod"), false, nullptr, nullptr);
static struct FScriptStruct_Hominina_StaticRegisterNativesFARPlayerAttributeMod
{
	FScriptStruct_Hominina_StaticRegisterNativesFARPlayerAttributeMod()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARPlayerAttributeMod")),new UScriptStruct::TCppStructOps<FARPlayerAttributeMod>);
	}
} ScriptStruct_Hominina_StaticRegisterNativesFARPlayerAttributeMod;
	struct Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPlayerAttributeMod>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType_MetaData[] = {
		{ "Category", "Mod" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType = { "ModType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlayerAttributeMod, ModType), Z_Construct_UEnum_AbilityFramework_EGAAttributeMod, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Mod" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlayerAttributeMod, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Mod" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARPlayerAttributeMod, Attribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_ModType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::NewProp_Attribute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
		nullptr,
		&NewStructOps,
		"ARPlayerAttributeMod",
		sizeof(FARPlayerAttributeMod),
		alignof(FARPlayerAttributeMod),
		Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPlayerAttributeMod()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARPlayerAttributeMod_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARPlayerAttributeMod"), sizeof(FARPlayerAttributeMod), Get_Z_Construct_UScriptStruct_FARPlayerAttributeMod_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARPlayerAttributeMod_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARPlayerAttributeMod_Hash() { return 170688855U; }
	void UARItemBase::StaticRegisterNativesUARItemBase()
	{
	}
	UClass* Z_Construct_UClass_UARItemBase_NoRegister()
	{
		return UARItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UARItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpgradeContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttributeEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributesModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributesModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsToApply_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectsToApply;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectsToApply_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIFItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ARItemBase.h" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemBase_Statics::NewProp_UpgradeContainer_MetaData[] = {
		{ "Comment", "/*\n\x09\x09""Containes upgrades to THIS item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
		{ "ToolTip", "Containes upgrades to THIS item." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_UpgradeContainer = { "UpgradeContainer", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemBase, UpgradeContainer), Z_Construct_UScriptStruct_FAFEffectContainerSimple, METADATA_PARAMS(Z_Construct_UClass_UARItemBase_Statics::NewProp_UpgradeContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::NewProp_UpgradeContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemBase_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemBase, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemBase_Statics::NewProp_Icon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributeEffectClass_MetaData[] = {
		{ "Category", "Apply To Player" },
		{ "Comment", "/*\n\x09\x09""An Template from which attribute effects will be created.\n\x09\x09Values from AttributesModifiers property will be used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
		{ "ToolTip", "An Template from which attribute effects will be created.\nValues from AttributesModifiers property will be used." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributeEffectClass = { "AttributeEffectClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemBase, AttributeEffectClass), Z_Construct_UClass_UAFEffectSpecBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributeEffectClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributeEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers_MetaData[] = {
		{ "Category", "Apply To Player" },
		{ "Comment", "/*\n\x09\x09""Attribute modifying effects which will be applied to player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
		{ "ToolTip", "Attribute modifying effects which will be applied to player." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers = { "AttributesModifiers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemBase, AttributesModifiers), METADATA_PARAMS(Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers_Inner = { "AttributesModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARPlayerAttributeMod, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply_MetaData[] = {
		{ "Category", "Apply To Player" },
		{ "Comment", "/*\n\x09\x09Perks (Effects with extensions), to apply to owner of this item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ARItemBase.h" },
		{ "ToolTip", "Perks (Effects with extensions), to apply to owner of this item." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply = { "EffectsToApply", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemBase, EffectsToApply), METADATA_PARAMS(Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply_Inner = { "EffectsToApply", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAFEffectSpecBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_UpgradeContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributeEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_AttributesModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemBase_Statics::NewProp_EffectsToApply_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemBase_Statics::ClassParams = {
		&UARItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARItemBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARItemBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemBase, 294860902);
	template<> HOMININA_API UClass* StaticClass<UARItemBase>()
	{
		return UARItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemBase(Z_Construct_UClass_UARItemBase, &UARItemBase::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
