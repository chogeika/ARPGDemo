// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/ApplicationRequirement/AFEffectAlreadyApplied.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectAlreadyApplied() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectAlreadyApplied_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectAlreadyApplied();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectApplicationRequirement();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFEffectAlreadyApplied::StaticRegisterNativesUAFEffectAlreadyApplied()
	{
	}
	UClass* Z_Construct_UClass_UAFEffectAlreadyApplied_NoRegister()
	{
		return UAFEffectAlreadyApplied::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectAlreadyApplied_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectApplicationRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * If effect of the same type is already applied, it will be skipped.\n */" },
		{ "DisplayName", "Only One Of Type" },
		{ "IncludePath", "Effects/ApplicationRequirement/AFEffectAlreadyApplied.h" },
		{ "ModuleRelativePath", "Public/Effects/ApplicationRequirement/AFEffectAlreadyApplied.h" },
		{ "ToolTip", "If effect of the same type is already applied, it will be skipped." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectAlreadyApplied>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::ClassParams = {
		&UAFEffectAlreadyApplied::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectAlreadyApplied()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectAlreadyApplied_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectAlreadyApplied, 1076276864);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectAlreadyApplied>()
	{
		return UAFEffectAlreadyApplied::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectAlreadyApplied(Z_Construct_UClass_UAFEffectAlreadyApplied, &UAFEffectAlreadyApplied::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectAlreadyApplied"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectAlreadyApplied);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
