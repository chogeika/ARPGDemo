// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Attributes/GAAttributeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAttributeBase() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAModifiedAttribute();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributeExtension_NoRegister();
// End Cross Module References
class UScriptStruct* FGAModifiedAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAModifiedAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAModifiedAttribute, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAModifiedAttribute"), sizeof(FGAModifiedAttribute), Get_Z_Construct_UScriptStruct_FGAModifiedAttribute_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAModifiedAttribute>()
{
	return FGAModifiedAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAModifiedAttribute(FGAModifiedAttribute::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAModifiedAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAModifiedAttribute
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAModifiedAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAModifiedAttribute")),new UScriptStruct::TCppStructOps<FGAModifiedAttribute>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAModifiedAttribute;
	struct Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedByValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifiedByValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ReplicationCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAModifiedAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Causer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, Causer), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Causer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Causer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_InstigatorLocation_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "//change to vector, we need only position.\n" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "change to vector, we need only position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_InstigatorLocation = { "InstigatorLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, InstigatorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_InstigatorLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_InstigatorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Final tags appiled by this change.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Final tags appiled by this change." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Tags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ModifiedByValue_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/**\n\x09*\x09""Final value by which we modified attribute.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Final value by which we modified attribute." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ModifiedByValue = { "ModifiedByValue", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, ModifiedByValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ModifiedByValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ModifiedByValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Attribute we have modified.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Attribute we have modified." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, Attribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ReplicationCounter_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Always increment it, to make sure it will replicate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Always increment it, to make sure it will replicate." },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ReplicationCounter = { "ReplicationCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifiedAttribute, ReplicationCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ReplicationCounter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ReplicationCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_InstigatorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ModifiedByValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::NewProp_ReplicationCounter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAModifiedAttribute",
		sizeof(FGAModifiedAttribute),
		alignof(FGAModifiedAttribute),
		Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAModifiedAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAModifiedAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAModifiedAttribute"), sizeof(FGAModifiedAttribute), Get_Z_Construct_UScriptStruct_FGAModifiedAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAModifiedAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAModifiedAttribute_Hash() { return 165241104U; }
class UScriptStruct* FAFAttributeBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAttributeBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAttributeBase, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAttributeBase"), sizeof(FAFAttributeBase), Get_Z_Construct_UScriptStruct_FAFAttributeBase_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAttributeBase>()
{
	return FAFAttributeBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAttributeBase(FAFAttributeBase::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAttributeBase"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeBase
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAttributeBase")),new UScriptStruct::TCppStructOps<FAFAttributeBase>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeBase;
	struct Z_Construct_UScriptStruct_FAFAttributeBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExtensionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBonusValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseBonusValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelfName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09""Base data structure describing Attribute:\n\x09""1. Base Value - the base value attribute has been initialized with.\n\x09""2. Current value - current value of attribute.\n\x09""3. Bonuses value.\n\x09""4. One bonus value (if need be attribute can take care of calculating it's own bonus value).\n\n\x09""As for now it's made to in mind to use it as meta attribute. Meta attributes, have always\n\x09""0 value and are used to change other attributes. Like Damage is used to subtract health.\n\x09LifeSteal is used to transfer health from target to instigator etc.\n\n\x09We could extend attributes, to also support tags, so their bonus can be recalculated,\n\x09""based on on tags requiremnts from effect asking for this particular attribute.\n*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Base data structure describing Attribute:\n1. Base Value - the base value attribute has been initialized with.\n2. Current value - current value of attribute.\n3. Bonuses value.\n4. One bonus value (if need be attribute can take care of calculating it's own bonus value).\n\nAs for now it's made to in mind to use it as meta attribute. Meta attributes, have always\n0 value and are used to change other attributes. Like Damage is used to subtract health.\nLifeSteal is used to transfer health from target to instigator etc.\n\nWe could extend attributes, to also support tags, so their bonus can be recalculated,\nbased on on tags requiremnts from effect asking for this particular attribute." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAttributeBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_ExtensionClass_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_ExtensionClass = { "ExtensionClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, ExtensionClass), Z_Construct_UClass_UGAAttributeExtension_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_ExtensionClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_ExtensionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, CurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_CurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BonusMaxValue_MetaData[] = {
		{ "Comment", "/*\n\x09\x09""Bonus to the MaxValue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Bonus to the MaxValue." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BonusMaxValue = { "BonusMaxValue", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, BonusMaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BonusMaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BonusMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "AFAttributeBase" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000001000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "AFAttributeBase" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000001000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseBonusValue_MetaData[] = {
		{ "Comment", "/*\n\x09\x09""Bonus Value applied to BaseValue of Attribute. It should never be directly modified outside of AbilityFramework.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
		{ "ToolTip", "Bonus Value applied to BaseValue of Attribute. It should never be directly modified outside of AbilityFramework." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseBonusValue = { "BaseBonusValue", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, BaseBonusValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseBonusValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseBonusValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseValue_MetaData[] = {
		{ "Category", "AFAttributeBase" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000001000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, BaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_SelfName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_SelfName = { "SelfName", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, SelfName), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_SelfName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_SelfName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_AbilityComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_AbilityComp = { "AbilityComp", nullptr, (EPropertyFlags)0x0010000080080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeBase, AbilityComp), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_AbilityComp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_AbilityComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAttributeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_ExtensionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BonusMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseBonusValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_BaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_SelfName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeBase_Statics::NewProp_AbilityComp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAttributeBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFAttributeBase",
		sizeof(FAFAttributeBase),
		alignof(FAFAttributeBase),
		Z_Construct_UScriptStruct_FAFAttributeBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAttributeBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAttributeBase"), sizeof(FAFAttributeBase), Get_Z_Construct_UScriptStruct_FAFAttributeBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAttributeBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAttributeBase_Hash() { return 2819867687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
