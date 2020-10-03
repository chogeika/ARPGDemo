// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_SpawnActor() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_SpawnActor_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_SpawnActor();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics
	{
		struct _Script_AbilityFramework_eventGASSpawnActorDelegate_Parms
		{
			AActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventGASSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "GASSpawnActorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AbilityFramework_eventGASSpawnActorDelegate_Parms), Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGAAbilityTask_SpawnActor::StaticRegisterNativesUGAAbilityTask_SpawnActor()
	{
		UClass* Class = UGAAbilityTask_SpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UGAAbilityTask_SpawnActor::execBeginSpawningActor },
			{ "FinishSpawningActor", &UGAAbilityTask_SpawnActor::execFinishSpawningActor },
			{ "SpawnActor", &UGAAbilityTask_SpawnActor::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics
	{
		struct GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms
		{
			UGAAbilityBase* WorldContextObject;
			TSubclassOf<AActor>  Class;
			AActor* SpawnedActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_SpawnActor, nullptr, "BeginSpawningActor", nullptr, nullptr, sizeof(GAAbilityTask_SpawnActor_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics
	{
		struct GAAbilityTask_SpawnActor_eventFinishSpawningActor_Parms
		{
			UGAAbilityBase* WorldContextObject;
			AActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventFinishSpawningActor_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_SpawnActor, nullptr, "FinishSpawningActor", nullptr, nullptr, sizeof(GAAbilityTask_SpawnActor_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics
	{
		struct GAAbilityTask_SpawnActor_eventSpawnActor_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			TSubclassOf<AActor>  Class;
			UGAAbilityTask_SpawnActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_SpawnActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventSpawnActor_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventSpawnActor_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_SpawnActor_eventSpawnActor_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_SpawnActor, nullptr, "SpawnActor", nullptr, nullptr, sizeof(GAAbilityTask_SpawnActor_eventSpawnActor_Parms), Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_SpawnActor_NoRegister()
	{
		return UGAAbilityTask_SpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_SpawnActor_BeginSpawningActor, "BeginSpawningActor" }, // 116099071
		{ &Z_Construct_UFunction_UGAAbilityTask_SpawnActor_FinishSpawningActor, "FinishSpawningActor" }, // 2025021161
		{ &Z_Construct_UFunction_UGAAbilityTask_SpawnActor_SpawnActor, "SpawnActor" }, // 535179268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_SpawnActor, Failure), Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Failure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Failure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_SpawnActor, Success), Z_Construct_UDelegateFunction_AbilityFramework_GASSpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Success_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Success_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Failure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_SpawnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::ClassParams = {
		&UGAAbilityTask_SpawnActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_SpawnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_SpawnActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_SpawnActor, 1638440347);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_SpawnActor>()
	{
		return UGAAbilityTask_SpawnActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_SpawnActor(Z_Construct_UClass_UGAAbilityTask_SpawnActor, &UGAAbilityTask_SpawnActor::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_SpawnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_SpawnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
