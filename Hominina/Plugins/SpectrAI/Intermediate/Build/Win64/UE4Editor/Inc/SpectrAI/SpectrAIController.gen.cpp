// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrAIController() {}
// Cross Module References
	SPECTRAI_API UClass* Z_Construct_UClass_ASpectrAIController_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_ASpectrAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrBrainComponent_NoRegister();
// End Cross Module References
	void ASpectrAIController::StaticRegisterNativesASpectrAIController()
	{
	}
	UClass* Z_Construct_UClass_ASpectrAIController_NoRegister()
	{
		return ASpectrAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASpectrAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectrBrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectrBrain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpectrAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectrAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpectrAIController.h" },
		{ "ModuleRelativePath", "Public/SpectrAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectrAIController_Statics::NewProp_AIPerception_MetaData[] = {
		{ "Category", "SpectrAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpectrAIController_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpectrAIController, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpectrAIController_Statics::NewProp_AIPerception_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpectrAIController_Statics::NewProp_AIPerception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectrAIController_Statics::NewProp_SpectrBrain_MetaData[] = {
		{ "Category", "SpectrAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpectrAIController_Statics::NewProp_SpectrBrain = { "SpectrBrain", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpectrAIController, SpectrBrain), Z_Construct_UClass_USpectrBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpectrAIController_Statics::NewProp_SpectrBrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpectrAIController_Statics::NewProp_SpectrBrain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpectrAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectrAIController_Statics::NewProp_AIPerception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectrAIController_Statics::NewProp_SpectrBrain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpectrAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpectrAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpectrAIController_Statics::ClassParams = {
		&ASpectrAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpectrAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASpectrAIController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpectrAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpectrAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpectrAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpectrAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpectrAIController, 2904041138);
	template<> SPECTRAI_API UClass* StaticClass<ASpectrAIController>()
	{
		return ASpectrAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpectrAIController(Z_Construct_UClass_ASpectrAIController, &ASpectrAIController::StaticClass, TEXT("/Script/SpectrAI"), TEXT("ASpectrAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpectrAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
