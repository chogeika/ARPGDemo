// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFPeriodicApplInfiniteOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPeriodicApplInfiniteOverride() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodicApplInfiniteOverride();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFPeriodicApplInfiniteOverride::StaticRegisterNativesUAFPeriodicApplInfiniteOverride()
	{
	}
	UClass* Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_NoRegister()
	{
		return UAFPeriodicApplInfiniteOverride::StaticClass();
	}
	struct Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds infinite periodic effect. If effect of the same class already exists, it will be removed first.\n */" },
		{ "DisplayName", "Periodic Infinite Override" },
		{ "IncludePath", "Effects/CustomApplications/AFPeriodicApplInfiniteOverride.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFPeriodicApplInfiniteOverride.h" },
		{ "ToolTip", "Adds infinite periodic effect. If effect of the same class already exists, it will be removed first." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFPeriodicApplInfiniteOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::ClassParams = {
		&UAFPeriodicApplInfiniteOverride::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFPeriodicApplInfiniteOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFPeriodicApplInfiniteOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFPeriodicApplInfiniteOverride, 1767801401);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFPeriodicApplInfiniteOverride>()
	{
		return UAFPeriodicApplInfiniteOverride::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFPeriodicApplInfiniteOverride(Z_Construct_UClass_UAFPeriodicApplInfiniteOverride, &UAFPeriodicApplInfiniteOverride::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFPeriodicApplInfiniteOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFPeriodicApplInfiniteOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
