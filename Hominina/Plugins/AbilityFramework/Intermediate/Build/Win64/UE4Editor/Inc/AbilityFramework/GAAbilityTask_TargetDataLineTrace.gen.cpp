// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask_TargetDataLineTrace() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFConfirmType();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFLineTraceConfirmData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFLineTraceData();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics
	{
		struct _Script_AbilityFramework_eventAFOnTargetReceived_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventAFOnTargetReceived_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "AFOnTargetReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_AbilityFramework_eventAFOnTargetReceived_Parms), Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAFConfirmType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFConfirmType, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFConfirmType"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFConfirmType>()
	{
		return EAFConfirmType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFConfirmType(EAFConfirmType_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFConfirmType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFConfirmType_Hash() { return 3110044394U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFConfirmType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFConfirmType"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFConfirmType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAFConfirmType::Instant", (int64)EAFConfirmType::Instant },
				{ "EAFConfirmType::WaitForConfirm", (int64)EAFConfirmType::WaitForConfirm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Instant.Name", "EAFConfirmType::Instant" },
				{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
				{ "WaitForConfirm.Name", "EAFConfirmType::WaitForConfirm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFConfirmType",
				"EAFConfirmType",
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
class UScriptStruct* FAFLineTraceConfirmData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFLineTraceConfirmData, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFLineTraceConfirmData"), sizeof(FAFLineTraceConfirmData), Get_Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFLineTraceConfirmData>()
{
	return FAFLineTraceConfirmData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFLineTraceConfirmData(FAFLineTraceConfirmData::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFLineTraceConfirmData"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFLineTraceConfirmData
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFLineTraceConfirmData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFLineTraceConfirmData")),new UScriptStruct::TCppStructOps<FAFLineTraceConfirmData>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFLineTraceConfirmData;
	struct Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConfirmed_MetaData[];
#endif
		static void NewProp_bConfirmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConfirmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFLineTraceConfirmData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFLineTraceConfirmData, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFLineTraceConfirmData, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed_SetBit(void* Obj)
	{
		((FAFLineTraceConfirmData*)Obj)->bConfirmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed = { "bConfirmed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAFLineTraceConfirmData), &Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::NewProp_bConfirmed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFLineTraceConfirmData",
		sizeof(FAFLineTraceConfirmData),
		alignof(FAFLineTraceConfirmData),
		Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFLineTraceConfirmData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFLineTraceConfirmData"), sizeof(FAFLineTraceConfirmData), Get_Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFLineTraceConfirmData_Hash() { return 2194123566U; }
class UScriptStruct* FAFLineTraceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFLineTraceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFLineTraceData, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFLineTraceData"), sizeof(FAFLineTraceData), Get_Z_Construct_UScriptStruct_FAFLineTraceData_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFLineTraceData>()
{
	return FAFLineTraceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFLineTraceData(FAFLineTraceData::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFLineTraceData"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFLineTraceData
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFLineTraceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFLineTraceData")),new UScriptStruct::TCppStructOps<FAFLineTraceData>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFLineTraceData;
	struct Z_Construct_UScriptStruct_FAFLineTraceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExactPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExactPing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFLineTraceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFLineTraceData, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFLineTraceData, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_ExactPing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_ExactPing = { "ExactPing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFLineTraceData, ExactPing), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_ExactPing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_ExactPing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFLineTraceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFLineTraceData_Statics::NewProp_ExactPing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFLineTraceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFLineTraceData",
		sizeof(FAFLineTraceData),
		alignof(FAFLineTraceData),
		Z_Construct_UScriptStruct_FAFLineTraceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFLineTraceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFLineTraceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFLineTraceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFLineTraceData"), sizeof(FAFLineTraceData), Get_Z_Construct_UScriptStruct_FAFLineTraceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFLineTraceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFLineTraceData_Hash() { return 1065935644U; }
	static FName NAME_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo = FName(TEXT("ClientConfirmHitInfo"));
	void UGAAbilityTask_TargetDataLineTrace::ClientConfirmHitInfo(FAFLineTraceConfirmData ConfirmData)
	{
		GAAbilityTask_TargetDataLineTrace_eventClientConfirmHitInfo_Parms Parms;
		Parms.ConfirmData=ConfirmData;
		ProcessEvent(FindFunctionChecked(NAME_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo),&Parms);
	}
	static FName NAME_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo = FName(TEXT("ServerConfirmHitInfo"));
	void UGAAbilityTask_TargetDataLineTrace::ServerConfirmHitInfo(FAFLineTraceData TraceData)
	{
		GAAbilityTask_TargetDataLineTrace_eventServerConfirmHitInfo_Parms Parms;
		Parms.TraceData=TraceData;
		ProcessEvent(FindFunctionChecked(NAME_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo),&Parms);
	}
	void UGAAbilityTask_TargetDataLineTrace::StaticRegisterNativesUGAAbilityTask_TargetDataLineTrace()
	{
		UClass* Class = UGAAbilityTask_TargetDataLineTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientConfirmHitInfo", &UGAAbilityTask_TargetDataLineTrace::execClientConfirmHitInfo },
			{ "CreateTargetDataLineTrace", &UGAAbilityTask_TargetDataLineTrace::execCreateTargetDataLineTrace },
			{ "OnCastEndedConfirm", &UGAAbilityTask_TargetDataLineTrace::execOnCastEndedConfirm },
			{ "OnConfirm", &UGAAbilityTask_TargetDataLineTrace::execOnConfirm },
			{ "ServerConfirmHitInfo", &UGAAbilityTask_TargetDataLineTrace::execServerConfirmHitInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfirmData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::NewProp_ConfirmData = { "ConfirmData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventClientConfirmHitInfo_Parms, ConfirmData), Z_Construct_UScriptStruct_FAFLineTraceConfirmData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::NewProp_ConfirmData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace, nullptr, "ClientConfirmHitInfo", nullptr, nullptr, sizeof(GAAbilityTask_TargetDataLineTrace_eventClientConfirmHitInfo_Parms), Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics
	{
		struct GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms
		{
			UGAAbilityBase* WorldContextObject;
			FName InTaskName;
			TEnumAsByte<ETraceTypeQuery> InTraceChannel;
			USkeletalMeshComponent* InSocketComponent;
			FName InSocketName;
			bool bDrawDebug;
			EAFConfirmType ConfirmTypeIn;
			float Range;
			UGAAbilityTask_TargetDataLineTrace* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConfirmTypeIn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfirmTypeIn_Underlying;
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSocketComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSocketComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTraceChannel;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, ReturnValue), Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_ConfirmTypeIn = { "ConfirmTypeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, ConfirmTypeIn), Z_Construct_UEnum_AbilityFramework_EAFConfirmType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_ConfirmTypeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms), &Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketComponent = { "InSocketComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, InSocketComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InTraceChannel = { "InTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, InTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, InTaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms, WorldContextObject), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_ConfirmTypeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_ConfirmTypeIn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InSocketComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_InTaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AbilityFramework|Abilities|Tasks" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace, nullptr, "CreateTargetDataLineTrace", nullptr, nullptr, sizeof(GAAbilityTask_TargetDataLineTrace_eventCreateTargetDataLineTrace_Parms), Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace, nullptr, "OnCastEndedConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace, nullptr, "OnConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAbilityTask_TargetDataLineTrace_eventServerConfirmHitInfo_Parms, TraceData), Z_Construct_UScriptStruct_FAFLineTraceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::NewProp_TraceData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace, nullptr, "ServerConfirmHitInfo", nullptr, nullptr, sizeof(GAAbilityTask_TargetDataLineTrace_eventServerConfirmHitInfo_Parms), Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_NoRegister()
	{
		return UGAAbilityTask_TargetDataLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerReceiveTargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerReceiveTargetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClientUnconfirmedTargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientUnconfirmedTargetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClientReceiveTargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientReceiveTargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ClientConfirmHitInfo, "ClientConfirmHitInfo" }, // 3937872695
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_CreateTargetDataLineTrace, "CreateTargetDataLineTrace" }, // 602159095
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnCastEndedConfirm, "OnCastEndedConfirm" }, // 3549890172
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_OnConfirm, "OnConfirm" }, // 1016424528
		{ &Z_Construct_UFunction_UGAAbilityTask_TargetDataLineTrace_ServerConfirmHitInfo, "ServerConfirmHitInfo" }, // 857440405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnServerReceiveTargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnServerReceiveTargetData = { "OnServerReceiveTargetData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_TargetDataLineTrace, OnServerReceiveTargetData), Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnServerReceiveTargetData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnServerReceiveTargetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientUnconfirmedTargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientUnconfirmedTargetData = { "OnClientUnconfirmedTargetData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_TargetDataLineTrace, OnClientUnconfirmedTargetData), Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientUnconfirmedTargetData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientUnconfirmedTargetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientReceiveTargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask_TargetDataLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientReceiveTargetData = { "OnClientReceiveTargetData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAbilityTask_TargetDataLineTrace, OnClientReceiveTargetData), Z_Construct_UDelegateFunction_AbilityFramework_AFOnTargetReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientReceiveTargetData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientReceiveTargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnServerReceiveTargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientUnconfirmedTargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::NewProp_OnClientReceiveTargetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask_TargetDataLineTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::ClassParams = {
		&UGAAbilityTask_TargetDataLineTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask_TargetDataLineTrace, 942254857);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask_TargetDataLineTrace>()
	{
		return UGAAbilityTask_TargetDataLineTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask_TargetDataLineTrace(Z_Construct_UClass_UGAAbilityTask_TargetDataLineTrace, &UGAAbilityTask_TargetDataLineTrace::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask_TargetDataLineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask_TargetDataLineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
