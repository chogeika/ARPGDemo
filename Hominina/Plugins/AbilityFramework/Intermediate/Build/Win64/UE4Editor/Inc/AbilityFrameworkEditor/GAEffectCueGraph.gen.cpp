// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFrameworkEditor/Public/EffectCueEditor/GAEffectCueGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectCueGraph() {}
// Cross Module References
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEffectCueGraph_NoRegister();
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEffectCueGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AbilityFrameworkEditor();
// End Cross Module References
	void UGAEffectCueGraph::StaticRegisterNativesUGAEffectCueGraph()
	{
	}
	UClass* Z_Construct_UClass_UGAEffectCueGraph_NoRegister()
	{
		return UGAEffectCueGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectCueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectCueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFrameworkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectCueGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffectCueEditor/GAEffectCueGraph.h" },
		{ "ModuleRelativePath", "Public/EffectCueEditor/GAEffectCueGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectCueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectCueGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectCueGraph_Statics::ClassParams = {
		&UGAEffectCueGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectCueGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectCueGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectCueGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectCueGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectCueGraph, 3556795698);
	template<> ABILITYFRAMEWORKEDITOR_API UClass* StaticClass<UGAEffectCueGraph>()
	{
		return UGAEffectCueGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectCueGraph(Z_Construct_UClass_UGAEffectCueGraph, &UGAEffectCueGraph::StaticClass, TEXT("/Script/AbilityFrameworkEditor"), TEXT("UGAEffectCueGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectCueGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
