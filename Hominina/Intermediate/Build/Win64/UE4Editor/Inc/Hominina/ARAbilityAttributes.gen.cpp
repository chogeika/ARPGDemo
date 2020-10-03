// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Attributes/ARAbilityAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARAbilityAttributes() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARAbilityAttributes_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARAbilityAttributes();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeBase();
// End Cross Module References
	void UARAbilityAttributes::StaticRegisterNativesUARAbilityAttributes()
	{
	}
	UClass* Z_Construct_UClass_UARAbilityAttributes_NoRegister()
	{
		return UARAbilityAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UARAbilityAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CastTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARAbilityAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAttributesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAbilityAttributes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Attributes/ARAbilityAttributes.h" },
		{ "ModuleRelativePath", "Public/Attributes/ARAbilityAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARAbilityAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARAbilityAttributes, BaseDamage), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_BaseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARAbilityAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARAbilityAttributes, Cooldown), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_Cooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_CastTime_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARAbilityAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARAbilityAttributes, CastTime), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_CastTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_CastTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARAbilityAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARAbilityAttributes_Statics::NewProp_CastTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARAbilityAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARAbilityAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARAbilityAttributes_Statics::ClassParams = {
		&UARAbilityAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARAbilityAttributes_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARAbilityAttributes_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARAbilityAttributes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARAbilityAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARAbilityAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARAbilityAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARAbilityAttributes, 3313169857);
	template<> HOMININA_API UClass* StaticClass<UARAbilityAttributes>()
	{
		return UARAbilityAttributes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARAbilityAttributes(Z_Construct_UClass_UARAbilityAttributes, &UARAbilityAttributes::StaticClass, TEXT("/Script/Hominina"), TEXT("UARAbilityAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARAbilityAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
