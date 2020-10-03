// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFEffectCustomStackingRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectCustomStackingRule() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomStackingRule_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomStackingRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFEffectCustomStackingRule::StaticRegisterNativesUAFEffectCustomStackingRule()
	{
	}
	UClass* Z_Construct_UClass_UAFEffectCustomStackingRule_NoRegister()
	{
		return UAFEffectCustomStackingRule::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectCustomStackingRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effects/AFEffectCustomStackingRule.h" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectCustomStackingRule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectCustomStackingRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::ClassParams = {
		&UAFEffectCustomStackingRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectCustomStackingRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectCustomStackingRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectCustomStackingRule, 2220875828);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectCustomStackingRule>()
	{
		return UAFEffectCustomStackingRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectCustomStackingRule(Z_Construct_UClass_UAFEffectCustomStackingRule, &UAFEffectCustomStackingRule::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectCustomStackingRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectCustomStackingRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
