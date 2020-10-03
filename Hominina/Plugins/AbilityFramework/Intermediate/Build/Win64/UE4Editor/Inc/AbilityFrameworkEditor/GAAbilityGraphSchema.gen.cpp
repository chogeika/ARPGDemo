// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFrameworkEditor/Public/AbilityEditor/GAAbilityGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityGraphSchema() {}
// Cross Module References
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAAbilityGraphSchema_NoRegister();
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAAbilityGraphSchema();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AbilityFrameworkEditor();
// End Cross Module References
	void UGAAbilityGraphSchema::StaticRegisterNativesUGAAbilityGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UGAAbilityGraphSchema_NoRegister()
	{
		return UGAAbilityGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFrameworkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityEditor/GAAbilityGraphSchema.h" },
		{ "ModuleRelativePath", "Public/AbilityEditor/GAAbilityGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityGraphSchema_Statics::ClassParams = {
		&UGAAbilityGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityGraphSchema, 3387387251);
	template<> ABILITYFRAMEWORKEDITOR_API UClass* StaticClass<UGAAbilityGraphSchema>()
	{
		return UGAAbilityGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityGraphSchema(Z_Construct_UClass_UGAAbilityGraphSchema, &UGAAbilityGraphSchema::StaticClass, TEXT("/Script/AbilityFrameworkEditor"), TEXT("UGAAbilityGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
