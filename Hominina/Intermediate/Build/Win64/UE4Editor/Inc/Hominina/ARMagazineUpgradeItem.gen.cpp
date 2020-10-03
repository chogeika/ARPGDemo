// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Weapons/ARMagazineUpgradeItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARMagazineUpgradeItem() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARMagazineUpgradeItem_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARMagazineUpgradeItem();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponUpgradeItem();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMININA_API UClass* Z_Construct_UClass_UARMagazineUpgradeEffect_NoRegister();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeMod();
// End Cross Module References
	void UARMagazineUpgradeItem::StaticRegisterNativesUARMagazineUpgradeItem()
	{
	}
	UClass* Z_Construct_UClass_UARMagazineUpgradeItem_NoRegister()
	{
		return UARMagazineUpgradeItem::StaticClass();
	}
	struct Z_Construct_UClass_UARMagazineUpgradeItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UpgradeEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineUpgradeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagazineUpgradeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARMagazineUpgradeItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARWeaponUpgradeItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMagazineUpgradeItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/ARMagazineUpgradeItem.h" },
		{ "ModuleRelativePath", "Public/Weapons/ARMagazineUpgradeItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_UpgradeEffect_MetaData[] = {
		{ "Category", "ARMagazineUpgradeItem" },
		{ "Comment", "/*\n\x09\x09""Effect template\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapons/ARMagazineUpgradeItem.h" },
		{ "ToolTip", "Effect template" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_UpgradeEffect = { "UpgradeEffect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARMagazineUpgradeItem, UpgradeEffect), Z_Construct_UClass_UARMagazineUpgradeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_UpgradeEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_UpgradeEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType_MetaData[] = {
		{ "Category", "ARMagazineUpgradeItem" },
		{ "ModuleRelativePath", "Public/Weapons/ARMagazineUpgradeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType = { "ModType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARMagazineUpgradeItem, ModType), Z_Construct_UEnum_AbilityFramework_EGAAttributeMod, METADATA_PARAMS(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_MagazineUpgradeValue_MetaData[] = {
		{ "Category", "ARMagazineUpgradeItem" },
		{ "Comment", "/*\n\x09\x09""An actual modifier value of this upgrade.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapons/ARMagazineUpgradeItem.h" },
		{ "ToolTip", "An actual modifier value of this upgrade." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_MagazineUpgradeValue = { "MagazineUpgradeValue", nullptr, (EPropertyFlags)0x0010000001000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARMagazineUpgradeItem, MagazineUpgradeValue), METADATA_PARAMS(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_MagazineUpgradeValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_MagazineUpgradeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARMagazineUpgradeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_UpgradeEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_ModType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARMagazineUpgradeItem_Statics::NewProp_MagazineUpgradeValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARMagazineUpgradeItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARMagazineUpgradeItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARMagazineUpgradeItem_Statics::ClassParams = {
		&UARMagazineUpgradeItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARMagazineUpgradeItem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARMagazineUpgradeItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARMagazineUpgradeItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARMagazineUpgradeItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARMagazineUpgradeItem, 1893664503);
	template<> HOMININA_API UClass* StaticClass<UARMagazineUpgradeItem>()
	{
		return UARMagazineUpgradeItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARMagazineUpgradeItem(Z_Construct_UClass_UARMagazineUpgradeItem, &UARMagazineUpgradeItem::StaticClass, TEXT("/Script/Hominina"), TEXT("UARMagazineUpgradeItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARMagazineUpgradeItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
