// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFCueActorBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFCueActorBlueprint() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueActorBlueprint_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueActorBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectCueSequence_NoRegister();
// End Cross Module References
	void UAFCueActorBlueprint::StaticRegisterNativesUAFCueActorBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UAFCueActorBlueprint_NoRegister()
	{
		return UAFCueActorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAFCueActorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFCueActorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueActorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Game Effect Blueprint\n */" },
		{ "IncludePath", "Effects/AFCueActorBlueprint.h" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActorBlueprint.h" },
		{ "ToolTip", "Game Effect Blueprint" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueActorBlueprint_Statics::NewProp_Animation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFCueActorBlueprint_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFCueActorBlueprint, Animation), Z_Construct_UClass_UGAEffectCueSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFCueActorBlueprint_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFCueActorBlueprint_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFCueActorBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFCueActorBlueprint_Statics::NewProp_Animation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFCueActorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFCueActorBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFCueActorBlueprint_Statics::ClassParams = {
		&UAFCueActorBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFCueActorBlueprint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAFCueActorBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAFCueActorBlueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFCueActorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFCueActorBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFCueActorBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFCueActorBlueprint, 4266116293);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFCueActorBlueprint>()
	{
		return UAFCueActorBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFCueActorBlueprint(Z_Construct_UClass_UAFCueActorBlueprint, &UAFCueActorBlueprint::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFCueActorBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFCueActorBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
