// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAIControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAIControllerBase() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestAIControllerBase_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestAIControllerBase();
	SPECTRAI_API UClass* Z_Construct_UClass_ASpectrAIController();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void ASTestAIControllerBase::StaticRegisterNativesASTestAIControllerBase()
	{
	}
	UClass* Z_Construct_UClass_ASTestAIControllerBase_NoRegister()
	{
		return ASTestAIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ASTestAIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTestAIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectrAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTestAIControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "STestAIControllerBase.h" },
		{ "ModuleRelativePath", "Public/STestAIControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTestAIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTestAIControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTestAIControllerBase_Statics::ClassParams = {
		&ASTestAIControllerBase::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASTestAIControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTestAIControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTestAIControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTestAIControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTestAIControllerBase, 2084844146);
	template<> SPECTRAITEST_API UClass* StaticClass<ASTestAIControllerBase>()
	{
		return ASTestAIControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTestAIControllerBase(Z_Construct_UClass_ASTestAIControllerBase, &ASTestAIControllerBase::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("ASTestAIControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTestAIControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
