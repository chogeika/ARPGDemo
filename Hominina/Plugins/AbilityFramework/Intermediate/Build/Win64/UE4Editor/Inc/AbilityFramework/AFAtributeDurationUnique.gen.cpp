// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFAtributeDurationUnique.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAtributeDurationUnique() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAtributeDurationUnique_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAtributeDurationUnique();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAtributeDurationUnique::StaticRegisterNativesUAFAtributeDurationUnique()
	{
	}
	UClass* Z_Construct_UClass_UAFAtributeDurationUnique_NoRegister()
	{
		return UAFAtributeDurationUnique::StaticClass();
	}
	struct Z_Construct_UClass_UAFAtributeDurationUnique_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAtributeDurationUnique_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAtributeDurationUnique_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds New Unique duration Effect. If effect of the same class is already applied to target, new effect will be ignored.\n */" },
		{ "DisplayName", "Duration Add Unique" },
		{ "IncludePath", "Effects/CustomApplications/AFAtributeDurationUnique.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFAtributeDurationUnique.h" },
		{ "ToolTip", "Adds New Unique duration Effect. If effect of the same class is already applied to target, new effect will be ignored." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAtributeDurationUnique_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAtributeDurationUnique>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAtributeDurationUnique_Statics::ClassParams = {
		&UAFAtributeDurationUnique::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAtributeDurationUnique_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAtributeDurationUnique_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAtributeDurationUnique()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAtributeDurationUnique_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAtributeDurationUnique, 3131883912);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAtributeDurationUnique>()
	{
		return UAFAtributeDurationUnique::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAtributeDurationUnique(Z_Construct_UClass_UAFAtributeDurationUnique, &UAFAtributeDurationUnique::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAtributeDurationUnique"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAtributeDurationUnique);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
