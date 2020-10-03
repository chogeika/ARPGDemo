// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/CustomApplications/AFAttributeDurationOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAttributeDurationOverride() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeDurationOverride_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeDurationOverride();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAttributeDurationOverride::StaticRegisterNativesUAFAttributeDurationOverride()
	{
	}
	UClass* Z_Construct_UClass_UAFAttributeDurationOverride_NoRegister()
	{
		return UAFAttributeDurationOverride::StaticClass();
	}
	struct Z_Construct_UClass_UAFAttributeDurationOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAttributeDurationOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectCustomApplication,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAttributeDurationOverride_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * If effect of the same class is already applied it will be removed, and new one will be applied.\n */" },
		{ "DisplayName", "Duration Override" },
		{ "IncludePath", "Effects/CustomApplications/AFAttributeDurationOverride.h" },
		{ "ModuleRelativePath", "Public/Effects/CustomApplications/AFAttributeDurationOverride.h" },
		{ "ToolTip", "If effect of the same class is already applied it will be removed, and new one will be applied." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAttributeDurationOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAttributeDurationOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAttributeDurationOverride_Statics::ClassParams = {
		&UAFAttributeDurationOverride::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAttributeDurationOverride_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAttributeDurationOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAttributeDurationOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAttributeDurationOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAttributeDurationOverride, 2939197733);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAttributeDurationOverride>()
	{
		return UAFAttributeDurationOverride::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAttributeDurationOverride(Z_Construct_UClass_UAFAttributeDurationOverride, &UAFAttributeDurationOverride::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAttributeDurationOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAttributeDurationOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
