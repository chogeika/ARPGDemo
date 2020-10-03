// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GACustomCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGACustomCalculation() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGACustomCalculation_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGACustomCalculation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UGACustomCalculation::StaticRegisterNativesUGACustomCalculation()
	{
	}
	UClass* Z_Construct_UClass_UGACustomCalculation_NoRegister()
	{
		return UGACustomCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UGACustomCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGACustomCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGACustomCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09Simple base class for custom magnitude calculation.\n\x09You can implement here any kind of formula, taking arbitrary information, for calculations.\n\n\x09Object is instanced inside effect spec, so you can add custom properties set up, as per\n\x09""effect spec base. \n\n\x09Please refrain from making super complicated things, which calculate everything, it's\n\x09generally not purpose of this class, but if you really want.. (;.\n*/" },
		{ "IncludePath", "Effects/GACustomCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GACustomCalculation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simple base class for custom magnitude calculation.\nYou can implement here any kind of formula, taking arbitrary information, for calculations.\n\nObject is instanced inside effect spec, so you can add custom properties set up, as per\neffect spec base.\n\nPlease refrain from making super complicated things, which calculate everything, it's\ngenerally not purpose of this class, but if you really want.. (;." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGACustomCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGACustomCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGACustomCalculation_Statics::ClassParams = {
		&UGACustomCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGACustomCalculation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGACustomCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGACustomCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGACustomCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGACustomCalculation, 238513020);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGACustomCalculation>()
	{
		return UGACustomCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGACustomCalculation(Z_Construct_UClass_UGACustomCalculation, &UGACustomCalculation::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGACustomCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGACustomCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
