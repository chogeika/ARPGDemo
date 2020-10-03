// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFPeriodApplicationExtend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPeriodApplicationExtend() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationExtend_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFPeriodApplicationExtend();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFPeriodApplicationExtend::StaticRegisterNativesUAFPeriodApplicationExtend()
	{
	}
	UClass* Z_Construct_UClass_UAFPeriodApplicationExtend_NoRegister()
	{
		return UAFPeriodApplicationExtend::StaticClass();
	}
	struct Z_Construct_UClass_UAFPeriodApplicationExtend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * If periodic effect of the same class already exists it duration will be extended. If not new effect\n * will be applied.\n */" },
		{ "DisplayName", "Periodic Extend" },
		{ "IncludePath", "Effects/CustomApplications/AFPeriodApplicationExtend.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFPeriodApplicationExtend.h" },
		{ "ToolTip", "If periodic effect of the same class already exists it duration will be extended. If not new effect\nwill be applied." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFPeriodApplicationExtend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::ClassParams = {
		&UAFPeriodApplicationExtend::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFPeriodApplicationExtend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFPeriodApplicationExtend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFPeriodApplicationExtend, 3632773911);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFPeriodApplicationExtend>()
	{
		return UAFPeriodApplicationExtend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFPeriodApplicationExtend(Z_Construct_UClass_UAFPeriodApplicationExtend, &UAFPeriodApplicationExtend::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFPeriodApplicationExtend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFPeriodApplicationExtend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
