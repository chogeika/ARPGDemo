// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFPeriodApplicationOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPeriodApplicationOverride() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationOverride_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationOverride();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFPeriodApplicationOverride::StaticRegisterNativesUAFPeriodApplicationOverride()
	{
	}
	UClass* Z_Construct_UClass_UAFPeriodApplicationOverride_NoRegister()
	{
		return UAFPeriodApplicationOverride::StaticClass();
	}
	struct Z_Construct_UClass_UAFPeriodApplicationOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * If effect of the same class already exist it will be removed and new effect will be appllied.\n */" },
		{ "DisplayName", "Periodic Override" },
		{ "IncludePath", "Effects/CustomApplications/AFPeriodApplicationOverride.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFPeriodApplicationOverride.h" },
		{ "ToolTip", "If effect of the same class already exist it will be removed and new effect will be appllied." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFPeriodApplicationOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::ClassParams = {
		&UAFPeriodApplicationOverride::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFPeriodApplicationOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFPeriodApplicationOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFPeriodApplicationOverride, 3782296564);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFPeriodApplicationOverride>()
	{
		return UAFPeriodApplicationOverride::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFPeriodApplicationOverride(Z_Construct_UClass_UAFPeriodApplicationOverride, &UAFPeriodApplicationOverride::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFPeriodApplicationOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFPeriodApplicationOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
