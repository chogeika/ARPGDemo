// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFrameworkEditor/Public/GAEK2Node_LatentAbilityTaskCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEK2Node_LatentAbilityTaskCall() {}
// Cross Module References
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_NoRegister();
	ABILITYFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	UPackage* Z_Construct_UPackage__Script_AbilityFrameworkEditor();
// End Cross Module References
	void UGAEK2Node_LatentAbilityTaskCall::StaticRegisterNativesUGAEK2Node_LatentAbilityTaskCall()
	{
	}
	UClass* Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_NoRegister()
	{
		return UGAEK2Node_LatentAbilityTaskCall::StaticClass();
	}
	struct Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFrameworkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAEK2Node_LatentAbilityTaskCall.h" },
		{ "ModuleRelativePath", "Public/GAEK2Node_LatentAbilityTaskCall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEK2Node_LatentAbilityTaskCall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::ClassParams = {
		&UGAEK2Node_LatentAbilityTaskCall::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEK2Node_LatentAbilityTaskCall, 60173478);
	template<> ABILITYFRAMEWORKEDITOR_API UClass* StaticClass<UGAEK2Node_LatentAbilityTaskCall>()
	{
		return UGAEK2Node_LatentAbilityTaskCall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEK2Node_LatentAbilityTaskCall(Z_Construct_UClass_UGAEK2Node_LatentAbilityTaskCall, &UGAEK2Node_LatentAbilityTaskCall::StaticClass, TEXT("/Script/AbilityFrameworkEditor"), TEXT("UGAEK2Node_LatentAbilityTaskCall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEK2Node_LatentAbilityTaskCall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
