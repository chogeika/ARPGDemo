// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_PlayMontage() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_PlayMontage_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_PlayMontage();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics
	{
		struct _Script_AbilityFramework_eventGASGenericMontageDelegate_Parms
		{
			FGameplayTag Tag;
			FName NotifyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventGASGenericMontageDelegate_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventGASGenericMontageDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "GASGenericMontageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AbilityFramework_eventGASGenericMontageDelegate_Parms), Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGAAbilityTask_PlayMontage::StaticRegisterNativesUGAAbilityTask_PlayMontage()
	{
		UClass* Class = UGAAbilityTask_PlayMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityPlayMontage", &UGAAbilityTask_PlayMontage::execAbilityPlayMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics
	{
		struct GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			UAnimMontage* MontageIn;
			FName SectionNameIn;
			float PlayRateIn;
			bool bInUseActivationTime;
			UGAAbilityTask_PlayMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bInUseActivationTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseActivationTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRateIn;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionNameIn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageIn;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_PlayMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_bInUseActivationTime_SetBit(void* Obj)
	{
		((GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms*)Obj)->bInUseActivationTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_bInUseActivationTime = { "bInUseActivationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms), &Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_bInUseActivationTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_PlayRateIn = { "PlayRateIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms, PlayRateIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_SectionNameIn = { "SectionNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms, SectionNameIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_MontageIn = { "MontageIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms, MontageIn), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_bInUseActivationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_PlayRateIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_SectionNameIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_MontageIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_PlayMontage, nullptr, "AbilityPlayMontage", nullptr, nullptr, sizeof(GAAbilityTask_PlayMontage_eventAbilityPlayMontage_Parms), Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_PlayMontage_NoRegister()
	{
		return UGAAbilityTask_PlayMontage::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Played_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Played;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_PlayMontage_AbilityPlayMontage, "AbilityPlayMontage" }, // 2276090671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyEnd = { "NotifyEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_PlayMontage, NotifyEnd), Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyTick = { "NotifyTick", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_PlayMontage, NotifyTick), Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyBegin = { "NotifyBegin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_PlayMontage, NotifyBegin), Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyBegin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Played_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Played = { "Played", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_PlayMontage, Played), Z_Construct_UDelegateFunction_AbilityFramework_GASGenericMontageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Played_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Played_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "GAAbilityTask_PlayMontage" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_PlayMontage, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_NotifyBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Played,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::NewProp_Montage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_PlayMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::ClassParams = {
		&UGAAbilityTask_PlayMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_PlayMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_PlayMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_PlayMontage, 3329721316);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_PlayMontage>()
	{
		return UGAAbilityTask_PlayMontage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_PlayMontage(Z_Construct_UClass_UGAAbilityTask_PlayMontage, &UGAAbilityTask_PlayMontage::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_PlayMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_PlayMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
