// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_Repeat.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_Repeat() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_Repeat_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_Repeat();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_Repeat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "GASOnTaskRepeated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGAAbilityTask_Repeat::StaticRegisterNativesUGAAbilityTask_Repeat()
	{
		UClass* Class = UGAAbilityTask_Repeat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRepeatTask", &UGAAbilityTask_Repeat::execCreateRepeatTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics
	{
		struct GAAbilityTask_Repeat_eventCreateRepeatTask_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			UGAAbilityTask_Repeat* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_Repeat_eventCreateRepeatTask_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_Repeat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_Repeat_eventCreateRepeatTask_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_Repeat_eventCreateRepeatTask_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_Repeat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_Repeat, nullptr, "CreateRepeatTask", nullptr, nullptr, sizeof(GAAbilityTask_Repeat_eventCreateRepeatTask_Parms), Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_Repeat_NoRegister()
	{
		return UGAAbilityTask_Repeat::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_Repeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTaskRepeated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskRepeated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_Repeat_CreateRepeatTask, "CreateRepeatTask" }, // 1452254221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_Repeat.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_Repeat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::NewProp_OnTaskRepeated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_Repeat.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::NewProp_OnTaskRepeated = { "OnTaskRepeated", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_Repeat, OnTaskRepeated), Z_Construct_UDelegateFunction_AbilityFramework_GASOnTaskRepeated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::NewProp_OnTaskRepeated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::NewProp_OnTaskRepeated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::NewProp_OnTaskRepeated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_Repeat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::ClassParams = {
		&UGAAbilityTask_Repeat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_Repeat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_Repeat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_Repeat, 1200124392);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_Repeat>()
	{
		return UGAAbilityTask_Repeat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_Repeat(Z_Construct_UClass_UGAAbilityTask_Repeat, &UGAAbilityTask_Repeat::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_Repeat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_Repeat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
