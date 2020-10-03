// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GABlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGABlueprintLibrary() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGABlueprintLibrary_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGABlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpecHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPropertytHandle();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFFunctionModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_GetContext();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContext();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFContextHandle();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple();
// End Cross Module References
	void UGABlueprintLibrary::StaticRegisterNativesUGABlueprintLibrary()
	{
		UClass* Class = UGABlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectFromSpec", &UGABlueprintLibrary::execApplyEffectFromSpec },
			{ "ApplyGameEffectToActor", &UGABlueprintLibrary::execApplyGameEffectToActor },
			{ "ApplyGameEffectToActors", &UGABlueprintLibrary::execApplyGameEffectToActors },
			{ "ApplyGameEffectToLocation", &UGABlueprintLibrary::execApplyGameEffectToLocation },
			{ "ApplyGameEffectToObject", &UGABlueprintLibrary::execApplyGameEffectToObject },
			{ "ApplyGameEffectToObjects", &UGABlueprintLibrary::execApplyGameEffectToObjects },
			{ "ApplyGameEffectToTargets", &UGABlueprintLibrary::execApplyGameEffectToTargets },
			{ "BroadcastEffectEvent", &UGABlueprintLibrary::execBroadcastEffectEvent },
			{ "CreateEffectSpec", &UGABlueprintLibrary::execCreateEffectSpec },
			{ "GetContext", &UGABlueprintLibrary::execGetContext },
			{ "GetInstigatorComponent", &UGABlueprintLibrary::execGetInstigatorComponent },
			{ "GetTargetComponent", &UGABlueprintLibrary::execGetTargetComponent },
			{ "ModifyAttributeSimple", &UGABlueprintLibrary::execModifyAttributeSimple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics
	{
		struct GABlueprintLibrary_eventApplyEffectFromSpec_Parms
		{
			FAFPropertytHandle InEffect;
			FAFEffectSpecHandle InSpec;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSpec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::NewProp_InSpec = { "InSpec", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyEffectFromSpec_Parms, InSpec), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyEffectFromSpec_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::NewProp_InSpec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyEffectFromSpec", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyEffectFromSpec_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics
	{
		struct GABlueprintLibrary_eventApplyGameEffectToActor_Parms
		{
			FAFPropertytHandle InEffect;
			AActor* Target;
			APawn* Instigator;
			UObject* Causer;
			FAFFunctionModifier Modifier;
			TArray<FGAEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActor_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Modifier_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActor_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActor_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActor_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "Comment", "/*\n\x09\x09Makes outgoing effect spec and assign handle to it.\n\x09\x09If valid handle is provided it will instead reuse existing effect spec from handle,\n\x09\x09""and just change context of effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
		{ "ToolTip", "Makes outgoing effect spec and assign handle to it.\nIf valid handle is provided it will instead reuse existing effect spec from handle,\nand just change context of effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyGameEffectToActor", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyGameEffectToActor_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics
	{
		struct GABlueprintLibrary_eventApplyGameEffectToActors_Parms
		{
			FAFPropertytHandle InEffect;
			TArray<AActor*> Targets;
			APawn* Instigator;
			UObject* Causer;
			FAFFunctionModifier Modifier;
			TArray<FGAEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActors_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Modifier_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActors_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActors_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActors_Parms, Targets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToActors_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyGameEffectToActors", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyGameEffectToActors_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics
	{
		struct GABlueprintLibrary_eventApplyGameEffectToLocation_Parms
		{
			FAFPropertytHandle InEffect;
			FHitResult Target;
			APawn* Instigator;
			UObject* Causer;
			FAFFunctionModifier Modifier;
			TArray<FGAEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Modifier_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms, Target), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "Comment", "/*\n\x09\x09Makes outgoing effect spec and assign handle to it.\n\x09\x09If valid handle is provided it will instead reuse existing effect spec from handle,\n\x09\x09""and just change context of effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
		{ "ToolTip", "Makes outgoing effect spec and assign handle to it.\nIf valid handle is provided it will instead reuse existing effect spec from handle,\nand just change context of effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyGameEffectToLocation", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyGameEffectToLocation_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics
	{
		struct GABlueprintLibrary_eventApplyGameEffectToObject_Parms
		{
			FAFPropertytHandle InEffect;
			UObject* Target;
			APawn* Instigator;
			UObject* Causer;
			FAFFunctionModifier Modifier;
			TArray<FGAEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObject_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Modifier_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObject_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObject_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObject_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObject_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyGameEffectToObject", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyGameEffectToObject_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics
	{
		struct GABlueprintLibrary_eventApplyGameEffectToObjects_Parms
		{
			FAFPropertytHandle InEffect;
			TArray<UObject*> Targets;
			APawn* Instigator;
			UObject* Causer;
			FAFFunctionModifier Modifier;
			TArray<FGAEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Modifier_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms, Targets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyGameEffectToObjects", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyGameEffectToObjects_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics
	{
		struct GABlueprintLibrary_eventApplyGameEffectToTargets_Parms
		{
			FAFPropertytHandle InEffect;
			TArray<FHitResult> Targets;
			APawn* Instigator;
			UObject* Causer;
			FAFFunctionModifier Modifier;
			TArray<FGAEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Modifier_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms, Targets), METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::NewProp_InEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "Comment", "/*\n\x09Makes outgoing effect spec and assign handle to it.\n\x09If valid handle is provided it will instead reuse existing effect spec from handle,\n\x09""and just change context of effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
		{ "ToolTip", "Makes outgoing effect spec and assign handle to it.\nIf valid handle is provided it will instead reuse existing effect spec from handle,\nand just change context of effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ApplyGameEffectToTargets", nullptr, nullptr, sizeof(GABlueprintLibrary_eventApplyGameEffectToTargets_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics
	{
		struct GABlueprintLibrary_eventBroadcastEffectEvent_Parms
		{
			UObject* Target;
			FGameplayTag EventTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventBroadcastEffectEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventBroadcastEffectEvent_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "BroadcastEffectEvent", nullptr, nullptr, sizeof(GABlueprintLibrary_eventBroadcastEffectEvent_Parms), Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics
	{
		struct GABlueprintLibrary_eventCreateEffectSpec_Parms
		{
			FAFEffectSpecHandle InOutSpec;
			FAFPropertytHandle InEffect;
			UObject* Target;
			APawn* Instigator;
			UObject* Causer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEffect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventCreateEffectSpec_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventCreateEffectSpec_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventCreateEffectSpec_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventCreateEffectSpec_Parms, InEffect), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InEffect_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InEffect_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InOutSpec = { "InOutSpec", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventCreateEffectSpec_Parms, InOutSpec), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::NewProp_InOutSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "CreateEffectSpec", nullptr, nullptr, sizeof(GABlueprintLibrary_eventCreateEffectSpec_Parms), Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics
	{
		struct GABlueprintLibrary_eventGetContext_Parms
		{
			FAFContextHandle InHandle;
			FGAEffectContext ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventGetContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FGAEffectContext, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventGetContext_Parms, InHandle), Z_Construct_UScriptStruct_FAFContextHandle, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_InHandle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_InHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::NewProp_InHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "GetContext", nullptr, nullptr, sizeof(GABlueprintLibrary_eventGetContext_Parms), Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics
	{
		struct GABlueprintLibrary_eventGetInstigatorComponent_Parms
		{
			FGAEffectHandle InHandle;
			UAFAbilityComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventGetInstigatorComponent_Parms, ReturnValue), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventGetInstigatorComponent_Parms, InHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_InHandle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_InHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::NewProp_InHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "GetInstigatorComponent", nullptr, nullptr, sizeof(GABlueprintLibrary_eventGetInstigatorComponent_Parms), Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics
	{
		struct GABlueprintLibrary_eventGetTargetComponent_Parms
		{
			FGAEffectHandle InHandle;
			UAFAbilityComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventGetTargetComponent_Parms, ReturnValue), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventGetTargetComponent_Parms, InHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_InHandle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_InHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::NewProp_InHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "GetTargetComponent", nullptr, nullptr, sizeof(GABlueprintLibrary_eventGetTargetComponent_Parms), Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics
	{
		struct GABlueprintLibrary_eventModifyAttributeSimple_Parms
		{
			FAFEffectSpecHandle InSpec;
			UObject* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventModifyAttributeSimple_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::NewProp_InSpec = { "InSpec", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABlueprintLibrary_eventModifyAttributeSimple_Parms, InSpec), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::NewProp_InSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABlueprintLibrary, nullptr, "ModifyAttributeSimple", nullptr, nullptr, sizeof(GABlueprintLibrary_eventModifyAttributeSimple_Parms), Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGABlueprintLibrary_NoRegister()
	{
		return UGABlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGABlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGABlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGABlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyEffectFromSpec, "ApplyEffectFromSpec" }, // 694964322
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActor, "ApplyGameEffectToActor" }, // 1582245374
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToActors, "ApplyGameEffectToActors" }, // 1866031404
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToLocation, "ApplyGameEffectToLocation" }, // 3276619746
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObject, "ApplyGameEffectToObject" }, // 2528570694
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToObjects, "ApplyGameEffectToObjects" }, // 396339796
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ApplyGameEffectToTargets, "ApplyGameEffectToTargets" }, // 487263430
		{ &Z_Construct_UFunction_UGABlueprintLibrary_BroadcastEffectEvent, "BroadcastEffectEvent" }, // 2961830651
		{ &Z_Construct_UFunction_UGABlueprintLibrary_CreateEffectSpec, "CreateEffectSpec" }, // 1656909165
		{ &Z_Construct_UFunction_UGABlueprintLibrary_GetContext, "GetContext" }, // 866411582
		{ &Z_Construct_UFunction_UGABlueprintLibrary_GetInstigatorComponent, "GetInstigatorComponent" }, // 1334189980
		{ &Z_Construct_UFunction_UGABlueprintLibrary_GetTargetComponent, "GetTargetComponent" }, // 3902970048
		{ &Z_Construct_UFunction_UGABlueprintLibrary_ModifyAttributeSimple, "ModifyAttributeSimple" }, // 2918951698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGABlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Effects/GABlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GABlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGABlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGABlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGABlueprintLibrary_Statics::ClassParams = {
		&UGABlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGABlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGABlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGABlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGABlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGABlueprintLibrary, 1265698156);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGABlueprintLibrary>()
	{
		return UGABlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGABlueprintLibrary(Z_Construct_UClass_UGABlueprintLibrary, &UGABlueprintLibrary::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGABlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGABlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
