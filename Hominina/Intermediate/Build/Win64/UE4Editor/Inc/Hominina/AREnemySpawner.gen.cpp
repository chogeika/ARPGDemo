// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/AREnemySpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAREnemySpawner() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AAREnemySpawner_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AAREnemySpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_AAREnemySpawner_HandleSpawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMININA_API UClass* Z_Construct_UClass_AARAICharacter_NoRegister();
// End Cross Module References
	void AAREnemySpawner::StaticRegisterNativesAAREnemySpawner()
	{
		UClass* Class = AAREnemySpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleSpawn", &AAREnemySpawner::execHandleSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAREnemySpawner_HandleSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAREnemySpawner_HandleSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAREnemySpawner_HandleSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAREnemySpawner, nullptr, "HandleSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAREnemySpawner_HandleSpawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAREnemySpawner_HandleSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAREnemySpawner_HandleSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAREnemySpawner_HandleSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAREnemySpawner_NoRegister()
	{
		return AAREnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_AAREnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenSpawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatchSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BatchSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAREnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAREnemySpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAREnemySpawner_HandleSpawn, "HandleSpawn" }, // 566299881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AREnemySpawner.h" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MinRespawn_MetaData[] = {
		{ "Category", "Enemy" },
		{ "Comment", "/*\n\x09\x09If enemy count reaches this number start respawning.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
		{ "ToolTip", "If enemy count reaches this number start respawning." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MinRespawn = { "MinRespawn", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAREnemySpawner, MinRespawn), METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MinRespawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MinRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions_MetaData[] = {
		{ "Category", "Enemy" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions = { "SpawnPositions", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAREnemySpawner, SpawnPositions), METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions_Inner = { "SpawnPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_TimeBetweenSpawns_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_TimeBetweenSpawns = { "TimeBetweenSpawns", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAREnemySpawner, TimeBetweenSpawns), METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_TimeBetweenSpawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_TimeBetweenSpawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_BatchSpawn_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_BatchSpawn = { "BatchSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAREnemySpawner, BatchSpawn), METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_BatchSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_BatchSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MaxSpawned_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MaxSpawned = { "MaxSpawned", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAREnemySpawner, MaxSpawned), METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MaxSpawned_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MaxSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AREnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAREnemySpawner, EnemyClass), Z_Construct_UClass_AARAICharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_EnemyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_EnemyClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAREnemySpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MinRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_SpawnPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_TimeBetweenSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_BatchSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_MaxSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAREnemySpawner_Statics::NewProp_EnemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAREnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAREnemySpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAREnemySpawner_Statics::ClassParams = {
		&AAREnemySpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAREnemySpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAREnemySpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAREnemySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAREnemySpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAREnemySpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAREnemySpawner, 4039543130);
	template<> HOMININA_API UClass* StaticClass<AAREnemySpawner>()
	{
		return AAREnemySpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAREnemySpawner(Z_Construct_UClass_AAREnemySpawner, &AAREnemySpawner::StaticClass, TEXT("/Script/Hominina"), TEXT("AAREnemySpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAREnemySpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
