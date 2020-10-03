// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFPeriodApplicationInfiniteAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPeriodApplicationInfiniteAdd() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFPeriodApplicationInfiniteAdd::StaticRegisterNativesUAFPeriodApplicationInfiniteAdd()
	{
	}
	UClass* Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_NoRegister()
	{
		return UAFPeriodApplicationInfiniteAdd::StaticClass();
	}
	struct Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Periodic effect will be applied for infinite amount of time.\n */" },
		{ "DisplayName", "Periodic Infinite Add" },
		{ "IncludePath", "Effects/CustomApplications/AFPeriodApplicationInfiniteAdd.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFPeriodApplicationInfiniteAdd.h" },
		{ "ToolTip", "Periodic effect will be applied for infinite amount of time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFPeriodApplicationInfiniteAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::ClassParams = {
		&UAFPeriodApplicationInfiniteAdd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFPeriodApplicationInfiniteAdd, 803725497);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFPeriodApplicationInfiniteAdd>()
	{
		return UAFPeriodApplicationInfiniteAdd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFPeriodApplicationInfiniteAdd(Z_Construct_UClass_UAFPeriodApplicationInfiniteAdd, &UAFPeriodApplicationInfiniteAdd::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFPeriodApplicationInfiniteAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFPeriodApplicationInfiniteAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
