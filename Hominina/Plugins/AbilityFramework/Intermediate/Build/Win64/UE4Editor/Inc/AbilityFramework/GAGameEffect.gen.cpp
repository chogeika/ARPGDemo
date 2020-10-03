// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAGameEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAGameEffect() {}
// Cross Module References
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_ERepInfoType();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFExtensionType();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectContainerSimple();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffect();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPredictionHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGameCueContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAGameCue();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExtension_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectDuration();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectAttributeModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEventData();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPropertytHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpec();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContext();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectParams();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectClass();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpecHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFContextHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAGameEffectSpec_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFConditionalEffectContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFConditionalEffect();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFCueContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeModifierContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAMagnitude();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAModifierTarget();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeMod();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACustomCalculationModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACurveBasedModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeBasedModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGADirectModifier();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAGameEffectSpec();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExecution_NoRegister();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectCustomApplication_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectApplicationRequirement_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectSpecBase_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectSpecBase();
// End Cross Module References
	static UEnum* ERepInfoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_ERepInfoType, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("ERepInfoType"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<ERepInfoType>()
	{
		return ERepInfoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERepInfoType(ERepInfoType_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("ERepInfoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_ERepInfoType_Hash() { return 4057223507U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_ERepInfoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERepInfoType"), 0, Get_Z_Construct_UEnum_AbilityFramework_ERepInfoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERepInfoType::LocallyPredicted", (int64)ERepInfoType::LocallyPredicted },
				{ "ERepInfoType::RemotePredicted", (int64)ERepInfoType::RemotePredicted },
				{ "ERepInfoType::Server", (int64)ERepInfoType::Server },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LocallyPredicted.Name", "ERepInfoType::LocallyPredicted" },
				{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
				{ "RemotePredicted.Name", "ERepInfoType::RemotePredicted" },
				{ "Server.Name", "ERepInfoType::Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"ERepInfoType",
				"ERepInfoType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAFExtensionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFExtensionType, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFExtensionType"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFExtensionType>()
	{
		return EAFExtensionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFExtensionType(EAFExtensionType_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFExtensionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFExtensionType_Hash() { return 2893762919U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFExtensionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFExtensionType"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFExtensionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAFExtensionType::NonInstanced", (int64)EAFExtensionType::NonInstanced },
				{ "EAFExtensionType::Instanced", (int64)EAFExtensionType::Instanced },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Instanced.Name", "EAFExtensionType::Instanced" },
				{ "Instanced.ToolTip", "Effect Extension will be instanced per effect application, these can have state and Tasks" },
				{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
				{ "NonInstanced.Name", "EAFExtensionType::NonInstanced" },
				{ "NonInstanced.ToolTip", "Effect CDO will be used. Canno carry any state. You usually should use this if effect is instant or applied very often" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFExtensionType",
				"EAFExtensionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAFEffectContainerSimple::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFEffectContainerSimple_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFEffectContainerSimple, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFEffectContainerSimple"), sizeof(FAFEffectContainerSimple), Get_Z_Construct_UScriptStruct_FAFEffectContainerSimple_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFEffectContainerSimple>()
{
	return FAFEffectContainerSimple::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFEffectContainerSimple(FAFEffectContainerSimple::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFEffectContainerSimple"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectContainerSimple
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectContainerSimple()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFEffectContainerSimple")),new UScriptStruct::TCppStructOps<FAFEffectContainerSimple>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectContainerSimple;
	struct Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nSimplified effect container, which do not support effect replication.\n*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Simplified effect container, which do not support effect replication." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFEffectContainerSimple>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFEffectContainerSimple, Effects), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_Key_KeyProp = { "Effects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_ValueProp = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGAEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::NewProp_Effects_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFEffectContainerSimple",
		sizeof(FAFEffectContainerSimple),
		alignof(FAFEffectContainerSimple),
		Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFEffectContainerSimple()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFEffectContainerSimple_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFEffectContainerSimple"), sizeof(FAFEffectContainerSimple), Get_Z_Construct_UScriptStruct_FAFEffectContainerSimple_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFEffectContainerSimple_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFEffectContainerSimple_Hash() { return 2143711245U; }
class UScriptStruct* FGAEffectContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectContainer"), sizeof(FGAEffectContainer), Get_Z_Construct_UScriptStruct_FGAEffectContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectContainer>()
{
	return FGAEffectContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectContainer(FGAEffectContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectContainer")),new UScriptStruct::TCppStructOps<FGAEffectContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectContainer;
	struct Z_Construct_UScriptStruct_FGAEffectContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_InfiniteEffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfiniteEffects_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionByHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PredictionByHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionByHandle_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionByHandle_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleByPrediction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HandleByPrediction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandleByPrediction_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandleByPrediction_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveEffectInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveEffectInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "Comment", "//Conditonally applied effects. Only duration/periodic.\n//TMap<FGAEffectHandle, FAFPropertytHandle> ConditionalEffects;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Conditonally applied effects. Only duration/periodic.\nTMap<FGAEffectHandle, FAFPropertytHandle> ConditionalEffects;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0010000080080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContainer, OwningComponent), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_OwningComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_OwningComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects_MetaData[] = {
		{ "Comment", "/* \n\x09\x09""Contains effects with infinite duration.\n\x09\x09Infinite effects are considred to be special case, where they can only be self spplied\n\x09\x09""and must be manually removed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Contains effects with infinite duration.\nInfinite effects are considred to be special case, where they can only be self spplied\nand must be manually removed." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects = { "InfiniteEffects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContainer, InfiniteEffects), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects_ElementProp = { "InfiniteEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle = { "PredictionByHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContainer, PredictionByHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_Key_KeyProp = { "PredictionByHandle_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_ValueProp = { "PredictionByHandle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAFPredictionHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction = { "HandleByPrediction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContainer, HandleByPrediction), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_Key_KeyProp = { "HandleByPrediction_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAFPredictionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_ValueProp = { "HandleByPrediction", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos = { "ActiveEffectInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContainer, ActiveEffectInfos), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos_Inner = { "ActiveEffectInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_OwningComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_InfiniteEffects_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_PredictionByHandle_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_HandleByPrediction_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContainer_Statics::NewProp_ActiveEffectInfos_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"GAEffectContainer",
		sizeof(FGAEffectContainer),
		alignof(FGAEffectContainer),
		Z_Construct_UScriptStruct_FGAEffectContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectContainer"), sizeof(FGAEffectContainer), Get_Z_Construct_UScriptStruct_FGAEffectContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectContainer_Hash() { return 3631612488U; }
class UScriptStruct* FGameCueContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGameCueContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameCueContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GameCueContainer"), sizeof(FGameCueContainer), Get_Z_Construct_UScriptStruct_FGameCueContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGameCueContainer>()
{
	return FGameCueContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameCueContainer(FGameCueContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GameCueContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGameCueContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGameCueContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameCueContainer")),new UScriptStruct::TCppStructOps<FGameCueContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGameCueContainer;
	struct Z_Construct_UScriptStruct_FGameCueContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameCueContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameCueContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameCueContainer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameCueContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GameCueContainer",
		sizeof(FGameCueContainer),
		alignof(FGameCueContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameCueContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameCueContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameCueContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameCueContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameCueContainer"), sizeof(FGameCueContainer), Get_Z_Construct_UScriptStruct_FGameCueContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameCueContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameCueContainer_Hash() { return 2051990403U; }
class UScriptStruct* FGAGameCue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAGameCue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAGameCue, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAGameCue"), sizeof(FGAGameCue), Get_Z_Construct_UScriptStruct_FGAGameCue_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAGameCue>()
{
	return FGAGameCue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAGameCue(FGAGameCue::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAGameCue"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAGameCue
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAGameCue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAGameCue")),new UScriptStruct::TCppStructOps<FGAGameCue>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAGameCue;
	struct Z_Construct_UScriptStruct_FGAGameCue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAGameCue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAGameCue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAGameCue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAGameCue_Statics::NewProp_EffectHandle_MetaData[] = {
		{ "Comment", "//Handle to effect, which spawned this cue.\n" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Handle to effect, which spawned this cue." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAGameCue_Statics::NewProp_EffectHandle = { "EffectHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAGameCue, EffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAGameCue_Statics::NewProp_EffectHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAGameCue_Statics::NewProp_EffectHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAGameCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAGameCue_Statics::NewProp_EffectHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAGameCue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAGameCue",
		sizeof(FGAGameCue),
		alignof(FGAGameCue),
		Z_Construct_UScriptStruct_FGAGameCue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAGameCue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAGameCue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAGameCue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAGameCue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAGameCue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAGameCue"), sizeof(FGAGameCue), Get_Z_Construct_UScriptStruct_FGAGameCue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAGameCue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAGameCue_Hash() { return 3962559462U; }
class UScriptStruct* FGAInstigatorInstancedEffectContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAInstigatorInstancedEffectContainer"), sizeof(FGAInstigatorInstancedEffectContainer), Get_Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAInstigatorInstancedEffectContainer>()
{
	return FGAInstigatorInstancedEffectContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAInstigatorInstancedEffectContainer(FGAInstigatorInstancedEffectContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAInstigatorInstancedEffectContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAInstigatorInstancedEffectContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAInstigatorInstancedEffectContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAInstigatorInstancedEffectContainer")),new UScriptStruct::TCppStructOps<FGAInstigatorInstancedEffectContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAInstigatorInstancedEffectContainer;
	struct Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAInstigatorInstancedEffectContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAInstigatorInstancedEffectContainer, Effects), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGAEffectExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::NewProp_Effects_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAInstigatorInstancedEffectContainer",
		sizeof(FGAInstigatorInstancedEffectContainer),
		alignof(FGAInstigatorInstancedEffectContainer),
		Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAInstigatorInstancedEffectContainer"), sizeof(FGAInstigatorInstancedEffectContainer), Get_Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAInstigatorInstancedEffectContainer_Hash() { return 845571451U; }
class UScriptStruct* FGAEffectDuration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectDuration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectDuration, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectDuration"), sizeof(FGAEffectDuration), Get_Z_Construct_UScriptStruct_FGAEffectDuration_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectDuration>()
{
	return FGAEffectDuration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectDuration(FGAEffectDuration::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectDuration"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectDuration
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectDuration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectDuration")),new UScriptStruct::TCppStructOps<FGAEffectDuration>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectDuration;
	struct Z_Construct_UScriptStruct_FGAEffectDuration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeriodNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeriodNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectDuration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectDuration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_PeriodNum_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/*\n\x09If PeriodNum > 0 and Period > 0, then duration of\n\x09""effect is PeriodNum * Period\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "If PeriodNum > 0 and Period > 0, then duration of\neffect is PeriodNum * Period" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_PeriodNum = { "PeriodNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectDuration, PeriodNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_PeriodNum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_PeriodNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/*\n\x09<=0 - no period >0 - set period\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "<=0 - no period >0 - set period" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectDuration, Period), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/*\n\x09-1 infinite duration, 0-no duration >0 - set duration\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "-1 infinite duration, 0-no duration >0 - set duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectDuration, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_PeriodNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectDuration_Statics::NewProp_Duration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectDuration",
		sizeof(FGAEffectDuration),
		alignof(FGAEffectDuration),
		Z_Construct_UScriptStruct_FGAEffectDuration_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectDuration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectDuration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectDuration"), sizeof(FGAEffectDuration), Get_Z_Construct_UScriptStruct_FGAEffectDuration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectDuration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectDuration_Hash() { return 1883481973U; }
class UScriptStruct* FGAEffectAttributeModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectAttributeModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectAttributeModifier"), sizeof(FGAEffectAttributeModifier), Get_Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectAttributeModifier>()
{
	return FGAEffectAttributeModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectAttributeModifier(FGAEffectAttributeModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectAttributeModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectAttributeModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectAttributeModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectAttributeModifier")),new UScriptStruct::TCppStructOps<FGAEffectAttributeModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectAttributeModifier;
	struct Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09Minimum replicated info about applied info, so we don't replicate full effect if not needed.\n\x09""Also provide callbacks for cues assigned to this Effect, so they can be predictevly,\n\x09""executed on clients.\n\n\x09""Add replication optimization.\n*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Minimum replicated info about applied info, so we don't replicate full effect if not needed.\nAlso provide callbacks for cues assigned to this Effect, so they can be predictevly,\nexecuted on clients.\n\nAdd replication optimization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectAttributeModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "GAEffectAttributeModifier" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectAttributeModifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "GAEffectAttributeModifier" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectAttributeModifier, Attribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::NewProp_Attribute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectAttributeModifier",
		sizeof(FGAEffectAttributeModifier),
		alignof(FGAEffectAttributeModifier),
		Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectAttributeModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectAttributeModifier"), sizeof(FGAEffectAttributeModifier), Get_Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectAttributeModifier_Hash() { return 4133974450U; }
class UScriptStruct* FGAEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffect, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffect"), sizeof(FGAEffect), Get_Z_Construct_UScriptStruct_FGAEffect_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffect>()
{
	return FGAEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffect(FGAEffect::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffect"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffect
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffect")),new UScriptStruct::TCppStructOps<FGAEffect>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffect;
	struct Z_Construct_UScriptStruct_FGAEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//, TSharedFromThis<FGAEffect>\n" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", ", TSharedFromThis<FGAEffect>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffect_Statics::NewProp_PredictionHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffect_Statics::NewProp_PredictionHandle = { "PredictionHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffect, PredictionHandle), Z_Construct_UScriptStruct_FAFPredictionHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffect_Statics::NewProp_PredictionHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffect_Statics::NewProp_PredictionHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffect_Statics::NewProp_PredictionHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"GAEffect",
		sizeof(FGAEffect),
		alignof(FGAEffect),
		Z_Construct_UScriptStruct_FGAEffect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffect"), sizeof(FGAEffect), Get_Z_Construct_UScriptStruct_FGAEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffect_Hash() { return 2008474708U; }
class UScriptStruct* FAFEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFEventData, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFEventData"), sizeof(FAFEventData), Get_Z_Construct_UScriptStruct_FAFEventData_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFEventData>()
{
	return FAFEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFEventData(FAFEventData::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFEventData"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEventData
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFEventData")),new UScriptStruct::TCppStructOps<FAFEventData>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFEventData;
	struct Z_Construct_UScriptStruct_FAFEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_PropertyHandle_MetaData[] = {
		{ "Category", "AFEventData" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_PropertyHandle = { "PropertyHandle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFEventData, PropertyHandle), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_PropertyHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_PropertyHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_SpecHandle_MetaData[] = {
		{ "Category", "AFEventData" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFEventData, SpecHandle), Z_Construct_UScriptStruct_FAFEffectSpec, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_SpecHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_SpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "Category", "AFEventData" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFEventData, ContextHandle), Z_Construct_UScriptStruct_FGAEffectContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_ContextHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_ContextHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_PropertyHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_SpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEventData_Statics::NewProp_ContextHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFEventData",
		sizeof(FAFEventData),
		alignof(FAFEventData),
		Z_Construct_UScriptStruct_FAFEventData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEventData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFEventData"), sizeof(FAFEventData), Get_Z_Construct_UScriptStruct_FAFEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFEventData_Hash() { return 2182310008U; }
class UScriptStruct* FAFEffectParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFEffectParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFEffectParams, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFEffectParams"), sizeof(FAFEffectParams), Get_Z_Construct_UScriptStruct_FAFEffectParams_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFEffectParams>()
{
	return FAFEffectParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFEffectParams(FAFEffectParams::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFEffectParams"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectParams
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFEffectParams")),new UScriptStruct::TCppStructOps<FAFEffectParams>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectParams;
	struct Z_Construct_UScriptStruct_FAFEffectParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEffectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFEffectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFEffectParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFEffectParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFEffectParams",
		sizeof(FAFEffectParams),
		alignof(FAFEffectParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEffectParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFEffectParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFEffectParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFEffectParams"), sizeof(FAFEffectParams), Get_Z_Construct_UScriptStruct_FAFEffectParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFEffectParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFEffectParams_Hash() { return 4194162314U; }
class UScriptStruct* FAFPropertytHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFPropertytHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFPropertytHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFPropertytHandle"), sizeof(FAFPropertytHandle), Get_Z_Construct_UScriptStruct_FAFPropertytHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFPropertytHandle>()
{
	return FAFPropertytHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFPropertytHandle(FAFPropertytHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFPropertytHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFPropertytHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFPropertytHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFPropertytHandle")),new UScriptStruct::TCppStructOps<FAFPropertytHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFPropertytHandle;
	struct Z_Construct_UScriptStruct_FAFPropertytHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFPropertytHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::NewProp_SpecClass_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::NewProp_SpecClass = { "SpecClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFPropertytHandle, SpecClass), Z_Construct_UScriptStruct_FGAEffectClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::NewProp_SpecClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::NewProp_SpecClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::NewProp_SpecClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFPropertytHandle",
		sizeof(FAFPropertytHandle),
		alignof(FAFPropertytHandle),
		Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFPropertytHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFPropertytHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFPropertytHandle"), sizeof(FAFPropertytHandle), Get_Z_Construct_UScriptStruct_FAFPropertytHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFPropertytHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFPropertytHandle_Hash() { return 46425105U; }
class UScriptStruct* FAFEffectSpecHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFEffectSpecHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFEffectSpecHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFEffectSpecHandle"), sizeof(FAFEffectSpecHandle), Get_Z_Construct_UScriptStruct_FAFEffectSpecHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFEffectSpecHandle>()
{
	return FAFEffectSpecHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFEffectSpecHandle(FAFEffectSpecHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFEffectSpecHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectSpecHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectSpecHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFEffectSpecHandle")),new UScriptStruct::TCppStructOps<FAFEffectSpecHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectSpecHandle;
	struct Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFEffectSpecHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFEffectSpecHandle",
		sizeof(FAFEffectSpecHandle),
		alignof(FAFEffectSpecHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpecHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFEffectSpecHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFEffectSpecHandle"), sizeof(FAFEffectSpecHandle), Get_Z_Construct_UScriptStruct_FAFEffectSpecHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFEffectSpecHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFEffectSpecHandle_Hash() { return 1987804725U; }
class UScriptStruct* FAFEffectSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFEffectSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFEffectSpec, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFEffectSpec"), sizeof(FAFEffectSpec), Get_Z_Construct_UScriptStruct_FAFEffectSpec_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFEffectSpec>()
{
	return FAFEffectSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFEffectSpec(FAFEffectSpec::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFEffectSpec"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectSpec
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectSpec()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFEffectSpec")),new UScriptStruct::TCppStructOps<FAFEffectSpec>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFEffectSpec;
	struct Z_Construct_UScriptStruct_FAFEffectSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Extension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEffectSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09""Dervied from GCObject because Extension property has been garbage collected. Even with UPROPERTY() and non-GC outer.\n*/// : public FGCObject\n" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Dervied from GCObject because Extension property has been garbage collected. Even with UPROPERTY() and non-GC outer.\n// : public FGCObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFEffectSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFEffectSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFEffectSpec_Statics::NewProp_Extension_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAFEffectSpec_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFEffectSpec, Extension), Z_Construct_UClass_UGAEffectExtension_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEffectSpec_Statics::NewProp_Extension_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectSpec_Statics::NewProp_Extension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFEffectSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFEffectSpec_Statics::NewProp_Extension,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFEffectSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFEffectSpec",
		sizeof(FAFEffectSpec),
		alignof(FAFEffectSpec),
		Z_Construct_UScriptStruct_FAFEffectSpec_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFEffectSpec_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFEffectSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFEffectSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFEffectSpec"), sizeof(FAFEffectSpec), Get_Z_Construct_UScriptStruct_FAFEffectSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFEffectSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFEffectSpec_Hash() { return 1977946978U; }
class UScriptStruct* FAFContextHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFContextHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFContextHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFContextHandle"), sizeof(FAFContextHandle), Get_Z_Construct_UScriptStruct_FAFContextHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFContextHandle>()
{
	return FAFContextHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFContextHandle(FAFContextHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFContextHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFContextHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFContextHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFContextHandle")),new UScriptStruct::TCppStructOps<FAFContextHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFContextHandle;
	struct Z_Construct_UScriptStruct_FAFContextHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFContextHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFContextHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFContextHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFContextHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFContextHandle",
		sizeof(FAFContextHandle),
		alignof(FAFContextHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFContextHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFContextHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFContextHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFContextHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFContextHandle"), sizeof(FAFContextHandle), Get_Z_Construct_UScriptStruct_FAFContextHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFContextHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFContextHandle_Hash() { return 3188849923U; }
class UScriptStruct* FGAEffectClass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectClass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectClass, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectClass"), sizeof(FGAEffectClass), Get_Z_Construct_UScriptStruct_FGAEffectClass_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectClass>()
{
	return FGAEffectClass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectClass(FGAEffectClass::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectClass"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectClass
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectClass()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectClass")),new UScriptStruct::TCppStructOps<FGAEffectClass>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectClass;
	struct Z_Construct_UScriptStruct_FGAEffectClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpecClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectClass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectClass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectClass_Statics::NewProp_SpecClass_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGAEffectClass_Statics::NewProp_SpecClass = { "SpecClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectClass, SpecClass), Z_Construct_UClass_UGAGameEffectSpec_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectClass_Statics::NewProp_SpecClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectClass_Statics::NewProp_SpecClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectClass_Statics::NewProp_SpecClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectClass",
		sizeof(FGAEffectClass),
		alignof(FGAEffectClass),
		Z_Construct_UScriptStruct_FGAEffectClass_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectClass_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectClass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectClass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectClass"), sizeof(FGAEffectClass), Get_Z_Construct_UScriptStruct_FGAEffectClass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectClass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectClass_Hash() { return 953627307U; }
class UScriptStruct* FAFConditionalEffectContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFConditionalEffectContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFConditionalEffectContainer"), sizeof(FAFConditionalEffectContainer), Get_Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFConditionalEffectContainer>()
{
	return FAFConditionalEffectContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFConditionalEffectContainer(FAFConditionalEffectContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFConditionalEffectContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFConditionalEffectContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFConditionalEffectContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFConditionalEffectContainer")),new UScriptStruct::TCppStructOps<FAFConditionalEffectContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFConditionalEffectContainer;
	struct Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFConditionalEffectContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "AFConditionalEffectContainer" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFConditionalEffectContainer, Effects), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAFConditionalEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::NewProp_Effects_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFConditionalEffectContainer",
		sizeof(FAFConditionalEffectContainer),
		alignof(FAFConditionalEffectContainer),
		Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFConditionalEffectContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFConditionalEffectContainer"), sizeof(FAFConditionalEffectContainer), Get_Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFConditionalEffectContainer_Hash() { return 2278805368U; }
class UScriptStruct* FAFConditionalEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFConditionalEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFConditionalEffect, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFConditionalEffect"), sizeof(FAFConditionalEffect), Get_Z_Construct_UScriptStruct_FAFConditionalEffect_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFConditionalEffect>()
{
	return FAFConditionalEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFConditionalEffect(FAFConditionalEffect::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFConditionalEffect"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFConditionalEffect
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFConditionalEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFConditionalEffect")),new UScriptStruct::TCppStructOps<FAFConditionalEffect>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFConditionalEffect;
	struct Z_Construct_UScriptStruct_FAFConditionalEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFConditionalEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "AFConditionalEffect" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFConditionalEffect, Effect), Z_Construct_UClass_UGAGameEffectSpec_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_Effect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_RequiredTag_MetaData[] = {
		{ "Category", "AFConditionalEffect" },
		{ "Comment", "/* If target have this tag apply specified effects */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "If target have this tag apply specified effects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_RequiredTag = { "RequiredTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFConditionalEffect, RequiredTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_RequiredTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_RequiredTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::NewProp_RequiredTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFConditionalEffect",
		sizeof(FAFConditionalEffect),
		alignof(FAFConditionalEffect),
		Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFConditionalEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFConditionalEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFConditionalEffect"), sizeof(FAFConditionalEffect), Get_Z_Construct_UScriptStruct_FAFConditionalEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFConditionalEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFConditionalEffect_Hash() { return 256921458U; }
class UScriptStruct* FAFCueContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFCueContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFCueContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFCueContainer"), sizeof(FAFCueContainer), Get_Z_Construct_UScriptStruct_FAFCueContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFCueContainer>()
{
	return FAFCueContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFCueContainer(FAFCueContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFCueContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFCueContainer")),new UScriptStruct::TCppStructOps<FAFCueContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueContainer;
	struct Z_Construct_UScriptStruct_FAFCueContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFCueContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFCueContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueContainer_Statics::NewProp_CueTags_MetaData[] = {
		{ "Category", "AFCueContainer" },
		{ "Comment", "/* Cues to apply */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Cues to apply" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFCueContainer_Statics::NewProp_CueTags = { "CueTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFCueContainer, CueTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueContainer_Statics::NewProp_CueTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueContainer_Statics::NewProp_CueTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFCueContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFCueContainer_Statics::NewProp_CueTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFCueContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFCueContainer",
		sizeof(FAFCueContainer),
		alignof(FAFCueContainer),
		Z_Construct_UScriptStruct_FAFCueContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFCueContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFCueContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFCueContainer"), sizeof(FAFCueContainer), Get_Z_Construct_UScriptStruct_FAFCueContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFCueContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFCueContainer_Hash() { return 2534962223U; }
class UScriptStruct* FAFAttributeModifierContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAttributeModifierContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAttributeModifierContainer"), sizeof(FAFAttributeModifierContainer), Get_Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAttributeModifierContainer>()
{
	return FAFAttributeModifierContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAttributeModifierContainer(FAFAttributeModifierContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAttributeModifierContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeModifierContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeModifierContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAttributeModifierContainer")),new UScriptStruct::TCppStructOps<FAFAttributeModifierContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeModifierContainer;
	struct Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAttributeModifierContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "AFAttributeModifierContainer" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeModifierContainer, Modifiers), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAAttributeModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::NewProp_Modifiers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFAttributeModifierContainer",
		sizeof(FAFAttributeModifierContainer),
		alignof(FAFAttributeModifierContainer),
		Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeModifierContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAttributeModifierContainer"), sizeof(FAFAttributeModifierContainer), Get_Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAttributeModifierContainer_Hash() { return 1951740775U; }
class UScriptStruct* FGAAttributeModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAAttributeModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAAttributeModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAAttributeModifier"), sizeof(FGAAttributeModifier), Get_Z_Construct_UScriptStruct_FGAAttributeModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAAttributeModifier>()
{
	return FGAAttributeModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAAttributeModifier(FGAAttributeModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAAttributeModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAAttributeModifier")),new UScriptStruct::TCppStructOps<FGAAttributeModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttributeModifier;
	struct Z_Construct_UScriptStruct_FGAAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeMod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeMod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAAttributeModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "GAAttributeModifier" },
		{ "Comment", "/*\n\x09\x09Modifier value applied to attribute\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Modifier value applied to attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeModifier, Magnitude), Z_Construct_UScriptStruct_FGAMagnitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Magnitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget_MetaData[] = {
		{ "Category", "GAAttributeModifier" },
		{ "Comment", "/*\n\x09\x09Who will be target of this attribute change.\n\x09\x09Instigator - pawn which applied effect (regardless of to whom).\n\x09\x09Target - targeted pawn (regardless of who applied).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Who will be target of this attribute change.\nInstigator - pawn which applied effect (regardless of to whom).\nTarget - targeted pawn (regardless of who applied)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget = { "ModifierTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeModifier, ModifierTarget), Z_Construct_UEnum_AbilityFramework_EGAModifierTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod_MetaData[] = {
		{ "Category", "Instant Spec" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod = { "AttributeMod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeModifier, AttributeMod), Z_Construct_UEnum_AbilityFramework_EGAAttributeMod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Instant Spec" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttributeModifier, Attribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_ModifierTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_AttributeMod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::NewProp_Attribute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAAttributeModifier",
		sizeof(FGAAttributeModifier),
		alignof(FGAAttributeModifier),
		Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAAttributeModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAAttributeModifier"), sizeof(FGAAttributeModifier), Get_Z_Construct_UScriptStruct_FGAAttributeModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAAttributeModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAAttributeModifier_Hash() { return 1512244361U; }
class UScriptStruct* FGAMagnitude::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAMagnitude_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAMagnitude, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAMagnitude"), sizeof(FGAMagnitude), Get_Z_Construct_UScriptStruct_FGAMagnitude_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAMagnitude>()
{
	return FGAMagnitude::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAMagnitude(FGAMagnitude::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAMagnitude"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAMagnitude
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAMagnitude()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAMagnitude")),new UScriptStruct::TCppStructOps<FGAMagnitude>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAMagnitude;
	struct Z_Construct_UScriptStruct_FGAMagnitude_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Custom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveBased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeBased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalculationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CalculationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CalculationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAMagnitude_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAMagnitude>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_Custom_MetaData[] = {
		{ "Category", "GAMagnitude" },
		{ "Comment", "/*\n\x09Provide custom calculation class.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Provide custom calculation class." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAMagnitude, Custom), Z_Construct_UScriptStruct_FGACustomCalculationModifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_Custom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_Custom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CurveBased_MetaData[] = {
		{ "Category", "GAMagnitude" },
		{ "Comment", "/*\n\x09Get value from selected CurveTable, based on selected attribute value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Get value from selected CurveTable, based on selected attribute value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CurveBased = { "CurveBased", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAMagnitude, CurveBased), Z_Construct_UScriptStruct_FGACurveBasedModifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CurveBased_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CurveBased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_AttributeBased_MetaData[] = {
		{ "Category", "GAMagnitude" },
		{ "Comment", "/*\n\x09Simple calculation based on attribute:\n\x09(Coefficient * (PreMultiply + AttributeValue) + PostMultiply) * PostCoefficient\n\n\x09There is no any magic manipulation, it straight off pull attribute from selected source,\n\x09""and make this operation on it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Simple calculation based on attribute:\n(Coefficient * (PreMultiply + AttributeValue) + PostMultiply) * PostCoefficient\n\nThere is no any magic manipulation, it straight off pull attribute from selected source,\nand make this operation on it." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_AttributeBased = { "AttributeBased", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAMagnitude, AttributeBased), Z_Construct_UScriptStruct_FGAAttributeBasedModifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_AttributeBased_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_AttributeBased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_DirectModifier_MetaData[] = {
		{ "Category", "GAMagnitude" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_DirectModifier = { "DirectModifier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAMagnitude, DirectModifier), Z_Construct_UScriptStruct_FGADirectModifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_DirectModifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_DirectModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType_MetaData[] = {
		{ "Category", "GAMagnitude" },
		{ "Comment", "/*\n\x09Type of calculation we want to perform for this Magnitude.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Type of calculation we want to perform for this Magnitude." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType = { "CalculationType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAMagnitude, CalculationType), Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAMagnitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CurveBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_AttributeBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_DirectModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAMagnitude_Statics::NewProp_CalculationType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAMagnitude_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAMagnitude",
		sizeof(FGAMagnitude),
		alignof(FGAMagnitude),
		Z_Construct_UScriptStruct_FGAMagnitude_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAMagnitude_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAMagnitude_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAMagnitude()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAMagnitude_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAMagnitude"), sizeof(FGAMagnitude), Get_Z_Construct_UScriptStruct_FGAMagnitude_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAMagnitude_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAMagnitude_Hash() { return 3666597565U; }
	void UGAGameEffectSpec::StaticRegisterNativesUGAGameEffectSpec()
	{
	}
	UClass* Z_Construct_UClass_UGAGameEffectSpec_NoRegister()
	{
		return UGAGameEffectSpec::StaticClass();
	}
	struct Z_Construct_UClass_UGAGameEffectSpec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionDenyTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutionDenyTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplyTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedImmunityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppliedImmunityTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequiredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplicationRequiredTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DenyTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DenyTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecuteEventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecuteEventTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedEventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppliedEventTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveEffectWithTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoveEffectWithTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IfHaveTagEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IfHaveTagEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEffectApplyToSelfEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnEffectApplyToSelfEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEffectApplyToTargetEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnEffectApplyToTargetEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRemovedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnRemovedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPeriodEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnPeriodEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExpiredEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnExpiredEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRemovedEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnRemovedEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OnRemovedEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExpiredEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnExpiredEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OnExpiredEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAppliedEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnAppliedEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OnAppliedEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionInstancingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExtensionInstancingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExtensionInstancingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExecutionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtributeModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtributeModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteOnApplication_MetaData[];
#endif
		static void NewProp_bExecuteOnApplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteOnApplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickOnApplication_MetaData[];
#endif
		static void NewProp_bTickOnApplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickOnApplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStackedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStackedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectAggregation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectAggregation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectAggregation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Application_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Application;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ApplicationRequirement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicate_MetaData[];
#endif
		static void NewProp_bReplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAGameEffectSpec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09""Base effect class. You can derive your own specialized classes from it\n\x09with preset customizations and values. You should never directly inherit blueprints from it.\n*/" },
		{ "IncludePath", "Effects/GAGameEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Base effect class. You can derive your own specialized classes from it\nwith preset customizations and values. You should never directly inherit blueprints from it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionDenyTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* If any of these tags are present on Effect Target, it will not be executed */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "If any of these tags are present on Effect Target, it will not be executed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionDenyTags = { "ExecutionDenyTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ExecutionDenyTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionDenyTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionDenyTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplyTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Tags, which are applied to Target when effect is Duration/Periodic based. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Tags, which are applied to Target when effect is Duration/Periodic based." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplyTags = { "ApplyTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ApplyTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplyTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplyTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedImmunityTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Applied immunity tags. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Applied immunity tags." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedImmunityTags = { "AppliedImmunityTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, AppliedImmunityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedImmunityTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedImmunityTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequiredTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Tags, required for this effect to be applied. If these tags are not present, effect will be ignored. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Tags, required for this effect to be applied. If these tags are not present, effect will be ignored." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequiredTags = { "ApplicationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ApplicationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequiredTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequiredTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_DenyTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* If Target have any of these tags, effect will not be applied. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "If Target have any of these tags, effect will not be applied." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_DenyTags = { "DenyTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, DenyTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_DenyTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_DenyTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AttributeTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/*\n\x09\x09Tags applied to attribute when effect is applying non-instant effect.\n\x09\x09Owned tags of another effect are checked against these tags to calculate\n\x09\x09modifier.\n\x09\x09""Also it's checked when tag is applied to determine effect stacking,\n\x09\x09when stacking is set to Override or StrongerOverride.\n\n\x09\x09Use only single tag here, with proper hierarchy. \n\x09\x09Using multiple tags should be reserved only for special cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Tags applied to attribute when effect is applying non-instant effect.\nOwned tags of another effect are checked against these tags to calculate\nmodifier.\nAlso it's checked when tag is applied to determine effect stacking,\nwhen stacking is set to Override or StrongerOverride.\n\nUse only single tag here, with proper hierarchy.\nUsing multiple tags should be reserved only for special cases." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AttributeTags = { "AttributeTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, AttributeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AttributeTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AttributeTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecuteEventTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/*\n\x09\x09When effect is executed trigger events with these tags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "When effect is executed trigger events with these tags." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecuteEventTags = { "ExecuteEventTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ExecuteEventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecuteEventTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecuteEventTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedEventTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/*\n\x09\x09When effect is appied trigger events with these tags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "When effect is appied trigger events with these tags." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedEventTags = { "AppliedEventTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, AppliedEventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedEventTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedEventTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Tags owned by this effect and not applied. Describe the type of this effect. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Tags owned by this effect and not applied. Describe the type of this effect." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTags = { "EffectTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, EffectTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OwnedTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Tags I own and I don't apply. New tags can be added here as the effect is applied. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Tags I own and I don't apply. New tags can be added here as the effect is applied." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OwnedTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OwnedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_RemoveEffectWithTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Remove effects with these tags. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Remove effects with these tags." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_RemoveEffectWithTags = { "RemoveEffectWithTags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, RemoveEffectWithTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_RemoveEffectWithTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_RemoveEffectWithTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_IfHaveTagEffect_MetaData[] = {
		{ "Category", "Linked Effects" },
		{ "Comment", "/* \n\x09\x09""Effects applied only when certain criteria are met.\n\x09\x09Just dumbed here it needs it's own structure that will actually alow to setup those conditions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Effects applied only when certain criteria are met.\nJust dumbed here it needs it's own structure that will actually alow to setup those conditions." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_IfHaveTagEffect = { "IfHaveTagEffect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, IfHaveTagEffect), Z_Construct_UScriptStruct_FAFConditionalEffectContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_IfHaveTagEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_IfHaveTagEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToSelfEvent_MetaData[] = {
		{ "Category", "Event Application Tags" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToSelfEvent = { "OnEffectApplyToSelfEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnEffectApplyToSelfEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToSelfEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToSelfEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToTargetEvent_MetaData[] = {
		{ "Category", "Event Application Tags" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToTargetEvent = { "OnEffectApplyToTargetEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnEffectApplyToTargetEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToTargetEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToTargetEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEvent_MetaData[] = {
		{ "Category", "Event Tags" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEvent = { "OnRemovedEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnRemovedEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnPeriodEvent_MetaData[] = {
		{ "Category", "Event Tags" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnPeriodEvent = { "OnPeriodEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnPeriodEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnPeriodEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnPeriodEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEvent_MetaData[] = {
		{ "Category", "Event Tags" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEvent = { "OnExpiredEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnExpiredEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects_MetaData[] = {
		{ "Category", "Linked Effects" },
		{ "Comment", "/* Effects applied when this effect is removed. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Effects applied when this effect is removed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects = { "OnRemovedEffects", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnRemovedEffects), METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects_Inner = { "OnRemovedEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGAGameEffectSpec_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects_MetaData[] = {
		{ "Category", "Linked Effects" },
		{ "Comment", "/* Effects applied when this effect expire*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Effects applied when this effect expire" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects = { "OnExpiredEffects", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnExpiredEffects), METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects_Inner = { "OnExpiredEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGAGameEffectSpec_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects_MetaData[] = {
		{ "Category", "Linked Effects" },
		{ "Comment", "/* \n\x09\x09""Effects applied when this effect is applied. \n\x09\x09These effects will be applied with the same context and the same target as\n\x09\x09""effect, which stores them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Effects applied when this effect is applied.\nThese effects will be applied with the same context and the same target as\neffect, which stores them." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects = { "OnAppliedEffects", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, OnAppliedEffects), METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects_Inner = { "OnAppliedEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGAGameEffectSpec_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Cues_MetaData[] = {
		{ "Category", "Cues" },
		{ "Comment", "/* Cues to apply by this effect. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Cues to apply by this effect." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Cues = { "Cues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, Cues), Z_Construct_UScriptStruct_FAFCueContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Cues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Cues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Extension_MetaData[] = {
		{ "Category", "Extension" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, Extension), Z_Construct_UClass_UGAEffectExtension_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Extension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy_MetaData[] = {
		{ "Category", "Extension" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy = { "ExtensionInstancingPolicy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ExtensionInstancingPolicy), Z_Construct_UEnum_AbilityFramework_EAFExtensionType, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionType_MetaData[] = {
		{ "Category", "Execution Type" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionType = { "ExecutionType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ExecutionType), Z_Construct_UClass_UGAEffectExecution_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Attribute Modifiers" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, Modifiers), Z_Construct_UScriptStruct_FAFAttributeModifierContainer, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Modifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AtributeModifier_MetaData[] = {
		{ "Category", "Attribute Modifiers" },
		{ "Comment", "/* \n\x09\x09Modifier applied to attribute\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Modifier applied to attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AtributeModifier = { "AtributeModifier", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, AtributeModifier), Z_Construct_UScriptStruct_FGAAttributeModifier, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AtributeModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AtributeModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication_MetaData[] = {
		{ "Category", "Duration" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	void Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication_SetBit(void* Obj)
	{
		((UGAGameEffectSpec*)Obj)->bExecuteOnApplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication = { "bExecuteOnApplication", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGAGameEffectSpec), &Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/* IF true, effect will tick instantly upon application. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "IF true, effect will tick instantly upon application." },
	};
#endif
	void Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication_SetBit(void* Obj)
	{
		((UGAGameEffectSpec*)Obj)->bTickOnApplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication = { "bTickOnApplication", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGAGameEffectSpec), &Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStackedDuration_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/* Total duration of effect (if applicable) */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Total duration of effect (if applicable)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStackedDuration = { "MaxStackedDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, MaxStackedDuration), METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStackedDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStackedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Period" },
		{ "Comment", "/* Duration of single period. */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Duration of single period." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, Period), Z_Construct_UScriptStruct_FGAMagnitude, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/* Total duration of effect (if applicable) */" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Total duration of effect (if applicable)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, Duration), Z_Construct_UScriptStruct_FGAMagnitude, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/*\n\x09\x09Who should aggregate this effect. Relevelant for stacking type\n\x09\x09""and by this only relevelant for periodic effects.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Who should aggregate this effect. Relevelant for stacking type\nand by this only relevelant for periodic effects." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation = { "EffectAggregation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, EffectAggregation), Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStacks_MetaData[] = {
		{ "Category", "Stacking" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStacks = { "MaxStacks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, MaxStacks), METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Application_MetaData[] = {
		{ "Category", "Effect Info" },
		{ "Comment", "/* \n\x09\x09How effect should stack. Only relevelant for periodic effects\n\x09\x09""and modifiers applied on period.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "How effect should stack. Only relevelant for periodic effects\nand modifiers applied on period." },
		{ "UseDisplayName", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Application = { "Application", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, Application), Z_Construct_UClass_UAFEffectCustomApplication_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Application_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Application_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequirement_MetaData[] = {
		{ "Category", "Effect Info" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "UseDisplayName", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequirement = { "ApplicationRequirement", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, ApplicationRequirement), Z_Construct_UClass_UAFEffectApplicationRequirement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequirement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequirement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTag_MetaData[] = {
		{ "Category", "Effect Info" },
		{ "Comment", "/*\n\x09\x09Individual Tag descrbing effect type.\n\x09\x09ie. Condition.Burning\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Individual Tag descrbing effect type.\nie. Condition.Burning" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGameEffectSpec, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/*\n\x09\x09Replicate effect back to clients ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Replicate effect back to clients ?" },
	};
#endif
	void Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate_SetBit(void* Obj)
	{
		((UGAGameEffectSpec*)Obj)->bReplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate = { "bReplicate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGAGameEffectSpec), &Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAGameEffectSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionDenyTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplyTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedImmunityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequiredTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_DenyTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AttributeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecuteEventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AppliedEventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OwnedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_RemoveEffectWithTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_IfHaveTagEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToSelfEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnEffectApplyToTargetEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnPeriodEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnRemovedEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnExpiredEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_OnAppliedEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Cues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Extension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExtensionInstancingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ExecutionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_AtributeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bExecuteOnApplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bTickOnApplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStackedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectAggregation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_MaxStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_Application,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_ApplicationRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_EffectTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameEffectSpec_Statics::NewProp_bReplicate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAGameEffectSpec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAGameEffectSpec>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAGameEffectSpec_Statics::ClassParams = {
		&UGAGameEffectSpec::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAGameEffectSpec_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGAGameEffectSpec_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAGameEffectSpec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAGameEffectSpec()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAGameEffectSpec_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAGameEffectSpec, 1186485849);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAGameEffectSpec>()
	{
		return UGAGameEffectSpec::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAGameEffectSpec(Z_Construct_UClass_UGAGameEffectSpec, &UGAGameEffectSpec::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAGameEffectSpec"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAGameEffectSpec);
	void UAFEffectSpecBase::StaticRegisterNativesUAFEffectSpecBase()
	{
	}
	UClass* Z_Construct_UClass_UAFEffectSpecBase_NoRegister()
	{
		return UAFEffectSpecBase::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectSpecBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectSpecBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAGameEffectSpec,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectSpecBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09""Base effect class to extend from when creating effect blueprints.\n*/" },
		{ "IncludePath", "Effects/GAGameEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAGameEffect.h" },
		{ "ToolTip", "Base effect class to extend from when creating effect blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectSpecBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectSpecBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectSpecBase_Statics::ClassParams = {
		&UAFEffectSpecBase::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectSpecBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectSpecBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectSpecBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectSpecBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectSpecBase, 1785593597);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectSpecBase>()
	{
		return UAFEffectSpecBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectSpecBase(Z_Construct_UClass_UAFEffectSpecBase, &UAFEffectSpecBase::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectSpecBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectSpecBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
