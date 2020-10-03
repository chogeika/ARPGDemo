// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFAtributeDurationAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAtributeDurationAdd() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAtributeDurationAdd_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAtributeDurationAdd();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAtributeDurationAdd::StaticRegisterNativesUAFAtributeDurationAdd()
	{
	}
	UClass* Z_Construct_UClass_UAFAtributeDurationAdd_NoRegister()
	{
		return UAFAtributeDurationAdd::StaticClass();
	}
	struct Z_Construct_UClass_UAFAtributeDurationAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAtributeDurationAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAtributeDurationAdd_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds New duration Effect.\n */" },
		{ "DisplayName", "Duration Add" },
		{ "IncludePath", "Effects/CustomApplications/AFAtributeDurationAdd.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFAtributeDurationAdd.h" },
		{ "ToolTip", "Adds New duration Effect." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAtributeDurationAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAtributeDurationAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAtributeDurationAdd_Statics::ClassParams = {
		&UAFAtributeDurationAdd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAtributeDurationAdd_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAtributeDurationAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAtributeDurationAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAtributeDurationAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAtributeDurationAdd, 1648422199);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAtributeDurationAdd>()
	{
		return UAFAtributeDurationAdd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAtributeDurationAdd(Z_Construct_UClass_UAFAtributeDurationAdd, &UAFAtributeDurationAdd::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAtributeDurationAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAtributeDurationAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
