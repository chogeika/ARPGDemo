// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrConsideration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrConsideration() {}
// Cross Module References
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrConsideration_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrConsideration();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
// End Cross Module References
	void USpectrConsideration::StaticRegisterNativesUSpectrConsideration()
	{
	}
	UClass* Z_Construct_UClass_USpectrConsideration_NoRegister()
	{
		return USpectrConsideration::StaticClass();
	}
	struct Z_Construct_UClass_USpectrConsideration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectrConsideration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrConsideration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpectrConsideration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpectrConsideration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectrConsideration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectrConsideration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectrConsideration_Statics::ClassParams = {
		&USpectrConsideration::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpectrConsideration_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpectrConsideration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectrConsideration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectrConsideration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectrConsideration, 2594914878);
	template<> SPECTRAI_API UClass* StaticClass<USpectrConsideration>()
	{
		return USpectrConsideration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectrConsideration(Z_Construct_UClass_USpectrConsideration, &USpectrConsideration::StaticClass, TEXT("/Script/SpectrAI"), TEXT("USpectrConsideration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectrConsideration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
