// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestBranch() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestBranch_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestBranch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void ASTestBranch::StaticRegisterNativesASTestBranch()
	{
	}
	UClass* Z_Construct_UClass_ASTestBranch_NoRegister()
	{
		return ASTestBranch::StaticClass();
	}
	struct Z_Construct_UClass_ASTestBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTestBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTestBranch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STestBranch.h" },
		{ "ModuleRelativePath", "Public/STestBranch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTestBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTestBranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTestBranch_Statics::ClassParams = {
		&ASTestBranch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASTestBranch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTestBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTestBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTestBranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTestBranch, 30046133);
	template<> SPECTRAITEST_API UClass* StaticClass<ASTestBranch>()
	{
		return ASTestBranch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTestBranch(Z_Construct_UClass_ASTestBranch, &ASTestBranch::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("ASTestBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTestBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
