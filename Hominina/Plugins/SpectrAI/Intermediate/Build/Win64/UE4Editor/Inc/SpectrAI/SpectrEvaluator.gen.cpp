// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrEvaluator() {}
// Cross Module References
	SPECTRAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpectrEvaluator();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
	SPECTRAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpectrQualifier();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrConsideration_NoRegister();
// End Cross Module References
class UScriptStruct* FSpectrEvaluator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPECTRAI_API uint32 Get_Z_Construct_UScriptStruct_FSpectrEvaluator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpectrEvaluator, Z_Construct_UPackage__Script_SpectrAI(), TEXT("SpectrEvaluator"), sizeof(FSpectrEvaluator), Get_Z_Construct_UScriptStruct_FSpectrEvaluator_Hash());
	}
	return Singleton;
}
template<> SPECTRAI_API UScriptStruct* StaticStruct<FSpectrEvaluator>()
{
	return FSpectrEvaluator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpectrEvaluator(FSpectrEvaluator::StaticStruct, TEXT("/Script/SpectrAI"), TEXT("SpectrEvaluator"), false, nullptr, nullptr);
static struct FScriptStruct_SpectrAI_StaticRegisterNativesFSpectrEvaluator
{
	FScriptStruct_SpectrAI_StaticRegisterNativesFSpectrEvaluator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpectrEvaluator")),new UScriptStruct::TCppStructOps<FSpectrEvaluator>);
	}
} ScriptStruct_SpectrAI_StaticRegisterNativesFSpectrEvaluator;
	struct Z_Construct_UScriptStruct_FSpectrEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Qualifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Qualifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpectrEvaluator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpectrEvaluator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::NewProp_Qualifier_MetaData[] = {
		{ "Category", "SpectrEvaluator" },
		{ "ModuleRelativePath", "Public/SpectrEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::NewProp_Qualifier = { "Qualifier", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpectrEvaluator, Qualifier), Z_Construct_UScriptStruct_FSpectrQualifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::NewProp_Qualifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::NewProp_Qualifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::NewProp_Qualifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
		nullptr,
		&NewStructOps,
		"SpectrEvaluator",
		sizeof(FSpectrEvaluator),
		alignof(FSpectrEvaluator),
		Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpectrEvaluator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpectrEvaluator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpectrAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpectrEvaluator"), sizeof(FSpectrEvaluator), Get_Z_Construct_UScriptStruct_FSpectrEvaluator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpectrEvaluator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpectrEvaluator_Hash() { return 525232731U; }
class UScriptStruct* FSpectrQualifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPECTRAI_API uint32 Get_Z_Construct_UScriptStruct_FSpectrQualifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpectrQualifier, Z_Construct_UPackage__Script_SpectrAI(), TEXT("SpectrQualifier"), sizeof(FSpectrQualifier), Get_Z_Construct_UScriptStruct_FSpectrQualifier_Hash());
	}
	return Singleton;
}
template<> SPECTRAI_API UScriptStruct* StaticStruct<FSpectrQualifier>()
{
	return FSpectrQualifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpectrQualifier(FSpectrQualifier::StaticStruct, TEXT("/Script/SpectrAI"), TEXT("SpectrQualifier"), false, nullptr, nullptr);
static struct FScriptStruct_SpectrAI_StaticRegisterNativesFSpectrQualifier
{
	FScriptStruct_SpectrAI_StaticRegisterNativesFSpectrQualifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpectrQualifier")),new UScriptStruct::TCppStructOps<FSpectrQualifier>);
	}
} ScriptStruct_SpectrAI_StaticRegisterNativesFSpectrQualifier;
	struct Z_Construct_UScriptStruct_FSpectrQualifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Considerations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Considerations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Considerations_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Considerations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectrQualifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct SPECTRAI_API FSpectrConsideration\n//{\n//\x09GENERATED_BODY()\n//public:\n//\x09virtual float Score() const { return 0; }\n//\x09virtual ~FSpectrConsideration()\n//\x09{}\n//};\n" },
		{ "ModuleRelativePath", "Public/SpectrEvaluator.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct SPECTRAI_API FSpectrConsideration\n{\n       GENERATED_BODY()\npublic:\n       virtual float Score() const { return 0; }\n       virtual ~FSpectrConsideration()\n       {}\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpectrQualifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_MetaData[] = {
		{ "Category", "SpectrQualifier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations = { "Considerations", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpectrQualifier, Considerations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_Inner_MetaData[] = {
		{ "Category", "SpectrQualifier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_Inner = { "Considerations", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrConsideration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_Inner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpectrQualifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectrQualifier_Statics::NewProp_Considerations_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpectrQualifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
		nullptr,
		&NewStructOps,
		"SpectrQualifier",
		sizeof(FSpectrQualifier),
		alignof(FSpectrQualifier),
		Z_Construct_UScriptStruct_FSpectrQualifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrQualifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpectrQualifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpectrQualifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpectrAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpectrQualifier"), sizeof(FSpectrQualifier), Get_Z_Construct_UScriptStruct_FSpectrQualifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpectrQualifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpectrQualifier_Hash() { return 4111606187U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
