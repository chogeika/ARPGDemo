// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFAttributeDurationInfinite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAttributeDurationInfinite() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeDurationInfinite_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeDurationInfinite();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAttributeDurationInfinite::StaticRegisterNativesUAFAttributeDurationInfinite()
	{
	}
	UClass* Z_Construct_UClass_UAFAttributeDurationInfinite_NoRegister()
	{
		return UAFAttributeDurationInfinite::StaticClass();
	}
	struct Z_Construct_UClass_UAFAttributeDurationInfinite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds infinite duration effect.\n */" },
		{ "DisplayName", "Duration Infinite Add" },
		{ "IncludePath", "Effects/CustomApplications/AFAttributeDurationInfinite.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFAttributeDurationInfinite.h" },
		{ "ToolTip", "Adds infinite duration effect." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAttributeDurationInfinite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::ClassParams = {
		&UAFAttributeDurationInfinite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAttributeDurationInfinite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAttributeDurationInfinite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAttributeDurationInfinite, 1239892561);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAttributeDurationInfinite>()
	{
		return UAFAttributeDurationInfinite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAttributeDurationInfinite(Z_Construct_UClass_UAFAttributeDurationInfinite, &UAFAttributeDurationInfinite::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAttributeDurationInfinite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAttributeDurationInfinite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
