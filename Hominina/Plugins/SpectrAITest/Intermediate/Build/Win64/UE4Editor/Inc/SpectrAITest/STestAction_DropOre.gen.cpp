// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAction_DropOre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAction_DropOre() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_DropOre_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_DropOre();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void USTestAction_DropOre::StaticRegisterNativesUSTestAction_DropOre()
	{
	}
	UClass* Z_Construct_UClass_USTestAction_DropOre_NoRegister()
	{
		return USTestAction_DropOre::StaticClass();
	}
	struct Z_Construct_UClass_USTestAction_DropOre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTestAction_DropOre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpectrAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_DropOre_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "STestAction_DropOre.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/STestAction_DropOre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTestAction_DropOre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTestAction_DropOre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTestAction_DropOre_Statics::ClassParams = {
		&USTestAction_DropOre::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USTestAction_DropOre_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USTestAction_DropOre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTestAction_DropOre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTestAction_DropOre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTestAction_DropOre, 4246556423);
	template<> SPECTRAITEST_API UClass* StaticClass<USTestAction_DropOre>()
	{
		return USTestAction_DropOre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTestAction_DropOre(Z_Construct_UClass_USTestAction_DropOre, &USTestAction_DropOre::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("USTestAction_DropOre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTestAction_DropOre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
