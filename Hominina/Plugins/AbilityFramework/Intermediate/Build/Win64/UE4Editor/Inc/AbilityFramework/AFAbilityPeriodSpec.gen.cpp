// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/AFAbilityPeriodSpec.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAbilityPeriodSpec() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityPeriodSpec_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityPeriodSpec();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAGameEffectSpec();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAbilityPeriodSpec::StaticRegisterNativesUAFAbilityPeriodSpec()
	{
	}
	UClass* Z_Construct_UClass_UAFAbilityPeriodSpec_NoRegister()
	{
		return UAFAbilityPeriodSpec::StaticClass();
	}
	struct Z_Construct_UClass_UAFAbilityPeriodSpec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAGameEffectSpec,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/AFAbilityPeriodSpec.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/AFAbilityPeriodSpec.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAbilityPeriodSpec>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::ClassParams = {
		&UAFAbilityPeriodSpec::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAbilityPeriodSpec()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAbilityPeriodSpec_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAbilityPeriodSpec, 2446946367);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAbilityPeriodSpec>()
	{
		return UAFAbilityPeriodSpec::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAbilityPeriodSpec(Z_Construct_UClass_UAFAbilityPeriodSpec, &UAFAbilityPeriodSpec::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAbilityPeriodSpec"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAbilityPeriodSpec);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
