// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_TargetData.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_TargetData() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EGASConfirmType();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetData_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetData();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics
	{
		struct _Script_AbilityFramework_eventGASOnReceiveTargetData_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventGASOnReceiveTargetData_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "GASOnReceiveTargetData__DelegateSignature", nullptr, nullptr, sizeof(_Script_AbilityFramework_eventGASOnReceiveTargetData_Parms), Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EGASConfirmType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EGASConfirmType, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EGASConfirmType"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EGASConfirmType>()
	{
		return EGASConfirmType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGASConfirmType(EGASConfirmType_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EGASConfirmType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EGASConfirmType_Hash() { return 2582473765U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EGASConfirmType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGASConfirmType"), 0, Get_Z_Construct_UEnum_AbilityFramework_EGASConfirmType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGASConfirmType::Instant", (int64)EGASConfirmType::Instant },
				{ "EGASConfirmType::WaitForConfirm", (int64)EGASConfirmType::WaitForConfirm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Instant.Name", "EGASConfirmType::Instant" },
				{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
				{ "WaitForConfirm.Name", "EGASConfirmType::WaitForConfirm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EGASConfirmType",
				"EGASConfirmType",
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
	void UGAAbilityTask_TargetData::StaticRegisterNativesUGAAbilityTask_TargetData()
	{
		UClass* Class = UGAAbilityTask_TargetData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTargetDataTask", &UGAAbilityTask_TargetData::execCreateTargetDataTask },
			{ "OnCastEndedConfirm", &UGAAbilityTask_TargetData::execOnCastEndedConfirm },
			{ "OnConfirm", &UGAAbilityTask_TargetData::execOnConfirm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics
	{
		struct GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			bool bDrawDebug;
			bool bDrawCorrectedDebug;
			bool bUseCorrectedTrace;
			EGASConfirmType ConfirmTypeIn;
			float Range;
			UGAAbilityTask_TargetData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConfirmTypeIn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfirmTypeIn_Underlying;
		static void NewProp_bUseCorrectedTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCorrectedTrace;
		static void NewProp_bDrawCorrectedDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawCorrectedDebug;
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_TargetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_ConfirmTypeIn = { "ConfirmTypeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms, ConfirmTypeIn), Z_Construct_UEnum_AbilityFramework_EGASConfirmType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_ConfirmTypeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bUseCorrectedTrace_SetBit(void* Obj)
	{
		((GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms*)Obj)->bUseCorrectedTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bUseCorrectedTrace = { "bUseCorrectedTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms), &Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bUseCorrectedTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawCorrectedDebug_SetBit(void* Obj)
	{
		((GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms*)Obj)->bDrawCorrectedDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawCorrectedDebug = { "bDrawCorrectedDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms), &Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawCorrectedDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms), &Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_ConfirmTypeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_ConfirmTypeIn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bUseCorrectedTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawCorrectedDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetData, nullptr, "CreateTargetDataTask", nullptr, nullptr, sizeof(GAAbilityTask_TargetData_eventCreateTargetDataTask_Parms), Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetData, nullptr, "OnCastEndedConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetData, nullptr, "OnConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_TargetData_NoRegister()
	{
		return UGAAbilityTask_TargetData::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_TargetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceiveTargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveTargetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConfirmed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetData_CreateTargetDataTask, "CreateTargetDataTask" }, // 394817201
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetData_OnCastEndedConfirm, "OnCastEndedConfirm" }, // 651996263
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetData_OnConfirm, "OnConfirm" }, // 2770639869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_TargetData.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnReceiveTargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnReceiveTargetData = { "OnReceiveTargetData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_TargetData, OnReceiveTargetData), Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnReceiveTargetData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnReceiveTargetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnConfirmed = { "OnConfirmed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_TargetData, OnConfirmed), Z_Construct_UDelegateFunction_AbilityFramework_GASOnReceiveTargetData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnConfirmed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnConfirmed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnReceiveTargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::NewProp_OnConfirmed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_TargetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::ClassParams = {
		&UGAAbilityTask_TargetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_TargetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_TargetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_TargetData, 1433392854);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_TargetData>()
	{
		return UGAAbilityTask_TargetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_TargetData(Z_Construct_UClass_UGAAbilityTask_TargetData, &UGAAbilityTask_TargetData::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_TargetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_TargetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
