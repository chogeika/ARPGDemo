// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFEffectCustomApplication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectCustomApplication() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFEffectCustomApplication::StaticRegisterNativesUAFEffectCustomApplication()
	{
	}
	UClass* Z_Construct_UClass_UAFEffectCustomApplication_NoRegister()
	{
		return UAFEffectCustomApplication::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectCustomApplication_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectCustomApplication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectCustomApplication_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default application used for instant effects.\n */" },
		{ "DisplayName", "Default Application" },
		{ "IncludePath", "Effects/AFEffectCustomApplication.h" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectCustomApplication.h" },
		{ "ToolTip", "Default application used for instant effects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectCustomApplication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectCustomApplication>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectCustomApplication_Statics::ClassParams = {
		&UAFEffectCustomApplication::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectCustomApplication_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectCustomApplication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectCustomApplication()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectCustomApplication_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectCustomApplication, 3521853521);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectCustomApplication>()
	{
		return UAFEffectCustomApplication::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectCustomApplication(Z_Construct_UClass_UAFEffectCustomApplication, &UAFEffectCustomApplication::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectCustomApplication"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectCustomApplication);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
