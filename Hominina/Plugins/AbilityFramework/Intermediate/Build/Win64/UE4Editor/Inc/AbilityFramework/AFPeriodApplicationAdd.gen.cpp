// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFPeriodApplicationAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPeriodApplicationAdd() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationAdd_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationAdd();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFPeriodApplicationAdd::StaticRegisterNativesUAFPeriodApplicationAdd()
	{
	}
	UClass* Z_Construct_UClass_UAFPeriodApplicationAdd_NoRegister()
	{
		return UAFPeriodApplicationAdd::StaticClass();
	}
	struct Z_Construct_UClass_UAFPeriodApplicationAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds new periodic effect.\n */" },
		{ "DisplayName", "Periodic Add" },
		{ "IncludePath", "Effects/CustomApplications/AFPeriodApplicationAdd.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFPeriodApplicationAdd.h" },
		{ "ToolTip", "Adds new periodic effect." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFPeriodApplicationAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::ClassParams = {
		&UAFPeriodApplicationAdd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFPeriodApplicationAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFPeriodApplicationAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFPeriodApplicationAdd, 856766922);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFPeriodApplicationAdd>()
	{
		return UAFPeriodApplicationAdd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFPeriodApplicationAdd(Z_Construct_UClass_UAFPeriodApplicationAdd, &UAFPeriodApplicationAdd::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFPeriodApplicationAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFPeriodApplicationAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
