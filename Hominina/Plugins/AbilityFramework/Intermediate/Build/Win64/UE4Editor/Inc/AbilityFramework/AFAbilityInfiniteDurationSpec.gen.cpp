// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/AFAbilityInfiniteDurationSpec.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAbilityInfiniteDurationSpec() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityInfiniteDurationSpec();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAGameEffectSpec();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAbilityInfiniteDurationSpec::StaticRegisterNativesUAFAbilityInfiniteDurationSpec()
	{
	}
	UClass* Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_NoRegister()
	{
		return UAFAbilityInfiniteDurationSpec::StaticClass();
	}
	struct Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAGameEffectSpec,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/AFAbilityInfiniteDurationSpec.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/AFAbilityInfiniteDurationSpec.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAbilityInfiniteDurationSpec>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::ClassParams = {
		&UAFAbilityInfiniteDurationSpec::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAbilityInfiniteDurationSpec()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAbilityInfiniteDurationSpec_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAbilityInfiniteDurationSpec, 725737584);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAbilityInfiniteDurationSpec>()
	{
		return UAFAbilityInfiniteDurationSpec::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAbilityInfiniteDurationSpec(Z_Construct_UClass_UAFAbilityInfiniteDurationSpec, &UAFAbilityInfiniteDurationSpec::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAbilityInfiniteDurationSpec"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAbilityInfiniteDurationSpec);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
