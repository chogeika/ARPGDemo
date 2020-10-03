// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARItemSpawnerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemSpawnerBase() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARItemSpawnerBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARItemSpawnerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMININA_API UClass* Z_Construct_UClass_AARItemPickupBase_NoRegister();
// End Cross Module References
	void AARItemSpawnerBase::StaticRegisterNativesAARItemSpawnerBase()
	{
		UClass* Class = AARItemSpawnerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleRespawn", &AARItemSpawnerBase::execHandleRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARItemSpawnerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARItemSpawnerBase, nullptr, "HandleRespawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARItemSpawnerBase_NoRegister()
	{
		return AARItemSpawnerBase::StaticClass();
	}
	struct Z_Construct_UClass_AARItemSpawnerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemsToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARItemSpawnerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARItemSpawnerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARItemSpawnerBase_HandleRespawn, "HandleRespawn" }, // 4046708223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemSpawnerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09""1. Should only store templates.\n\x09""2. Should ask databse about item to spawn.\n\x09""3. Should not be placed manually.\n*/" },
		{ "IncludePath", "ARItemSpawnerBase.h" },
		{ "ModuleRelativePath", "Public/ARItemSpawnerBase.h" },
		{ "ToolTip", "1. Should only store templates.\n2. Should ask databse about item to spawn.\n3. Should not be placed manually." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Items" },
		{ "Comment", "/*\n\x09\x09If <= 0, no respawn. Otherwise time after item will be respawned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ARItemSpawnerBase.h" },
		{ "ToolTip", "If <= 0, no respawn. Otherwise time after item will be respawned." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARItemSpawnerBase, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_RespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_ItemsToSpawn_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/ARItemSpawnerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_ItemsToSpawn = { "ItemsToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARItemSpawnerBase, ItemsToSpawn), Z_Construct_UClass_AARItemPickupBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_ItemsToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_ItemsToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARItemSpawnerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_RespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARItemSpawnerBase_Statics::NewProp_ItemsToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARItemSpawnerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARItemSpawnerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARItemSpawnerBase_Statics::ClassParams = {
		&AARItemSpawnerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARItemSpawnerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARItemSpawnerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARItemSpawnerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARItemSpawnerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARItemSpawnerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARItemSpawnerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARItemSpawnerBase, 2293880117);
	template<> HOMININA_API UClass* StaticClass<AARItemSpawnerBase>()
	{
		return AARItemSpawnerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARItemSpawnerBase(Z_Construct_UClass_AARItemSpawnerBase, &AARItemSpawnerBase::StaticClass, TEXT("/Script/Hominina"), TEXT("AARItemSpawnerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARItemSpawnerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
