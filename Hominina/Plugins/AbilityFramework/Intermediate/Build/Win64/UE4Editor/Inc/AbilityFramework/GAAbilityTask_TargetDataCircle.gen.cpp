// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_TargetDataCircle.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_TargetDataCircle() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataCircle();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetData();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGASConfirmType();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature();
// End Cross Module References
	void UGAAbilityTask_TargetDataCircle::StaticRegisterNativesUGAAbilityTask_TargetDataCircle()
	{
		UClass* Class = UGAAbilityTask_TargetDataCircle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TargetCircleDataTask", &UGAAbilityTask_TargetDataCircle::execTargetCircleDataTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics
	{
		struct GAAbilityTask_TargetDataCircle_eventTargetCircleDataTask_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			EGASConfirmType ConfirmTypeIn;
			UGAAbilityTask_TargetDataCircle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConfirmTypeIn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfirmTypeIn_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataCircle_eventTargetCircleDataTask_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_ConfirmTypeIn = { "ConfirmTypeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataCircle_eventTargetCircleDataTask_Parms, ConfirmTypeIn), Z_Construct_UEnum_AbilityFramework_EGASConfirmType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_ConfirmTypeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataCircle_eventTargetCircleDataTask_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataCircle_eventTargetCircleDataTask_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_ConfirmTypeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_ConfirmTypeIn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataCircle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetDataCircle, nullptr, "TargetCircleDataTask", nullptr, nullptr, sizeof(GAAbilityTask_TargetDataCircle_eventTargetCircleDataTask_Parms), Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_NoRegister()
	{
		return UGAAbilityTask_TargetDataCircle::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceiveTargetDataCircle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveTargetDataCircle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask_TargetData,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetDataCircle_TargetCircleDataTask, "TargetCircleDataTask" }, // 502119382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_TargetDataCircle.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataCircle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::NewProp_OnReceiveTargetDataCircle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataCircle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::NewProp_OnReceiveTargetDataCircle = { "OnReceiveTargetDataCircle", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_TargetDataCircle, OnReceiveTargetDataCircle), Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::NewProp_OnReceiveTargetDataCircle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::NewProp_OnReceiveTargetDataCircle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::NewProp_OnReceiveTargetDataCircle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_TargetDataCircle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::ClassParams = {
		&UGAAbilityTask_TargetDataCircle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataCircle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_TargetDataCircle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_TargetDataCircle, 2872056265);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_TargetDataCircle>()
	{
		return UGAAbilityTask_TargetDataCircle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_TargetDataCircle(Z_Construct_UClass_UGAAbilityTask_TargetDataCircle, &UGAAbilityTask_TargetDataCircle::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_TargetDataCircle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_TargetDataCircle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
