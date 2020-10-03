// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAction_CollectOre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAction_CollectOre() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_CollectOre_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_CollectOre();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void USTestAction_CollectOre::StaticRegisterNativesUSTestAction_CollectOre()
	{
	}
	UClass* Z_Construct_UClass_USTestAction_CollectOre_NoRegister()
	{
		return USTestAction_CollectOre::StaticClass();
	}
	struct Z_Construct_UClass_USTestAction_CollectOre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTestAction_CollectOre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpectrAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_CollectOre_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "STestAction_CollectOre.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/STestAction_CollectOre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTestAction_CollectOre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTestAction_CollectOre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTestAction_CollectOre_Statics::ClassParams = {
		&USTestAction_CollectOre::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USTestAction_CollectOre_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USTestAction_CollectOre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTestAction_CollectOre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTestAction_CollectOre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTestAction_CollectOre, 182687710);
	template<> SPECTRAITEST_API UClass* StaticClass<USTestAction_CollectOre>()
	{
		return USTestAction_CollectOre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTestAction_CollectOre(Z_Construct_UClass_USTestAction_CollectOre, &USTestAction_CollectOre::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("USTestAction_CollectOre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTestAction_CollectOre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
