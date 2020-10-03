// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectExecution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectExecution() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExecution_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExecution();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UGAEffectExecution::StaticRegisterNativesUGAEffectExecution()
	{
	}
	UClass* Z_Construct_UClass_UGAEffectExecution_NoRegister()
	{
		return UGAEffectExecution::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExecution_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\n*/" },
		{ "IncludePath", "Effects/GAEffectExecution.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExecution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectExecution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectExecution_Statics::ClassParams = {
		&UGAEffectExecution::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectExecution_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectExecution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectExecution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectExecution, 985314892);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAEffectExecution>()
	{
		return UGAEffectExecution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectExecution(Z_Construct_UClass_UGAEffectExecution, &UGAEffectExecution::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAEffectExecution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectExecution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
