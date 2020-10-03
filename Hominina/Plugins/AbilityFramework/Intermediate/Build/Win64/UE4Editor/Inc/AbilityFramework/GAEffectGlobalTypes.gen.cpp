// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectGlobalTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectGlobalTypes() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACustomCalculationModifier();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGACustomCalculation_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACurveBasedModifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeSource();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeBasedModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGADirectModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFFunctionModifier();
// End Cross Module References
class UScriptStruct* FGACustomCalculationModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGACustomCalculationModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGACustomCalculationModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GACustomCalculationModifier"), sizeof(FGACustomCalculationModifier), Get_Z_Construct_UScriptStruct_FGACustomCalculationModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGACustomCalculationModifier>()
{
	return FGACustomCalculationModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGACustomCalculationModifier(FGACustomCalculationModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GACustomCalculationModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGACustomCalculationModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGACustomCalculationModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GACustomCalculationModifier")),new UScriptStruct::TCppStructOps<FGACustomCalculationModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGACustomCalculationModifier;
	struct Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCalculation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCalculation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//EGAMagnitudeCalculation::CustomCalculation\n" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "EGAMagnitudeCalculation::CustomCalculation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGACustomCalculationModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::NewProp_CustomCalculation_MetaData[] = {
		{ "Category", "GACustomCalculationModifier" },
		{ "Comment", "/*\n\x09Instanced, so we can setup custom properties this class might provide, per effect spec.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Instanced, so we can setup custom properties this class might provide, per effect spec." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::NewProp_CustomCalculation = { "CustomCalculation", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGACustomCalculationModifier, CustomCalculation), Z_Construct_UClass_UGACustomCalculation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::NewProp_CustomCalculation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::NewProp_CustomCalculation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::NewProp_CustomCalculation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GACustomCalculationModifier",
		sizeof(FGACustomCalculationModifier),
		alignof(FGACustomCalculationModifier),
		Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGACustomCalculationModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGACustomCalculationModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GACustomCalculationModifier"), sizeof(FGACustomCalculationModifier), Get_Z_Construct_UScriptStruct_FGACustomCalculationModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGACustomCalculationModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGACustomCalculationModifier_Hash() { return 4116673490U; }
class UScriptStruct* FGACurveBasedModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGACurveBasedModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGACurveBasedModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GACurveBasedModifier"), sizeof(FGACurveBasedModifier), Get_Z_Construct_UScriptStruct_FGACurveBasedModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGACurveBasedModifier>()
{
	return FGACurveBasedModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGACurveBasedModifier(FGACurveBasedModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GACurveBasedModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGACurveBasedModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGACurveBasedModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GACurveBasedModifier")),new UScriptStruct::TCppStructOps<FGACurveBasedModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGACurveBasedModifier;
	struct Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//EGAMagnitudeCalculation::CurveBased\n" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "EGAMagnitudeCalculation::CurveBased" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGACurveBasedModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_CurveTable_MetaData[] = {
		{ "Category", "GACurveBasedModifier" },
		{ "Comment", "/*\n\x09""Curve and row from which we will take YValue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Curve and row from which we will take YValue." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_CurveTable = { "CurveTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGACurveBasedModifier, CurveTable), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_CurveTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_CurveTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "GACurveBasedModifier" },
		{ "Comment", "/*\n\x09Name of attribute from which we will take XValue for Curve\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Name of attribute from which we will take XValue for Curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGACurveBasedModifier, Attribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "GACurveBasedModifier" },
		{ "Comment", "/*\n\x09Source of Attribute for this calculation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Source of Attribute for this calculation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGACurveBasedModifier, Source), Z_Construct_UEnum_AbilityFramework_EGAAttributeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_CurveTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::NewProp_Source_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GACurveBasedModifier",
		sizeof(FGACurveBasedModifier),
		alignof(FGACurveBasedModifier),
		Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGACurveBasedModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGACurveBasedModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GACurveBasedModifier"), sizeof(FGACurveBasedModifier), Get_Z_Construct_UScriptStruct_FGACurveBasedModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGACurveBasedModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGACurveBasedModifier_Hash() { return 3733133369U; }
class UScriptStruct* FGAAttributeBasedModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAAttributeBasedModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAAttributeBasedModifier"), sizeof(FGAAttributeBasedModifier), Get_Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAAttributeBasedModifier>()
{
	return FGAAttributeBasedModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAAttributeBasedModifier(FGAAttributeBasedModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAAttributeBasedModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeBasedModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeBasedModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAAttributeBasedModifier")),new UScriptStruct::TCppStructOps<FGAAttributeBasedModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeBasedModifier;
	struct Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondarySource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondarySource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondarySource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSecondaryAttribute_MetaData[];
#endif
		static void NewProp_bUseSecondaryAttribute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSecondaryAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostMultiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreMultiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//EGAMagnitudeCalculation::AttributeBased\n" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "EGAMagnitudeCalculation::AttributeBased" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAAttributeBasedModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondaryAttribute_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "Comment", "/*\n\x09Name of secondary attribute used in calculation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Name of secondary attribute used in calculation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondaryAttribute = { "SecondaryAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, SecondaryAttribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondaryAttribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondaryAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "Comment", "/*\n\x09Source for secondary attribute\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Source for secondary attribute" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource = { "SecondarySource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, SecondarySource), Z_Construct_UEnum_AbilityFramework_EGAAttributeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "Comment", "/*\n\x09Should we use secondary attribute for this ecalculation ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Should we use secondary attribute for this ecalculation ?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute_SetBit(void* Obj)
	{
		((FGAAttributeBasedModifier*)Obj)->bUseSecondaryAttribute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute = { "bUseSecondaryAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGAAttributeBasedModifier), &Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostCoefficient_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "FixedIncrement", "0.01" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostCoefficient = { "PostCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, PostCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostMultiply_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "FixedIncrement", "0.01" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostMultiply = { "PostMultiply", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, PostMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostMultiply_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostMultiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PreMultiply_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "FixedIncrement", "0.01" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PreMultiply = { "PreMultiply", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, PreMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PreMultiply_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PreMultiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Coefficient_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "FixedIncrement", "0.01" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, Coefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Coefficient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Coefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "Comment", "/*\n\x09Name of attribute Used for calculation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Name of attribute Used for calculation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, Attribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "GAAttributeBasedModifier" },
		{ "Comment", "/*\n\x09Source of Attribute for this calculation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Source of Attribute for this calculation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeBasedModifier, Source), Z_Construct_UEnum_AbilityFramework_EGAAttributeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondaryAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_SecondarySource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_bUseSecondaryAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PostMultiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_PreMultiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Coefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::NewProp_Source_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAAttributeBasedModifier",
		sizeof(FGAAttributeBasedModifier),
		alignof(FGAAttributeBasedModifier),
		Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeBasedModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAAttributeBasedModifier"), sizeof(FGAAttributeBasedModifier), Get_Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAAttributeBasedModifier_Hash() { return 1185287224U; }
class UScriptStruct* FGADirectModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGADirectModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGADirectModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GADirectModifier"), sizeof(FGADirectModifier), Get_Z_Construct_UScriptStruct_FGADirectModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGADirectModifier>()
{
	return FGADirectModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGADirectModifier(FGADirectModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GADirectModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGADirectModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGADirectModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GADirectModifier")),new UScriptStruct::TCppStructOps<FGADirectModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGADirectModifier;
	struct Z_Construct_UScriptStruct_FGADirectModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGADirectModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nBase concept behind those attributes calculations (not sure if these are any good solutions\n/performance firendly but:\n1. Prefer getting values directly of attributes (GetBaseValue(), GetFinalValue(), GetBonus() etc),\nas attributes can track their own state, we don't need any sophisticated way to access them and calculate bonuses).\n2. Prefer simple and direct formulas (either evaluate from CurveTable, just plain add, Multiply various numbers,\nor get value directly).\n3. This system is not inteded, to calculate absolute final value on effect, before that effect is applied.\nIt will calculate absolute maximum value from the informations it have access to.\nFurther modifications like increasing specific damage type value, or reducing damage by value, are done\non AttributeComponent, by implementing approperiate functions, or by existing effects, which happen to intercept\nincoming effect.\nThis might change in future though. But even if, I still prefer the magnitude calculations to be simple,\nand we will add needed buffs/debuffs as we progress trough execution chain.\n4. All calculations are linear.\n*///EGAMagnitudeCalculation::Direct\n" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
		{ "ToolTip", "Base concept behind those attributes calculations (not sure if these are any good solutions\n/performance firendly but:\n1. Prefer getting values directly of attributes (GetBaseValue(), GetFinalValue(), GetBonus() etc),\nas attributes can track their own state, we don't need any sophisticated way to access them and calculate bonuses).\n2. Prefer simple and direct formulas (either evaluate from CurveTable, just plain add, Multiply various numbers,\nor get value directly).\n3. This system is not inteded, to calculate absolute final value on effect, before that effect is applied.\nIt will calculate absolute maximum value from the informations it have access to.\nFurther modifications like increasing specific damage type value, or reducing damage by value, are done\non AttributeComponent, by implementing approperiate functions, or by existing effects, which happen to intercept\nincoming effect.\nThis might change in future though. But even if, I still prefer the magnitude calculations to be simple,\nand we will add needed buffs/debuffs as we progress trough execution chain.\n4. All calculations are linear.\n//EGAMagnitudeCalculation::Direct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGADirectModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGADirectModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGADirectModifier_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "GADirectModifier" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGADirectModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGADirectModifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGADirectModifier_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGADirectModifier_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGADirectModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGADirectModifier_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGADirectModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GADirectModifier",
		sizeof(FGADirectModifier),
		alignof(FGADirectModifier),
		Z_Construct_UScriptStruct_FGADirectModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGADirectModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGADirectModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGADirectModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGADirectModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGADirectModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GADirectModifier"), sizeof(FGADirectModifier), Get_Z_Construct_UScriptStruct_FGADirectModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGADirectModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGADirectModifier_Hash() { return 119112690U; }
class UScriptStruct* FAFFunctionModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFFunctionModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFFunctionModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFFunctionModifier"), sizeof(FAFFunctionModifier), Get_Z_Construct_UScriptStruct_FAFFunctionModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFFunctionModifier>()
{
	return FAFFunctionModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFFunctionModifier(FAFFunctionModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFFunctionModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFFunctionModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFFunctionModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFFunctionModifier")),new UScriptStruct::TCppStructOps<FAFFunctionModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFFunctionModifier;
	struct Z_Construct_UScriptStruct_FAFFunctionModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Divide_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Divide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtract_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Subtract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Additive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFFunctionModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Divide_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Divide = { "Divide", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFFunctionModifier, Divide), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Divide_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Divide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Multiply_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFFunctionModifier, Multiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Multiply_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Multiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Subtract_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Subtract = { "Subtract", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFFunctionModifier, Subtract), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Subtract_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Subtract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Additive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFFunctionModifier, Additive), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Additive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Additive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Divide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Subtract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::NewProp_Additive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFFunctionModifier",
		sizeof(FAFFunctionModifier),
		alignof(FAFFunctionModifier),
		Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFFunctionModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFFunctionModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFFunctionModifier"), sizeof(FAFFunctionModifier), Get_Z_Construct_UScriptStruct_FAFFunctionModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFFunctionModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFFunctionModifier_Hash() { return 2534103151U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
