// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestForge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestForge() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestForge_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestForge();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void ASTestForge::StaticRegisterNativesASTestForge()
	{
	}
	UClass* Z_Construct_UClass_ASTestForge_NoRegister()
	{
		return ASTestForge::StaticClass();
	}
	struct Z_Construct_UClass_ASTestForge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTestForge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTestForge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STestForge.h" },
		{ "ModuleRelativePath", "Public/STestForge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTestForge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTestForge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTestForge_Statics::ClassParams = {
		&ASTestForge::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASTestForge_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTestForge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTestForge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTestForge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTestForge, 827964696);
	template<> SPECTRAITEST_API UClass* StaticClass<ASTestForge>()
	{
		return ASTestForge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTestForge(Z_Construct_UClass_ASTestForge, &ASTestForge::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("ASTestForge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTestForge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
