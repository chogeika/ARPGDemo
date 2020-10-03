// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestTree() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestTree_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestTree();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void ASTestTree::StaticRegisterNativesASTestTree()
	{
	}
	UClass* Z_Construct_UClass_ASTestTree_NoRegister()
	{
		return ASTestTree::StaticClass();
	}
	struct Z_Construct_UClass_ASTestTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTestTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTestTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STestTree.h" },
		{ "ModuleRelativePath", "Public/STestTree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTestTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTestTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTestTree_Statics::ClassParams = {
		&ASTestTree::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASTestTree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTestTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTestTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTestTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTestTree, 1818963840);
	template<> SPECTRAITEST_API UClass* StaticClass<ASTestTree>()
	{
		return ASTestTree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTestTree(Z_Construct_UClass_ASTestTree, &ASTestTree::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("ASTestTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTestTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
