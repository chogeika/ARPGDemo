// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UITrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUITrigger() {}
// Cross Module References
	HOMININA_API UFunction* Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AUITrigger_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AUITrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HOMININA_API UFunction* Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap();
	HOMININA_API UFunction* Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken();
	HOMININA_API UFunction* Z_Construct_UFunction_AUITrigger_TestImpl();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics
	{
		struct _Script_Hominina_eventRamaMeleeHitSignature_Parms
		{
			AActor* HitActor;
			UPrimitiveComponent* HitComponent;
			FVector ImpactPoint;
			FVector ImpactNormal;
			FName HitBoneName;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventRamaMeleeHitSignature_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventRamaMeleeHitSignature_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventRamaMeleeHitSignature_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactNormal_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventRamaMeleeHitSignature_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactPoint_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventRamaMeleeHitSignature_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventRamaMeleeHitSignature_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_ImpactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UITrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Hominina, nullptr, "RamaMeleeHitSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_Hominina_eventRamaMeleeHitSignature_Parms), Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AUITrigger_TestImpl = FName(TEXT("TestImpl"));
	void AUITrigger::TestImpl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUITrigger_TestImpl),NULL);
	}
	void AUITrigger::StaticRegisterNativesAUITrigger()
	{
		UClass* Class = AUITrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBoxBeginOverlap", &AUITrigger::execOnBoxBeginOverlap },
			{ "RespondToMeleeDamageTaken", &AUITrigger::execRespondToMeleeDamageTaken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics
	{
		struct UITrigger_eventOnBoxBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((UITrigger_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UITrigger_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventOnBoxBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UITrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUITrigger, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, sizeof(UITrigger_eventOnBoxBeginOverlap_Parms), Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics
	{
		struct UITrigger_eventRespondToMeleeDamageTaken_Parms
		{
			AActor* HitActor;
			UPrimitiveComponent* HitComponent;
			FVector ImpactPoint;
			FVector ImpactNormal;
			FName HitBoneName;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventRespondToMeleeDamageTaken_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventRespondToMeleeDamageTaken_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventRespondToMeleeDamageTaken_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventRespondToMeleeDamageTaken_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventRespondToMeleeDamageTaken_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITrigger_eventRespondToMeleeDamageTaken_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_ImpactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Any class can add a function that uses the delegate signature and responds to the Broadcast() event \n" },
		{ "ModuleRelativePath", "Public/UITrigger.h" },
		{ "ToolTip", "Any class can add a function that uses the delegate signature and responds to the Broadcast() event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUITrigger, nullptr, "RespondToMeleeDamageTaken", nullptr, nullptr, sizeof(UITrigger_eventRespondToMeleeDamageTaken_Parms), Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUITrigger_TestImpl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUITrigger_TestImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "C_CODE" },
		{ "Comment", "// ??????BP????C++?\xc5\x82\xcd\x90\xe9\x8c\xbe?\xcc\x82?\n" },
		{ "ModuleRelativePath", "Public/UITrigger.h" },
		{ "ToolTip", "??????BP????C++?\xc5\x82\xcd\x90\xe9\x8c\xbe?\xcc\x82?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUITrigger_TestImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUITrigger, nullptr, "TestImpl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUITrigger_TestImpl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUITrigger_TestImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUITrigger_TestImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUITrigger_TestImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUITrigger_NoRegister()
	{
		return AUITrigger::StaticClass();
	}
	struct Z_Construct_UClass_AUITrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EnemyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_EnemyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EnemyRootCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_EnemyRootCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RamaMeleeWeapon_OnHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RamaMeleeWeapon_OnHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUITrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUITrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUITrigger_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 1176570924
		{ &Z_Construct_UFunction_AUITrigger_RespondToMeleeDamageTaken, "RespondToMeleeDamageTaken" }, // 885068179
		{ &Z_Construct_UFunction_AUITrigger_TestImpl, "TestImpl" }, // 2613312188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUITrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UITrigger.h" },
		{ "ModuleRelativePath", "Public/UITrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_CODE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UITrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyMesh = { "m_EnemyMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUITrigger, m_EnemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyRootCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_CODE" },
		{ "Comment", "//?\xc7\x89??????V?[???R???|?[?l???g???\xdb\x8e?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UITrigger.h" },
		{ "ToolTip", "?\xc7\x89??????V?[???R???|?[?l???g???\xdb\x8e?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyRootCollider = { "m_EnemyRootCollider", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUITrigger, m_EnemyRootCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyRootCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyRootCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUITrigger_Statics::NewProp_RamaMeleeWeapon_OnHit_MetaData[] = {
		{ "Category", "C_CODE" },
		{ "Comment", "//This should be in the class which calls the delegate, and where the signature was defined\n//This is an instance of the signature that was defined above!\n" },
		{ "ModuleRelativePath", "Public/UITrigger.h" },
		{ "ToolTip", "This should be in the class which calls the delegate, and where the signature was defined\nThis is an instance of the signature that was defined above!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUITrigger_Statics::NewProp_RamaMeleeWeapon_OnHit = { "RamaMeleeWeapon_OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUITrigger, RamaMeleeWeapon_OnHit), Z_Construct_UDelegateFunction_Hominina_RamaMeleeHitSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUITrigger_Statics::NewProp_RamaMeleeWeapon_OnHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUITrigger_Statics::NewProp_RamaMeleeWeapon_OnHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUITrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUITrigger_Statics::NewProp_m_EnemyRootCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUITrigger_Statics::NewProp_RamaMeleeWeapon_OnHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUITrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUITrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUITrigger_Statics::ClassParams = {
		&AUITrigger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUITrigger_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AUITrigger_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUITrigger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUITrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUITrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUITrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUITrigger, 2532881874);
	template<> HOMININA_API UClass* StaticClass<AUITrigger>()
	{
		return AUITrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUITrigger(Z_Construct_UClass_AUITrigger, &AUITrigger::StaticClass, TEXT("/Script/Hominina"), TEXT("AUITrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUITrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
