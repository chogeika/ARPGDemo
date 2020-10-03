// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/GAGlobalTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAGlobalTypes() {}
// Cross Module References
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectStacking();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectType();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeValue();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAModifierTarget();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeSource();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeMod();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFCueHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectCueParams();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACountedTagContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAModifier();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeChangedData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectMod();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAIndividualMods();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPredictionHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContext();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBase_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAtributeRowData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributeExtension_NoRegister();
// End Cross Module References
	static UEnum* EGAEffectAggregation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAEffectAggregation"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAEffectAggregation>()
	{
		return EGAEffectAggregation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAEffectAggregation(EGAEffectAggregation_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAEffectAggregation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation_Hash() { return 3664219106U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAEffectAggregation"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAEffectAggregation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAEffectAggregation::AggregateByInstigator", (int64)EGAEffectAggregation::AggregateByInstigator },
				{ "EGAEffectAggregation::AggregateByTarget", (int64)EGAEffectAggregation::AggregateByTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AggregateByInstigator.Comment", "/*\n\x09""Effect will be stacked/aggregated by Instigator who applied it.\n\x09""Checking for stacking rules will be done only against other effects from the same Instigator.\n\x09*/" },
				{ "AggregateByInstigator.Name", "EGAEffectAggregation::AggregateByInstigator" },
				{ "AggregateByInstigator.ToolTip", "Effect will be stacked/aggregated by Instigator who applied it.\nChecking for stacking rules will be done only against other effects from the same Instigator." },
				{ "AggregateByTarget.Comment", "/*\n\x09""Effects will be stacked/aggregated by Target.\n\x09""Checking for stacking rules, will be done only for effects, with the same target.\n\x09*/" },
				{ "AggregateByTarget.Name", "EGAEffectAggregation::AggregateByTarget" },
				{ "AggregateByTarget.ToolTip", "Effects will be stacked/aggregated by Target.\nChecking for stacking rules, will be done only for effects, with the same target." },
				{ "Comment", "/*\nRules for where we should aggregate effects.\nConcept might look bit muddy at first look, but it is actually very simple.\n\nLet's say we have additive effect which modify Health by 50 points, and effect which modify health by 100.\nWe want, to only the highest one, affect target (positive bonus). Regardless of who applied this effect.\n\nTo do it we need to tell this effect, that it should be aggregated by target and set effect stacking rule to\nHighestOverride.\n\nNow say we have effect which reduce Health by 30 points, and second which reduce by 20 points.\nWe might want negative effects from diffrent source to stack.\nTo do this we need to aggregate those effects by Instigator.\nAnd then we can decide how those effects will stack within single Instigator.\n*/" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
				{ "ToolTip", "Rules for where we should aggregate effects.\nConcept might look bit muddy at first look, but it is actually very simple.\n\nLet's say we have additive effect which modify Health by 50 points, and effect which modify health by 100.\nWe want, to only the highest one, affect target (positive bonus). Regardless of who applied this effect.\n\nTo do it we need to tell this effect, that it should be aggregated by target and set effect stacking rule to\nHighestOverride.\n\nNow say we have effect which reduce Health by 30 points, and second which reduce by 20 points.\nWe might want negative effects from diffrent source to stack.\nTo do this we need to aggregate those effects by Instigator.\nAnd then we can decide how those effects will stack within single Instigator." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAEffectAggregation",
				"EGAEffectAggregation",
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
	static UEnum* EGAMagnitudeCalculation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAMagnitudeCalculation"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAMagnitudeCalculation>()
	{
		return EGAMagnitudeCalculation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAMagnitudeCalculation(EGAMagnitudeCalculation_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAMagnitudeCalculation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation_Hash() { return 1919207547U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAMagnitudeCalculation"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAMagnitudeCalculation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAMagnitudeCalculation::Direct", (int64)EGAMagnitudeCalculation::Direct },
				{ "EGAMagnitudeCalculation::AttributeBased", (int64)EGAMagnitudeCalculation::AttributeBased },
				{ "EGAMagnitudeCalculation::CurveBased", (int64)EGAMagnitudeCalculation::CurveBased },
				{ "EGAMagnitudeCalculation::CustomCalculation", (int64)EGAMagnitudeCalculation::CustomCalculation },
				{ "EGAMagnitudeCalculation::Invalid", (int64)EGAMagnitudeCalculation::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttributeBased.Comment", "//straight float value, no calculations.\n" },
				{ "AttributeBased.Name", "EGAMagnitudeCalculation::AttributeBased" },
				{ "AttributeBased.ToolTip", "straight float value, no calculations." },
				{ "CurveBased.Comment", "//calculate based on attribute Attribute * RestOfEquationToBeDecided\n" },
				{ "CurveBased.Name", "EGAMagnitudeCalculation::CurveBased" },
				{ "CurveBased.ToolTip", "calculate based on attribute Attribute * RestOfEquationToBeDecided" },
				{ "CustomCalculation.Comment", "//Takes value of attribute, and then gets value from curve based on this attribute.\n" },
				{ "CustomCalculation.Name", "EGAMagnitudeCalculation::CustomCalculation" },
				{ "CustomCalculation.ToolTip", "Takes value of attribute, and then gets value from curve based on this attribute." },
				{ "Direct.Name", "EGAMagnitudeCalculation::Direct" },
				{ "Invalid.Comment", "//uses custom object to calculate magnitude.\n" },
				{ "Invalid.Name", "EGAMagnitudeCalculation::Invalid" },
				{ "Invalid.ToolTip", "uses custom object to calculate magnitude." },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAMagnitudeCalculation",
				"EGAMagnitudeCalculation",
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
	static UEnum* EGAEffectStacking_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAEffectStacking, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAEffectStacking"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAEffectStacking>()
	{
		return EGAEffectStacking_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAEffectStacking(EGAEffectStacking_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAEffectStacking"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAEffectStacking_Hash() { return 2943357154U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectStacking()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAEffectStacking"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAEffectStacking_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAEffectStacking::Add", (int64)EGAEffectStacking::Add },
				{ "EGAEffectStacking::Duration", (int64)EGAEffectStacking::Duration },
				{ "EGAEffectStacking::Override", (int64)EGAEffectStacking::Override },
				{ "EGAEffectStacking::Intensity", (int64)EGAEffectStacking::Intensity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "EGAEffectStacking::Add" },
				{ "Comment", "/*\n\n\x09StrongetOverride - Does not check for effect type/tags. It will just check if modified\n\x09""attribute, is already modified, and if incoming effect is stronger it will override\n\x09""all modifiers affecting this attribute, and remove all weaker ones.\n\n\x09Override - does not check if it is stronger/weaker, it will simply override any existing modifiers\n\x09""and effects with the same name.\n\n\x09""Duration - Will add duration to existing effect of EXACTLY the same type.\n\n\x09Intensity - Undefined. It will either add new effects to stack,\n\x09or it will simply sum modifiers, from all effects of the same types, for the same attributes\n\x09""and refresh duration to the latest applied effect.\n\n\x09""Add - no checks, simply add new effect to stack.\n*/" },
				{ "Duration.Name", "EGAEffectStacking::Duration" },
				{ "Intensity.Comment", "//override existing effect of the same type, and all other effects which have override the same attribute and have same AttributeTags\n" },
				{ "Intensity.Name", "EGAEffectStacking::Intensity" },
				{ "Intensity.ToolTip", "override existing effect of the same type, and all other effects which have override the same attribute and have same AttributeTags" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
				{ "Override.Name", "EGAEffectStacking::Override" },
				{ "ToolTip", "StrongetOverride - Does not check for effect type/tags. It will just check if modified\nattribute, is already modified, and if incoming effect is stronger it will override\nall modifiers affecting this attribute, and remove all weaker ones.\n\nOverride - does not check if it is stronger/weaker, it will simply override any existing modifiers\nand effects with the same name.\n\nDuration - Will add duration to existing effect of EXACTLY the same type.\n\nIntensity - Undefined. It will either add new effects to stack,\nor it will simply sum modifiers, from all effects of the same types, for the same attributes\nand refresh duration to the latest applied effect.\n\nAdd - no checks, simply add new effect to stack." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAEffectStacking",
				"EGAEffectStacking",
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
	static UEnum* EGAEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAEffectType, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAEffectType"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAEffectType>()
	{
		return EGAEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAEffectType(EGAEffectType_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAEffectType_Hash() { return 711926379U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAEffectType"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAEffectType::Instant", (int64)EGAEffectType::Instant },
				{ "EGAEffectType::Duration", (int64)EGAEffectType::Duration },
				{ "EGAEffectType::Infinite", (int64)EGAEffectType::Infinite },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Duration.Name", "EGAEffectType::Duration" },
				{ "Infinite.Name", "EGAEffectType::Infinite" },
				{ "Instant.Name", "EGAEffectType::Instant" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAEffectType",
				"EGAEffectType",
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
	static UEnum* EGAAttributeValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAAttributeValue, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAAttributeValue"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAAttributeValue>()
	{
		return EGAAttributeValue_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAttributeValue(EGAAttributeValue_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAAttributeValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAAttributeValue_Hash() { return 3608209531U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAttributeValue"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAAttributeValue_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAttributeValue::Base", (int64)EGAAttributeValue::Base },
				{ "EGAAttributeValue::Current", (int64)EGAAttributeValue::Current },
				{ "EGAAttributeValue::Final", (int64)EGAAttributeValue::Final },
				{ "EGAAttributeValue::Bonus", (int64)EGAAttributeValue::Bonus },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Base.Name", "EGAAttributeValue::Base" },
				{ "Bonus.Name", "EGAAttributeValue::Bonus" },
				{ "Current.Name", "EGAAttributeValue::Current" },
				{ "Final.Name", "EGAAttributeValue::Final" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAAttributeValue",
				"EGAAttributeValue",
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
	static UEnum* EGAModifierTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAModifierTarget, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAModifierTarget"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAModifierTarget>()
	{
		return EGAModifierTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAModifierTarget(EGAModifierTarget_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAModifierTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAModifierTarget_Hash() { return 3257418150U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAModifierTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAModifierTarget"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAModifierTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAModifierTarget::Instigator", (int64)EGAModifierTarget::Instigator },
				{ "EGAModifierTarget::Target", (int64)EGAModifierTarget::Target },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Instigator.Name", "EGAModifierTarget::Instigator" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
				{ "Target.Name", "EGAModifierTarget::Target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAModifierTarget",
				"EGAModifierTarget",
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
	static UEnum* EGAAttributeSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAAttributeSource, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAAttributeSource"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAAttributeSource>()
	{
		return EGAAttributeSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAttributeSource(EGAAttributeSource_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAAttributeSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAAttributeSource_Hash() { return 37048192U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAttributeSource"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAAttributeSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAttributeSource::Instigator", (int64)EGAAttributeSource::Instigator },
				{ "EGAAttributeSource::Target", (int64)EGAAttributeSource::Target },
				{ "EGAAttributeSource::Causer", (int64)EGAAttributeSource::Causer },
				{ "EGAAttributeSource::Ability", (int64)EGAAttributeSource::Ability },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability.Name", "EGAAttributeSource::Ability" },
				{ "Causer.Name", "EGAAttributeSource::Causer" },
				{ "Instigator.Name", "EGAAttributeSource::Instigator" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
				{ "Target.Name", "EGAAttributeSource::Target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAAttributeSource",
				"EGAAttributeSource",
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
	static UEnum* EGAAttributeMod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGAAttributeMod, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGAAttributeMod"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAAttributeMod>()
	{
		return EGAAttributeMod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAttributeMod(EGAAttributeMod_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGAAttributeMod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGAAttributeMod_Hash() { return 3532880034U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGAAttributeMod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAttributeMod"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGAAttributeMod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAttributeMod::Add", (int64)EGAAttributeMod::Add },
				{ "EGAAttributeMod::Subtract", (int64)EGAAttributeMod::Subtract },
				{ "EGAAttributeMod::Multiply", (int64)EGAAttributeMod::Multiply },
				{ "EGAAttributeMod::Divide", (int64)EGAAttributeMod::Divide },
				{ "EGAAttributeMod::Set", (int64)EGAAttributeMod::Set },
				{ "EGAAttributeMod::PercentageAdd", (int64)EGAAttributeMod::PercentageAdd },
				{ "EGAAttributeMod::PercentageSubtract", (int64)EGAAttributeMod::PercentageSubtract },
				{ "EGAAttributeMod::Invalid", (int64)EGAAttributeMod::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "EGAAttributeMod::Add" },
				{ "Comment", "/*\n\x09TODO:: I probabaly need to change it to normal enum.\n\x09So I can use it as array indexes.\n*/" },
				{ "Divide.Comment", "//Value =  Value * X\n" },
				{ "Divide.Name", "EGAAttributeMod::Divide" },
				{ "Divide.ToolTip", "Value =  Value * X" },
				{ "Invalid.Name", "EGAAttributeMod::Invalid" },
				{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
				{ "Multiply.Comment", "//Value =  Value - X\n" },
				{ "Multiply.Name", "EGAAttributeMod::Multiply" },
				{ "Multiply.ToolTip", "Value =  Value - X" },
				{ "PercentageAdd.Comment", "//Value = X\n" },
				{ "PercentageAdd.Name", "EGAAttributeMod::PercentageAdd" },
				{ "PercentageAdd.ToolTip", "Value = X" },
				{ "PercentageSubtract.Name", "EGAAttributeMod::PercentageSubtract" },
				{ "Set.Comment", "//Value =  Value * X - ok its's not really divide.\n" },
				{ "Set.Name", "EGAAttributeMod::Set" },
				{ "Set.ToolTip", "Value =  Value * X - ok its's not really divide." },
				{ "Subtract.Comment", "//Value =  Value + X\n" },
				{ "Subtract.Name", "EGAAttributeMod::Subtract" },
				{ "Subtract.ToolTip", "Value =  Value + X" },
				{ "ToolTip", "TODO:: I probabaly need to change it to normal enum.\nSo I can use it as array indexes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGAAttributeMod",
				"EGAAttributeMod",
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
class UScriptStruct* FAFCueHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFCueHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFCueHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFCueHandle"), sizeof(FAFCueHandle), Get_Z_Construct_UScriptStruct_FAFCueHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFCueHandle>()
{
	return FAFCueHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFCueHandle(FAFCueHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFCueHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFCueHandle")),new UScriptStruct::TCppStructOps<FAFCueHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueHandle;
	struct Z_Construct_UScriptStruct_FAFCueHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFCueHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFCueHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAFCueHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFCueHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueHandle_Statics::NewProp_Handle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFCueHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFCueHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFCueHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFCueHandle",
		sizeof(FAFCueHandle),
		alignof(FAFCueHandle),
		Z_Construct_UScriptStruct_FAFCueHandle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFCueHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFCueHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFCueHandle"), sizeof(FAFCueHandle), Get_Z_Construct_UScriptStruct_FAFCueHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFCueHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFCueHandle_Hash() { return 988935377U; }
class UScriptStruct* FGAEffectCueParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectCueParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectCueParams, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectCueParams"), sizeof(FGAEffectCueParams), Get_Z_Construct_UScriptStruct_FGAEffectCueParams_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectCueParams>()
{
	return FGAEffectCueParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectCueParams(FGAEffectCueParams::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectCueParams"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectCueParams
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectCueParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectCueParams")),new UScriptStruct::TCppStructOps<FGAEffectCueParams>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectCueParams;
	struct Z_Construct_UScriptStruct_FGAEffectCueParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectCueParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_CueTags_MetaData[] = {
		{ "Category", "GAEffectCueParams" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_CueTags = { "CueTags", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectCueParams, CueTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_CueTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_CueTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Causer_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectCueParams, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Causer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Causer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectCueParams, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Instigator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_HitResult_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectCueParams, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_CueTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::NewProp_HitResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectCueParams",
		sizeof(FGAEffectCueParams),
		alignof(FGAEffectCueParams),
		Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectCueParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectCueParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectCueParams"), sizeof(FGAEffectCueParams), Get_Z_Construct_UScriptStruct_FGAEffectCueParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectCueParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectCueParams_Hash() { return 706140368U; }
class UScriptStruct* FGACountedTagContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGACountedTagContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGACountedTagContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GACountedTagContainer"), sizeof(FGACountedTagContainer), Get_Z_Construct_UScriptStruct_FGACountedTagContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGACountedTagContainer>()
{
	return FGACountedTagContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGACountedTagContainer(FGACountedTagContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GACountedTagContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGACountedTagContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGACountedTagContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GACountedTagContainer")),new UScriptStruct::TCppStructOps<FGACountedTagContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGACountedTagContainer;
	struct Z_Construct_UScriptStruct_FGACountedTagContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGACountedTagContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::NewProp_AllTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::NewProp_AllTags = { "AllTags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGACountedTagContainer, AllTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::NewProp_AllTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::NewProp_AllTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::NewProp_AllTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GACountedTagContainer",
		sizeof(FGACountedTagContainer),
		alignof(FGACountedTagContainer),
		Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGACountedTagContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGACountedTagContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GACountedTagContainer"), sizeof(FGACountedTagContainer), Get_Z_Construct_UScriptStruct_FGACountedTagContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGACountedTagContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGACountedTagContainer_Hash() { return 1322820034U; }
class UScriptStruct* FGAModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAModifier, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAModifier"), sizeof(FGAModifier), Get_Z_Construct_UScriptStruct_FGAModifier_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAModifier>()
{
	return FGAModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAModifier(FGAModifier::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAModifier"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAModifier
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAModifier")),new UScriptStruct::TCppStructOps<FGAModifier>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAModifier;
	struct Z_Construct_UScriptStruct_FGAModifier_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeMod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeMod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nStruct representing final modifier applied to attribute.\n*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Struct representing final modifier applied to attribute." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod = { "AttributeMod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAModifier, AttributeMod), Z_Construct_UEnum_AbilityFramework_EGAAttributeMod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAModifier_Statics::NewProp_AttributeMod_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAModifier",
		sizeof(FGAModifier),
		alignof(FGAModifier),
		Z_Construct_UScriptStruct_FGAModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAModifier"), sizeof(FGAModifier), Get_Z_Construct_UScriptStruct_FGAModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAModifier_Hash() { return 366123492U; }
class UScriptStruct* FAFAttributeChangedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAttributeChangedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAttributeChangedData, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAttributeChangedData"), sizeof(FAFAttributeChangedData), Get_Z_Construct_UScriptStruct_FAFAttributeChangedData_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAttributeChangedData>()
{
	return FAFAttributeChangedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAttributeChangedData(FAFAttributeChangedData::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAttributeChangedData"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeChangedData
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeChangedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAttributeChangedData")),new UScriptStruct::TCppStructOps<FAFAttributeChangedData>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributeChangedData;
	struct Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAttributeChangedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_NewValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeChangedData, NewValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_NewValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeChangedData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeChangedData, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Mod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Mod = { "Mod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributeChangedData, Mod), Z_Construct_UScriptStruct_FGAEffectMod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Mod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Mod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::NewProp_Mod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFAttributeChangedData",
		sizeof(FAFAttributeChangedData),
		alignof(FAFAttributeChangedData),
		Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeChangedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAttributeChangedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAttributeChangedData"), sizeof(FAFAttributeChangedData), Get_Z_Construct_UScriptStruct_FAFAttributeChangedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAttributeChangedData_Hash() { return 1791422713U; }
class UScriptStruct* FGAEffectMod::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectMod_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectMod, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectMod"), sizeof(FGAEffectMod), Get_Z_Construct_UScriptStruct_FGAEffectMod_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectMod>()
{
	return FGAEffectMod::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectMod(FGAEffectMod::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectMod"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectMod
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectMod()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectMod")),new UScriptStruct::TCppStructOps<FGAEffectMod>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectMod;
	struct Z_Construct_UScriptStruct_FGAEffectMod_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectMod_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Final calculcated mod from effect, which can be modified by Calculation object. */" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Final calculcated mod from effect, which can be modified by Calculation object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectMod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectMod>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectMod_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAEffectMod_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectMod, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectMod_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectMod_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectMod_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectMod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectMod",
		sizeof(FGAEffectMod),
		alignof(FGAEffectMod),
		Z_Construct_UScriptStruct_FGAEffectMod_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectMod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectMod_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectMod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectMod()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectMod_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectMod"), sizeof(FGAEffectMod), Get_Z_Construct_UScriptStruct_FGAEffectMod_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectMod_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectMod_Hash() { return 396723114U; }
class UScriptStruct* FGAAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAAttribute, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAAttribute"), sizeof(FGAAttribute), Get_Z_Construct_UScriptStruct_FGAAttribute_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAAttribute>()
{
	return FGAAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAAttribute(FGAAttribute::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttribute
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAAttribute")),new UScriptStruct::TCppStructOps<FGAAttribute>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAAttribute;
	struct Z_Construct_UScriptStruct_FGAAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct representing single attribute. Needed for Pin customization.\n*\x09What we really need is to use this struct for making \"complex\" attributes.\n*\x09Which means attributes, which needs to track their own state.\n*\x09""Bonuses applied to them, types of bonues, and who applied those bonuses\n*\x09so we can properly remove them, get them, track them, and controll order\n*\x09in which theyare added.\n*\x09we will two have attributes types. Staless (transient), auxiallry attttributes\n*\x09""and staefull attributes, which are going to track their state.\n*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Struct representing single attribute. Needed for Pin customization.\nWhat we really need is to use this struct for making \"complex\" attributes.\nWhich means attributes, which needs to track their own state.\nBonuses applied to them, types of bonues, and who applied those bonuses\nso we can properly remove them, get them, track them, and controll order\nin which theyare added.\nwe will two have attributes types. Staless (transient), auxiallry attttributes\nand staefull attributes, which are going to track their state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "GAAttribute" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGAAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttribute_Statics::NewProp_AttributeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAAttribute_Statics::NewProp_AttributeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAAttribute",
		sizeof(FGAAttribute),
		alignof(FGAAttribute),
		Z_Construct_UScriptStruct_FGAAttribute_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAAttribute"), sizeof(FGAAttribute), Get_Z_Construct_UScriptStruct_FGAAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAAttribute_Hash() { return 3554244264U; }
class UScriptStruct* FGAIndividualMods::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAIndividualMods_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAIndividualMods, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAIndividualMods"), sizeof(FGAIndividualMods), Get_Z_Construct_UScriptStruct_FGAIndividualMods_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAIndividualMods>()
{
	return FGAIndividualMods::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAIndividualMods(FGAIndividualMods::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAIndividualMods"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAIndividualMods
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAIndividualMods()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAIndividualMods")),new UScriptStruct::TCppStructOps<FGAIndividualMods>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAIndividualMods;
	struct Z_Construct_UScriptStruct_FGAIndividualMods_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageSubtract_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageSubtract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Divide_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Divide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplicative_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplicative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtractive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Subtractive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Additive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAIndividualMods>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageSubtract_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageSubtract = { "PercentageSubtract", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIndividualMods, PercentageSubtract), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageSubtract_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageSubtract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageAdd_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageAdd = { "PercentageAdd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIndividualMods, PercentageAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageAdd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Divide_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Divide = { "Divide", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIndividualMods, Divide), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Divide_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Divide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Multiplicative_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Multiplicative = { "Multiplicative", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIndividualMods, Multiplicative), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Multiplicative_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Multiplicative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Subtractive_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Subtractive = { "Subtractive", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIndividualMods, Subtractive), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Subtractive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Subtractive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Additive_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAIndividualMods, Additive), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Additive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Additive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAIndividualMods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageSubtract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_PercentageAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Divide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Multiplicative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Subtractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAIndividualMods_Statics::NewProp_Additive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAIndividualMods_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAIndividualMods",
		sizeof(FGAIndividualMods),
		alignof(FGAIndividualMods),
		Z_Construct_UScriptStruct_FGAIndividualMods_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAIndividualMods_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAIndividualMods()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAIndividualMods_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAIndividualMods"), sizeof(FGAIndividualMods), Get_Z_Construct_UScriptStruct_FGAIndividualMods_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAIndividualMods_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAIndividualMods_Hash() { return 3341527649U; }
class UScriptStruct* FAFPredictionHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFPredictionHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFPredictionHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFPredictionHandle"), sizeof(FAFPredictionHandle), Get_Z_Construct_UScriptStruct_FAFPredictionHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFPredictionHandle>()
{
	return FAFPredictionHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFPredictionHandle(FAFPredictionHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFPredictionHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFPredictionHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFPredictionHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFPredictionHandle")),new UScriptStruct::TCppStructOps<FAFPredictionHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFPredictionHandle;
	struct Z_Construct_UScriptStruct_FAFPredictionHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPredictionValid_MetaData[];
#endif
		static void NewProp_bPredictionValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPredictionValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFPredictionHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Was prediction successful ?\n\x09\x09If true nothing happens on client (might interpolate to result from server).\n\x09\x09If false, server will override client predicted results.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Was prediction successful ?\nIf true nothing happens on client (might interpolate to result from server).\nIf false, server will override client predicted results." },
	};
#endif
	void Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid_SetBit(void* Obj)
	{
		((FAFPredictionHandle*)Obj)->bPredictionValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid = { "bPredictionValid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAFPredictionHandle), &Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_EffectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_EffectHandle = { "EffectHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFPredictionHandle, EffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_EffectHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_EffectHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "//ID of current handle.\n" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "ID of current handle." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFPredictionHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_Handle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_bPredictionValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_EffectHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFPredictionHandle",
		sizeof(FAFPredictionHandle),
		alignof(FAFPredictionHandle),
		Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFPredictionHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFPredictionHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFPredictionHandle"), sizeof(FAFPredictionHandle), Get_Z_Construct_UScriptStruct_FAFPredictionHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFPredictionHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFPredictionHandle_Hash() { return 1132100155U; }
class UScriptStruct* FGAEffectHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectHandle"), sizeof(FGAEffectHandle), Get_Z_Construct_UScriptStruct_FGAEffectHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectHandle>()
{
	return FGAEffectHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectHandle(FGAEffectHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectHandle")),new UScriptStruct::TCppStructOps<FGAEffectHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectHandle;
	struct Z_Construct_UScriptStruct_FGAEffectHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "GAEffectHandle" },
		{ "Comment", "//just to be safe we don't run out of numbers..\n" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "just to be safe we don't run out of numbers.." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGAEffectHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0020080000022001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectHandle_Statics::NewProp_Handle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectHandle",
		sizeof(FGAEffectHandle),
		alignof(FGAEffectHandle),
		Z_Construct_UScriptStruct_FGAEffectHandle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectHandle"), sizeof(FGAEffectHandle), Get_Z_Construct_UScriptStruct_FGAEffectHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectHandle_Hash() { return 1227440007U; }
class UScriptStruct* FGAEffectContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGAEffectContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAEffectContext, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GAEffectContext"), sizeof(FGAEffectContext), Get_Z_Construct_UScriptStruct_FGAEffectContext_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGAEffectContext>()
{
	return FGAEffectContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAEffectContext(FGAEffectContext::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GAEffectContext"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectContext
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAEffectContext")),new UScriptStruct::TCppStructOps<FGAEffectContext>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGAEffectContext;
	struct Z_Construct_UScriptStruct_FGAEffectContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_InstigatorComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_InstigatorAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetHitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAEffectContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorComp_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/**\n\x09*\x09""Attribute component of Intigator\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Attribute component of Intigator" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorComp = { "InstigatorComp", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, InstigatorComp), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorComp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetComp_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/**\n\x09*\x09""Attribute component of Target.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Attribute component of Target." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetComp = { "TargetComp", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, TargetComp), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetComp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Avatar_MetaData[] = {
		{ "Category", "Spec" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Avatar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/**\n\x09*\x09Pawn, which originally instigated effect (an owned AttributeComponent).\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Pawn, which originally instigated effect (an owned AttributeComponent)." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Instigator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Causer_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/**\n\x09*\x09Object which caused this effect. Might be ability, weapon, projectile etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Object which caused this effect. Might be ability, weapon, projectile etc." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Causer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Causer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/**\n\x09*\x09""Direct Reference to TargetActor (I will possibly remove FHitResult Target!\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Direct Reference to TargetActor (I will possibly remove FHitResult Target!" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorAttributes_MetaData[] = {
		{ "Category", "Spec" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorAttributes = { "InstigatorAttributes", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, InstigatorAttributes), Z_Construct_UClass_UGAAttributesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorAttributes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetAttributes_MetaData[] = {
		{ "Category", "Spec" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetAttributes = { "TargetAttributes", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, TargetAttributes), Z_Construct_UClass_UGAAttributesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetAttributes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetHitLocation_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/**\n\x09*\x09Where exactly we hit target.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Where exactly we hit target." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetHitLocation = { "TargetHitLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, TargetHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetHitLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetHitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_HitResult_MetaData[] = {
		{ "Category", "Spec" },
		{ "Comment", "/*\n\x09Just copy entire hit result struct.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
		{ "ToolTip", "Just copy entire hit result struct." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAEffectContext, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGAEffectContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_InstigatorAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_TargetHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGAEffectContext_Statics::NewProp_HitResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GAEffectContext",
		sizeof(FGAEffectContext),
		alignof(FGAEffectContext),
		Z_Construct_UScriptStruct_FGAEffectContext_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAEffectContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAEffectContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAEffectContext"), sizeof(FGAEffectContext), Get_Z_Construct_UScriptStruct_FGAEffectContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAEffectContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAEffectContext_Hash() { return 1842855332U; }
class UScriptStruct* FAFAtributeRowData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAtributeRowData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAtributeRowData, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAtributeRowData"), sizeof(FAFAtributeRowData), Get_Z_Construct_UScriptStruct_FAFAtributeRowData_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAtributeRowData>()
{
	return FAFAtributeRowData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAtributeRowData(FAFAtributeRowData::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAtributeRowData"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAtributeRowData
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAtributeRowData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAtributeRowData")),new UScriptStruct::TCppStructOps<FAFAtributeRowData>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAtributeRowData;
	struct Z_Construct_UScriptStruct_FAFAtributeRowData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAtributeRowData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_Extension_MetaData[] = {
		{ "Category", "AFAtributeRowData" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAtributeRowData, Extension), Z_Construct_UClass_UGAAttributeExtension_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_Extension_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "AFAtributeRowData" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAtributeRowData, CurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_CurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "AFAtributeRowData" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAtributeRowData, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "AFAtributeRowData" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAtributeRowData, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_BaseValue_MetaData[] = {
		{ "Category", "AFAtributeRowData" },
		{ "ModuleRelativePath", "Public/GAGlobalTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAtributeRowData, BaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_BaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_BaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_Extension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::NewProp_BaseValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AFAtributeRowData",
		sizeof(FAFAtributeRowData),
		alignof(FAFAtributeRowData),
		Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAtributeRowData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAtributeRowData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAtributeRowData"), sizeof(FAFAtributeRowData), Get_Z_Construct_UScriptStruct_FAFAtributeRowData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAtributeRowData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAtributeRowData_Hash() { return 2989420624U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
