// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFrameworkEditor/Public/EffectEditor/GAEffectGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectGraph() {}
// Cross Module References
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEffectGraph_NoRegister();
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEffectGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AbilityFrameworkEditor();
// End Cross Module References
	void UGAEffectGraph::StaticRegisterNativesUGAEffectGraph()
	{
	}
	UClass* Z_Construct_UClass_UGAEffectGraph_NoRegister()
	{
		return UGAEffectGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFrameworkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffectEditor/GAEffectGraph.h" },
		{ "ModuleRelativePath", "Public/EffectEditor/GAEffectGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectGraph_Statics::ClassParams = {
		&UGAEffectGraph::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectGraph, 1953276899);
	template<> ABILITYFRAMEWORKEDITOR_API UClass* StaticClass<UGAEffectGraph>()
	{
		return UGAEffectGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectGraph(Z_Construct_UClass_UGAEffectGraph, &UGAEffectGraph::StaticClass, TEXT("/Script/AbilityFrameworkEditor"), TEXT("UGAEffectGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
