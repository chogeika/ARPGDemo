// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFrameworkEditor/Public/EffectEditor/GAEffectGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectGraphSchema() {}
// Cross Module References
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEffectGraphSchema_NoRegister();
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEffectGraphSchema();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AbilityFrameworkEditor();
// End Cross Module References
	void UGAEffectGraphSchema::StaticRegisterNativesUGAEffectGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UGAEffectGraphSchema_NoRegister()
	{
		return UGAEffectGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFrameworkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffectEditor/GAEffectGraphSchema.h" },
		{ "ModuleRelativePath", "Public/EffectEditor/GAEffectGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectGraphSchema_Statics::ClassParams = {
		&UGAEffectGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectGraphSchema, 1192399843);
	template<> ABILITYFRAMEWORKEDITOR_API UClass* StaticClass<UGAEffectGraphSchema>()
	{
		return UGAEffectGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectGraphSchema(Z_Construct_UClass_UGAEffectGraphSchema, &UGAEffectGraphSchema::StaticClass, TEXT("/Script/AbilityFrameworkEditor"), TEXT("UGAEffectGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
