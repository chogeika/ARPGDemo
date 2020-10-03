// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAction_ChopFirewood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAction_ChopFirewood() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_ChopFirewood_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_ChopFirewood();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USTestAction_ChopFirewood::StaticRegisterNativesUSTestAction_ChopFirewood()
	{
	}
	UClass* Z_Construct_UClass_USTestAction_ChopFirewood_NoRegister()
	{
		return USTestAction_ChopFirewood::StaticClass();
	}
	struct Z_Construct_UClass_USTestAction_ChopFirewood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTestAction_ChopFirewood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpectrAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_ChopFirewood_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "STestAction_ChopFirewood.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/STestAction_ChopFirewood.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "STestAction_ChopFirewood" },
		{ "ModuleRelativePath", "Public/STestAction_ChopFirewood.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTestAction_ChopFirewood, MinDistance), METADATA_PARAMS(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_MinDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_TargetTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/STestAction_ChopFirewood.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_TargetTree = { "TargetTree", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTestAction_ChopFirewood, TargetTree), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_TargetTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_TargetTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTestAction_ChopFirewood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTestAction_ChopFirewood_Statics::NewProp_TargetTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTestAction_ChopFirewood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTestAction_ChopFirewood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTestAction_ChopFirewood_Statics::ClassParams = {
		&USTestAction_ChopFirewood::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTestAction_ChopFirewood_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USTestAction_ChopFirewood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTestAction_ChopFirewood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTestAction_ChopFirewood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTestAction_ChopFirewood, 2117133918);
	template<> SPECTRAITEST_API UClass* StaticClass<USTestAction_ChopFirewood>()
	{
		return USTestAction_ChopFirewood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTestAction_ChopFirewood(Z_Construct_UClass_USTestAction_ChopFirewood, &USTestAction_ChopFirewood::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("USTestAction_ChopFirewood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTestAction_ChopFirewood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
