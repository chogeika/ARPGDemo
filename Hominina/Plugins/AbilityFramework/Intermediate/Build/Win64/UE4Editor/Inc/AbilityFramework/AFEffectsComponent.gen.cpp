// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFEffectsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectsComponent() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPredictionHandle();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFCueHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectCueParams();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAGameEffectSpec_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACountedTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FName NAME_UAFEffectsComponent_ClientExpireEffect = FName(TEXT("ClientExpireEffect"));
	void UAFEffectsComponent::ClientExpireEffect(FAFPredictionHandle PredictionHandle)
	{
		AFEffectsComponent_eventClientExpireEffect_Parms Parms;
		Parms.PredictionHandle=PredictionHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_ClientExpireEffect),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastApplyEffectCue = FName(TEXT("MulticastApplyEffectCue"));
	void UAFEffectsComponent::MulticastApplyEffectCue(FGAEffectCueParams CueParams, FAFCueHandle InHandle)
	{
		AFEffectsComponent_eventMulticastApplyEffectCue_Parms Parms;
		Parms.CueParams=CueParams;
		Parms.InHandle=InHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastApplyEffectCue),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastExecuteEffectCue = FName(TEXT("MulticastExecuteEffectCue"));
	void UAFEffectsComponent::MulticastExecuteEffectCue(TSubclassOf<UGAGameEffectSpec>  EffectSpec, FGAEffectCueParams CueParams)
	{
		AFEffectsComponent_eventMulticastExecuteEffectCue_Parms Parms;
		Parms.EffectSpec=EffectSpec;
		Parms.CueParams=CueParams;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastExecuteEffectCue),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastExtendDurationCue = FName(TEXT("MulticastExtendDurationCue"));
	void UAFEffectsComponent::MulticastExtendDurationCue(FGAEffectHandle EffectHandle, float NewDurationIn)
	{
		AFEffectsComponent_eventMulticastExtendDurationCue_Parms Parms;
		Parms.EffectHandle=EffectHandle;
		Parms.NewDurationIn=NewDurationIn;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastExtendDurationCue),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastRemoveEffectCue = FName(TEXT("MulticastRemoveEffectCue"));
	void UAFEffectsComponent::MulticastRemoveEffectCue(FGAEffectCueParams CueParams, FAFCueHandle InHandle)
	{
		AFEffectsComponent_eventMulticastRemoveEffectCue_Parms Parms;
		Parms.CueParams=CueParams;
		Parms.InHandle=InHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastRemoveEffectCue),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastUpdateDurationCue = FName(TEXT("MulticastUpdateDurationCue"));
	void UAFEffectsComponent::MulticastUpdateDurationCue(FGAEffectHandle EffectHandle, float NewDurationIn)
	{
		AFEffectsComponent_eventMulticastUpdateDurationCue_Parms Parms;
		Parms.EffectHandle=EffectHandle;
		Parms.NewDurationIn=NewDurationIn;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastUpdateDurationCue),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastUpdatePeriodCue = FName(TEXT("MulticastUpdatePeriodCue"));
	void UAFEffectsComponent::MulticastUpdatePeriodCue(FGAEffectHandle EffectHandle, float NewPeriodIn)
	{
		AFEffectsComponent_eventMulticastUpdatePeriodCue_Parms Parms;
		Parms.EffectHandle=EffectHandle;
		Parms.NewPeriodIn=NewPeriodIn;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastUpdatePeriodCue),&Parms);
	}
	static FName NAME_UAFEffectsComponent_MulticastUpdateTimersCue = FName(TEXT("MulticastUpdateTimersCue"));
	void UAFEffectsComponent::MulticastUpdateTimersCue(FGAEffectHandle EffectHandle, float NewDurationIn, float NewPeriodIn)
	{
		AFEffectsComponent_eventMulticastUpdateTimersCue_Parms Parms;
		Parms.EffectHandle=EffectHandle;
		Parms.NewDurationIn=NewDurationIn;
		Parms.NewPeriodIn=NewPeriodIn;
		ProcessEvent(FindFunctionChecked(NAME_UAFEffectsComponent_MulticastUpdateTimersCue),&Parms);
	}
	void UAFEffectsComponent::StaticRegisterNativesUAFEffectsComponent()
	{
		UClass* Class = UAFEffectsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientExpireEffect", &UAFEffectsComponent::execClientExpireEffect },
			{ "MulticastApplyEffectCue", &UAFEffectsComponent::execMulticastApplyEffectCue },
			{ "MulticastExecuteEffectCue", &UAFEffectsComponent::execMulticastExecuteEffectCue },
			{ "MulticastExtendDurationCue", &UAFEffectsComponent::execMulticastExtendDurationCue },
			{ "MulticastRemoveEffectCue", &UAFEffectsComponent::execMulticastRemoveEffectCue },
			{ "MulticastUpdateDurationCue", &UAFEffectsComponent::execMulticastUpdateDurationCue },
			{ "MulticastUpdatePeriodCue", &UAFEffectsComponent::execMulticastUpdatePeriodCue },
			{ "MulticastUpdateTimersCue", &UAFEffectsComponent::execMulticastUpdateTimersCue },
			{ "OnRep_GameEffectContainer", &UAFEffectsComponent::execOnRep_GameEffectContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::NewProp_PredictionHandle = { "PredictionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventClientExpireEffect_Parms, PredictionHandle), Z_Construct_UScriptStruct_FAFPredictionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::NewProp_PredictionHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "ClientExpireEffect", nullptr, nullptr, sizeof(AFEffectsComponent_eventClientExpireEffect_Parms), Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastApplyEffectCue_Parms, InHandle), Z_Construct_UScriptStruct_FAFCueHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::NewProp_CueParams = { "CueParams", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastApplyEffectCue_Parms, CueParams), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::NewProp_InHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::NewProp_CueParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastApplyEffectCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastApplyEffectCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueParams;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::NewProp_CueParams = { "CueParams", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastExecuteEffectCue_Parms, CueParams), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastExecuteEffectCue_Parms, EffectSpec), Z_Construct_UClass_UGAGameEffectSpec_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::NewProp_CueParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::NewProp_EffectSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastExecuteEffectCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastExecuteEffectCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDurationIn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::NewProp_NewDurationIn = { "NewDurationIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastExtendDurationCue_Parms, NewDurationIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::NewProp_EffectHandle = { "EffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastExtendDurationCue_Parms, EffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::NewProp_NewDurationIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::NewProp_EffectHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastExtendDurationCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastExtendDurationCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastRemoveEffectCue_Parms, InHandle), Z_Construct_UScriptStruct_FAFCueHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::NewProp_CueParams = { "CueParams", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastRemoveEffectCue_Parms, CueParams), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::NewProp_InHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::NewProp_CueParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastRemoveEffectCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastRemoveEffectCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDurationIn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::NewProp_NewDurationIn = { "NewDurationIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdateDurationCue_Parms, NewDurationIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::NewProp_EffectHandle = { "EffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdateDurationCue_Parms, EffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::NewProp_NewDurationIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::NewProp_EffectHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastUpdateDurationCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastUpdateDurationCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPeriodIn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::NewProp_NewPeriodIn = { "NewPeriodIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdatePeriodCue_Parms, NewPeriodIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::NewProp_EffectHandle = { "EffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdatePeriodCue_Parms, EffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::NewProp_NewPeriodIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::NewProp_EffectHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastUpdatePeriodCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastUpdatePeriodCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPeriodIn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDurationIn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::NewProp_NewPeriodIn = { "NewPeriodIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdateTimersCue_Parms, NewPeriodIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::NewProp_NewDurationIn = { "NewDurationIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdateTimersCue_Parms, NewDurationIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::NewProp_EffectHandle = { "EffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectsComponent_eventMulticastUpdateTimersCue_Parms, EffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::NewProp_NewPeriodIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::NewProp_NewDurationIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::NewProp_EffectHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "MulticastUpdateTimersCue", nullptr, nullptr, sizeof(AFEffectsComponent_eventMulticastUpdateTimersCue_Parms), Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectsComponent, nullptr, "OnRep_GameEffectContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister()
	{
		return UAFEffectsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameEffectContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameEffectContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImmunityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImmunityTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppliedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFEffectsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFEffectsComponent_ClientExpireEffect, "ClientExpireEffect" }, // 3631265991
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastApplyEffectCue, "MulticastApplyEffectCue" }, // 458222959
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastExecuteEffectCue, "MulticastExecuteEffectCue" }, // 2124208398
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastExtendDurationCue, "MulticastExtendDurationCue" }, // 3364680607
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastRemoveEffectCue, "MulticastRemoveEffectCue" }, // 305856458
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateDurationCue, "MulticastUpdateDurationCue" }, // 4135167327
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdatePeriodCue, "MulticastUpdatePeriodCue" }, // 2305829645
		{ &Z_Construct_UFunction_UAFEffectsComponent_MulticastUpdateTimersCue, "MulticastUpdateTimersCue" }, // 2970172495
		{ &Z_Construct_UFunction_UAFEffectsComponent_OnRep_GameEffectContainer, "OnRep_GameEffectContainer" }, // 3979462447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AFEffectsComponent.h" },
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_GameEffectContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_GameEffectContainer = { "GameEffectContainer", "OnRep_GameEffectContainer", (EPropertyFlags)0x0040008100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectsComponent, GameEffectContainer), Z_Construct_UScriptStruct_FGAEffectContainer, METADATA_PARAMS(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_GameEffectContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_GameEffectContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_ImmunityTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_ImmunityTags = { "ImmunityTags", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectsComponent, ImmunityTags), Z_Construct_UScriptStruct_FGACountedTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_ImmunityTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_ImmunityTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_AppliedTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_AppliedTags = { "AppliedTags", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectsComponent, AppliedTags), Z_Construct_UScriptStruct_FGACountedTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_AppliedTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_AppliedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_DefaultTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/AFEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_DefaultTags = { "DefaultTags", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectsComponent, DefaultTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_DefaultTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_DefaultTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFEffectsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_GameEffectContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_ImmunityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_AppliedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectsComponent_Statics::NewProp_DefaultTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectsComponent_Statics::ClassParams = {
		&UAFEffectsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAFEffectsComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAFEffectsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectsComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectsComponent, 127623527);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectsComponent>()
	{
		return UAFEffectsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectsComponent(Z_Construct_UClass_UAFEffectsComponent, &UAFEffectsComponent::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
