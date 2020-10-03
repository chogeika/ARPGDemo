// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/GAHelperTemplates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAHelperTemplates() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeCapture();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeSource();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeSource();
// End Cross Module References
class UScriptStruct* FGAAttributeCapture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAAttributeCapture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAAttributeCapture, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAAttributeCapture"), sizeof(FGAAttributeCapture), Get_Z_Construct_UScriptStruct_FGAAttributeCapture_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAAttributeCapture>()
{
	return FGAAttributeCapture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAAttributeCapture(FGAAttributeCapture::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAAttributeCapture"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeCapture
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeCapture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAAttributeCapture")),new UScriptStruct::TCppStructOps<FGAAttributeCapture>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeCapture;
	struct Z_Construct_UScriptStruct_FGAAttributeCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DenyTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DenyTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAAttributeCapture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_DenyTags_MetaData[] = {
		{ "Category", "GAAttributeCapture" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_DenyTags = { "DenyTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeCapture, DenyTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_DenyTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_DenyTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "Category", "GAAttributeCapture" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeCapture, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_RequiredTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_RequiredTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "GAAttributeCapture" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeCapture, Source), Z_Construct_UScriptStruct_FGAAttributeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_DenyTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_RequiredTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::NewProp_Source,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAAttributeCapture",
		sizeof(FGAAttributeCapture),
		alignof(FGAAttributeCapture),
		Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeCapture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAAttributeCapture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAAttributeCapture"), sizeof(FGAAttributeCapture), Get_Z_Construct_UScriptStruct_FGAAttributeCapture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAAttributeCapture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAAttributeCapture_Hash() { return 2013875950U; }
class UScriptStruct* FGAAttributeSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAAttributeSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAAttributeSource, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAAttributeSource"), sizeof(FGAAttributeSource), Get_Z_Construct_UScriptStruct_FGAAttributeSource_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAAttributeSource>()
{
	return FGAAttributeSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAAttributeSource(FGAAttributeSource::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAAttributeSource"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeSource
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAAttributeSource")),new UScriptStruct::TCppStructOps<FGAAttributeSource>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeSource;
	struct Z_Construct_UScriptStruct_FGAAttributeSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAAttributeSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_AttributeSource_MetaData[] = {
		{ "Category", "GAAttributeSource" },
		{ "Comment", "/* Class which is source for attribute set. *///, meta = (MustImplement = \"IGAAbilities\"))\n" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
		{ "ToolTip", "Class which is source for attribute set. //, meta = (MustImplement = \"IGAAbilities\"))" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_AttributeSource = { "AttributeSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeSource, AttributeSource), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_AttributeSource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_AttributeSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "GAAttributeSource" },
		{ "ModuleRelativePath", "Public/GAHelperTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeSource, Source), Z_Construct_UEnum_AbilityFramework_EGAAttributeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAAttributeSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_AttributeSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeSource_Statics::NewProp_Source_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAAttributeSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAAttributeSource",
		sizeof(FGAAttributeSource),
		alignof(FGAAttributeSource),
		Z_Construct_UScriptStruct_FGAAttributeSource_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAAttributeSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAAttributeSource"), sizeof(FGAAttributeSource), Get_Z_Construct_UScriptStruct_FGAAttributeSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAAttributeSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAAttributeSource_Hash() { return 1019572538U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
