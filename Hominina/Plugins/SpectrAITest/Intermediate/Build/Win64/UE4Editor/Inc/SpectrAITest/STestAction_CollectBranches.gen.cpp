// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAction_CollectBranches.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAction_CollectBranches() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_CollectBranches_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_CollectBranches();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void USTestAction_CollectBranches::StaticRegisterNativesUSTestAction_CollectBranches()
	{
	}
	UClass* Z_Construct_UClass_USTestAction_CollectBranches_NoRegister()
	{
		return USTestAction_CollectBranches::StaticClass();
	}
	struct Z_Construct_UClass_USTestAction_CollectBranches_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTestAction_CollectBranches_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpectrAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_CollectBranches_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "STestAction_CollectBranches.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/STestAction_CollectBranches.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTestAction_CollectBranches_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTestAction_CollectBranches>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTestAction_CollectBranches_Statics::ClassParams = {
		&USTestAction_CollectBranches::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USTestAction_CollectBranches_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USTestAction_CollectBranches_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTestAction_CollectBranches()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTestAction_CollectBranches_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTestAction_CollectBranches, 1140202617);
	template<> SPECTRAITEST_API UClass* StaticClass<USTestAction_CollectBranches>()
	{
		return USTestAction_CollectBranches::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTestAction_CollectBranches(Z_Construct_UClass_USTestAction_CollectBranches, &USTestAction_CollectBranches::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("USTestAction_CollectBranches"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTestAction_CollectBranches);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
