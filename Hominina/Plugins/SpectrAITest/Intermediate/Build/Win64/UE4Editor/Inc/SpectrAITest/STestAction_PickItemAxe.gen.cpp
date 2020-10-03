// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAction_PickItemAxe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAction_PickItemAxe() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_PickItemAxe_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_USTestAction_PickItemAxe();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USTestAction_PickItemAxe::StaticRegisterNativesUSTestAction_PickItemAxe()
	{
	}
	UClass* Z_Construct_UClass_USTestAction_PickItemAxe_NoRegister()
	{
		return USTestAction_PickItemAxe::StaticClass();
	}
	struct Z_Construct_UClass_USTestAction_PickItemAxe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTestAction_PickItemAxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpectrAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_PickItemAxe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "STestAction_PickItemAxe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/STestAction_PickItemAxe.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_TargetItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/STestAction_PickItemAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_TargetItem = { "TargetItem", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTestAction_PickItemAxe, TargetItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_TargetItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_TargetItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "STestAction_PickItemAxe" },
		{ "Comment", "/* Minimum distance from item to pick it. */" },
		{ "ModuleRelativePath", "Public/STestAction_PickItemAxe.h" },
		{ "ToolTip", "Minimum distance from item to pick it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTestAction_PickItemAxe, MinDistance), METADATA_PARAMS(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_MinDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_MinDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTestAction_PickItemAxe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_TargetItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTestAction_PickItemAxe_Statics::NewProp_MinDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTestAction_PickItemAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTestAction_PickItemAxe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTestAction_PickItemAxe_Statics::ClassParams = {
		&USTestAction_PickItemAxe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTestAction_PickItemAxe_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USTestAction_PickItemAxe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTestAction_PickItemAxe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTestAction_PickItemAxe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTestAction_PickItemAxe, 2878493459);
	template<> SPECTRAITEST_API UClass* StaticClass<USTestAction_PickItemAxe>()
	{
		return USTestAction_PickItemAxe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTestAction_PickItemAxe(Z_Construct_UClass_USTestAction_PickItemAxe, &USTestAction_PickItemAxe::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("USTestAction_PickItemAxe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTestAction_PickItemAxe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
