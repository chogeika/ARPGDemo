// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectBlueprint() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectBlueprint_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UGAEffectBlueprint::StaticRegisterNativesUGAEffectBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UGAEffectBlueprint_NoRegister()
	{
		return UGAEffectBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Game Effect Blueprint\n */" },
		{ "IncludePath", "Effects/GAEffectBlueprint.h" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectBlueprint.h" },
		{ "ToolTip", "Game Effect Blueprint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectBlueprint_Statics::ClassParams = {
		&UGAEffectBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectBlueprint, 4047146430);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAEffectBlueprint>()
	{
		return UGAEffectBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectBlueprint(Z_Construct_UClass_UGAEffectBlueprint, &UGAEffectBlueprint::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAEffectBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
