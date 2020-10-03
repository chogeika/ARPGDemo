// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYFRAMEWORK_GAGlobalTypes_generated_h
#error "GAGlobalTypes.generated.h already included, missing '#pragma once' in GAGlobalTypes.h"
#endif
#define ABILITYFRAMEWORK_GAGlobalTypes_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_774_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFCueHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Handle() { return STRUCT_OFFSET(FAFCueHandle, Handle); }


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFCueHandle>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_744_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAEffectCueParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAEffectCueParams>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_690_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGACountedTagContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGACountedTagContainer>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_654_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAModifier_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAModifier>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_634_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFAttributeChangedData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFAttributeChangedData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_553_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAEffectMod_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAEffectMod>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_506_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAAttribute>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_455_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAIndividualMods_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAIndividualMods>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_372_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFPredictionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFPredictionHandle>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAEffectHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Handle() { return STRUCT_OFFSET(FGAEffectHandle, Handle); }


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAEffectHandle>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAEffectContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAEffectContext>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFAtributeRowData_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFAtributeRowData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_GAGlobalTypes_h


#define FOREACH_ENUM_EGAEFFECTAGGREGATION(op) \
	op(EGAEffectAggregation::AggregateByInstigator) \
	op(EGAEffectAggregation::AggregateByTarget) 

enum class EGAEffectAggregation : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAEffectAggregation>();

#define FOREACH_ENUM_EGAMAGNITUDECALCULATION(op) \
	op(EGAMagnitudeCalculation::Direct) \
	op(EGAMagnitudeCalculation::AttributeBased) \
	op(EGAMagnitudeCalculation::CurveBased) \
	op(EGAMagnitudeCalculation::CustomCalculation) \
	op(EGAMagnitudeCalculation::Invalid) 

enum class EGAMagnitudeCalculation : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAMagnitudeCalculation>();

#define FOREACH_ENUM_EGAEFFECTSTACKING(op) \
	op(EGAEffectStacking::Add) \
	op(EGAEffectStacking::Duration) \
	op(EGAEffectStacking::Override) \
	op(EGAEffectStacking::Intensity) 

enum class EGAEffectStacking : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAEffectStacking>();

#define FOREACH_ENUM_EGAEFFECTTYPE(op) \
	op(EGAEffectType::Instant) \
	op(EGAEffectType::Duration) \
	op(EGAEffectType::Infinite) 

enum class EGAEffectType : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAEffectType>();

#define FOREACH_ENUM_EGAATTRIBUTEVALUE(op) \
	op(EGAAttributeValue::Base) \
	op(EGAAttributeValue::Current) \
	op(EGAAttributeValue::Final) \
	op(EGAAttributeValue::Bonus) 

enum class EGAAttributeValue : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAAttributeValue>();

#define FOREACH_ENUM_EGAMODIFIERTARGET(op) \
	op(EGAModifierTarget::Instigator) \
	op(EGAModifierTarget::Target) 

enum class EGAModifierTarget : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAModifierTarget>();

#define FOREACH_ENUM_EGAATTRIBUTESOURCE(op) \
	op(EGAAttributeSource::Instigator) \
	op(EGAAttributeSource::Target) \
	op(EGAAttributeSource::Causer) \
	op(EGAAttributeSource::Ability) 

enum class EGAAttributeSource : uint8;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAAttributeSource>();

#define FOREACH_ENUM_EGAATTRIBUTEMOD(op) \
	op(EGAAttributeMod::Add) \
	op(EGAAttributeMod::Subtract) \
	op(EGAAttributeMod::Multiply) \
	op(EGAAttributeMod::Divide) \
	op(EGAAttributeMod::Set) \
	op(EGAAttributeMod::PercentageAdd) \
	op(EGAAttributeMod::PercentageSubtract) \
	op(EGAAttributeMod::Invalid) 

enum class EGAAttributeMod : int32;
template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGAAttributeMod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
