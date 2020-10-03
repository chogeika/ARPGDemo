// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Mods/GAAttributeMod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAttributeMod() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributeMod_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributeMod();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UGAAttributeMod::StaticRegisterNativesUGAAttributeMod()
	{
	}
	UClass* Z_Construct_UClass_UGAAttributeMod_NoRegister()
	{
		return UGAAttributeMod::StaticClass();
	}
	struct Z_Construct_UClass_UGAAttributeMod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAttributeMod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeMod_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09Using this class you can perform actions, when change to attribute is instigated.\n\x09Outcoming are modifiers appiled by instigator.\n\x09Incoming are modifiers appiled by target.\n\n\x09""Common applications are generic mods like damage reduction by armor or other attribute.\n\x09Increasing damage.\n\n\x09""Fireing other actions, when certain critera has been meet. \n\n\x09This system is actually similiar to Effects from GameEffectSystem module.\n\n\x09The main difference is that, attribute mods, cannot be appiled by other objects. You can add or remove\n\x09them on runtime, by providing set of classes, that can be added to component and the constructed.\n\n\x09""But you can't apply those mods by means like weapons or abilities.\n\x09They are always passive (as they are listening for events), they are always infinite\n\x09(their duration is for the entire lifetime of pawn/controller/game)\n\x09""and they can't affect other attribute mods. They can only affect attributes, and trigger actions\n\x09""based on them. This might include launching effects.\n\n\x09""As per usual using GameplayTags is recommened for defining behaviour.\n*/" },
		{ "IncludePath", "Mods/GAAttributeMod.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Mods/GAAttributeMod.h" },
		{ "ToolTip", "Using this class you can perform actions, when change to attribute is instigated.\nOutcoming are modifiers appiled by instigator.\nIncoming are modifiers appiled by target.\n\nCommon applications are generic mods like damage reduction by armor or other attribute.\nIncreasing damage.\n\nFireing other actions, when certain critera has been meet.\n\nThis system is actually similiar to Effects from GameEffectSystem module.\n\nThe main difference is that, attribute mods, cannot be appiled by other objects. You can add or remove\nthem on runtime, by providing set of classes, that can be added to component and the constructed.\n\nBut you can't apply those mods by means like weapons or abilities.\nThey are always passive (as they are listening for events), they are always infinite\n(their duration is for the entire lifetime of pawn/controller/game)\nand they can't affect other attribute mods. They can only affect attributes, and trigger actions\nbased on them. This might include launching effects.\n\nAs per usual using GameplayTags is recommened for defining behaviour." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAttributeMod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAttributeMod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAttributeMod_Statics::ClassParams = {
		&UGAAttributeMod::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAttributeMod_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAttributeMod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAttributeMod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAttributeMod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAttributeMod, 2697620266);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAttributeMod>()
	{
		return UGAAttributeMod::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAttributeMod(Z_Construct_UClass_UGAAttributeMod, &UGAAttributeMod::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAttributeMod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAttributeMod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
