// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AnimNotify/AFAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAnimNotify() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAnimNotify_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UAFAnimNotify::StaticRegisterNativesUAFAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UAFAnimNotify_NoRegister()
	{
		return UAFAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UAFAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Ability Notify" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AFAnimNotify.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAnimNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AFAnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAnimNotify, Name), METADATA_PARAMS(Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "AFAnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAnimNotify, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAnimNotify_Statics::NewProp_Tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAnimNotify_Statics::ClassParams = {
		&UAFAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFAnimNotify_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAFAnimNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFAnimNotify_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAnimNotify, 2906617655);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAnimNotify>()
	{
		return UAFAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAnimNotify(Z_Construct_UClass_UAFAnimNotify, &UAFAnimNotify::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
