// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFEffectApplicationRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectApplicationRequirement() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectApplicationRequirement_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectApplicationRequirement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFEffectApplicationRequirement::StaticRegisterNativesUAFEffectApplicationRequirement()
	{
	}
	UClass* Z_Construct_UClass_UAFEffectApplicationRequirement_NoRegister()
	{
		return UAFEffectApplicationRequirement::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectApplicationRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default requirment always passes.\n */" },
		{ "DisplayName", "No Requirement" },
		{ "IncludePath", "Effects/AFEffectApplicationRequirement.h" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectApplicationRequirement.h" },
		{ "ToolTip", "Default requirment always passes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectApplicationRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::ClassParams = {
		&UAFEffectApplicationRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectApplicationRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectApplicationRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectApplicationRequirement, 1908677771);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectApplicationRequirement>()
	{
		return UAFEffectApplicationRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectApplicationRequirement(Z_Construct_UClass_UAFEffectApplicationRequirement, &UAFEffectApplicationRequirement::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectApplicationRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectApplicationRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
