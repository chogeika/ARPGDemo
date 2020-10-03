// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_WaitTargetData.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_WaitTargetData() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_WaitTargetData_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_WaitTargetData();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "GASOnTargetingTaskConfimred__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGAAbilityTask_WaitTargetData::StaticRegisterNativesUGAAbilityTask_WaitTargetData()
	{
		UClass* Class = UGAAbilityTask_WaitTargetData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConfirm", &UGAAbilityTask_WaitTargetData::execOnConfirm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_WaitTargetData, nullptr, "OnConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_WaitTargetData_NoRegister()
	{
		return UGAAbilityTask_WaitTargetData::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConfirmed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_WaitTargetData_OnConfirm, "OnConfirm" }, // 1305902219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ExposedAsyncProxy", "" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_WaitTargetData.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitTargetData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_Range_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_WaitTargetData, Range), METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_OnConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_OnConfirmed = { "OnConfirmed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_WaitTargetData, OnConfirmed), Z_Construct_UDelegateFunction_AbilityFramework_GASOnTargetingTaskConfimred__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_OnConfirmed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_OnConfirmed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::NewProp_OnConfirmed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_WaitTargetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::ClassParams = {
		&UGAAbilityTask_WaitTargetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_WaitTargetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_WaitTargetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_WaitTargetData, 1748340100);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_WaitTargetData>()
	{
		return UGAAbilityTask_WaitTargetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_WaitTargetData(Z_Construct_UClass_UGAAbilityTask_WaitTargetData, &UGAAbilityTask_WaitTargetData::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_WaitTargetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_WaitTargetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
