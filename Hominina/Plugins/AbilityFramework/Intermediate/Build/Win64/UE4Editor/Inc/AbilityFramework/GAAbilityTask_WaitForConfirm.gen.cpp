// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_WaitForConfirm.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_WaitForConfirm() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_WaitForConfirm();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitForConfirm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "GASOnConfirmed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGAAbilityTask_WaitForConfirm::StaticRegisterNativesUGAAbilityTask_WaitForConfirm()
	{
		UClass* Class = UGAAbilityTask_WaitForConfirm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWaitConfirmTask", &UGAAbilityTask_WaitForConfirm::execCreateWaitConfirmTask },
			{ "OnConfirm", &UGAAbilityTask_WaitForConfirm::execOnConfirm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics
	{
		struct GAAbilityTask_WaitForConfirm_eventCreateWaitConfirmTask_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			UGAAbilityTask_WaitForConfirm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_WaitForConfirm_eventCreateWaitConfirmTask_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_WaitForConfirm_eventCreateWaitConfirmTask_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_WaitForConfirm_eventCreateWaitConfirmTask_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitForConfirm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_WaitForConfirm, nullptr, "CreateWaitConfirmTask", nullptr, nullptr, sizeof(GAAbilityTask_WaitForConfirm_eventCreateWaitConfirmTask_Parms), Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitForConfirm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_WaitForConfirm, nullptr, "OnConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_NoRegister()
	{
		return UGAAbilityTask_WaitForConfirm::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConfirmed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_CreateWaitConfirmTask, "CreateWaitConfirmTask" }, // 2225840229
		{ &Z_Construct_UFunction_UGAAbilityTask_WaitForConfirm_OnConfirm, "OnConfirm" }, // 1581242761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_WaitForConfirm.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitForConfirm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::NewProp_OnConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitForConfirm.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::NewProp_OnConfirmed = { "OnConfirmed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_WaitForConfirm, OnConfirmed), Z_Construct_UDelegateFunction_AbilityFramework_GASOnConfirmed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::NewProp_OnConfirmed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::NewProp_OnConfirmed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::NewProp_OnConfirmed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_WaitForConfirm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::ClassParams = {
		&UGAAbilityTask_WaitForConfirm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_WaitForConfirm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_WaitForConfirm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_WaitForConfirm, 1031594691);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_WaitForConfirm>()
	{
		return UGAAbilityTask_WaitForConfirm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_WaitForConfirm(Z_Construct_UClass_UGAAbilityTask_WaitForConfirm, &UGAAbilityTask_WaitForConfirm::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_WaitForConfirm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_WaitForConfirm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
