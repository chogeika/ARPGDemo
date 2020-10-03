// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/ApplicationRequirement/AFAttributeStongerOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAttributeStongerOverride() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeStongerOverride_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeStongerOverride();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectApplicationRequirement();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAttributeStongerOverride::StaticRegisterNativesUAFAttributeStongerOverride()
	{
	}
	UClass* Z_Construct_UClass_UAFAttributeStongerOverride_NoRegister()
	{
		return UAFAttributeStongerOverride::StaticClass();
	}
	struct Z_Construct_UClass_UAFAttributeStongerOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAttributeStongerOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectApplicationRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAttributeStongerOverride_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * USe only with Duration Based application.\n * Effect will be applied if the attribute modifier is stronger than the current one on Attribute.\n */" },
		{ "DisplayName", "Attribute Stronger" },
		{ "IncludePath", "Effects/ApplicationRequirement/AFAttributeStongerOverride.h" },
		{ "ModuleRelativePath", "Public/Effects/ApplicationRequirement/AFAttributeStongerOverride.h" },
		{ "ToolTip", "USe only with Duration Based application.\nEffect will be applied if the attribute modifier is stronger than the current one on Attribute." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAttributeStongerOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAttributeStongerOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAttributeStongerOverride_Statics::ClassParams = {
		&UAFAttributeStongerOverride::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAttributeStongerOverride_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAttributeStongerOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAttributeStongerOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAttributeStongerOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAttributeStongerOverride, 1910539971);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAttributeStongerOverride>()
	{
		return UAFAttributeStongerOverride::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAttributeStongerOverride(Z_Construct_UClass_UAFAttributeStongerOverride, &UAFAttributeStongerOverride::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAttributeStongerOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAttributeStongerOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
