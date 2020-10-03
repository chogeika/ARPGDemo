// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAbilityTask_SpawnProjectile() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFPRojectileSpawnTraceOption();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityTask_SpawnProjectile();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "AFOnPRojectileSpawned__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAFPRojectileSpawnTraceOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFPRojectileSpawnTraceOption, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFPRojectileSpawnTraceOption"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFPRojectileSpawnTraceOption>()
	{
		return EAFPRojectileSpawnTraceOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFPRojectileSpawnTraceOption(EAFPRojectileSpawnTraceOption_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFPRojectileSpawnTraceOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFPRojectileSpawnTraceOption_Hash() { return 3158366287U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFPRojectileSpawnTraceOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFPRojectileSpawnTraceOption"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFPRojectileSpawnTraceOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAFPRojectileSpawnTraceOption::DoNotTrace", (int64)EAFPRojectileSpawnTraceOption::DoNotTrace },
				{ "EAFPRojectileSpawnTraceOption::TraceFullPath", (int64)EAFPRojectileSpawnTraceOption::TraceFullPath },
				{ "EAFPRojectileSpawnTraceOption::OnlyTraceWhileAscending", (int64)EAFPRojectileSpawnTraceOption::OnlyTraceWhileAscending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DoNotTrace.Name", "EAFPRojectileSpawnTraceOption::DoNotTrace" },
				{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
				{ "OnlyTraceWhileAscending.Name", "EAFPRojectileSpawnTraceOption::OnlyTraceWhileAscending" },
				{ "TraceFullPath.Name", "EAFPRojectileSpawnTraceOption::TraceFullPath" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFPRojectileSpawnTraceOption",
				"EAFPRojectileSpawnTraceOption",
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
	void UAFAbilityTask_SpawnProjectile::StaticRegisterNativesUAFAbilityTask_SpawnProjectile()
	{
	}
	UClass* Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_NoRegister()
	{
		return UAFAbilityTask_SpawnProjectile::StaticClass();
	}
	struct Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Played_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Played;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFavorHighArc_MetaData[];
#endif
		static void NewProp_bFavorHighArc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFavorHighArc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TraceOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_Played_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_Played = { "Played", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, Played), Z_Construct_UDelegateFunction_AbilityFramework_AFOnPRojectileSpawned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_Played_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_Played_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	void Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UAFAbilityTask_SpawnProjectile*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAFAbilityTask_SpawnProjectile), &Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	void Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc_SetBit(void* Obj)
	{
		((UAFAbilityTask_SpawnProjectile*)Obj)->bFavorHighArc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc = { "bFavorHighArc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAFAbilityTask_SpawnProjectile), &Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_CollisionRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, CollisionRadius), METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_CollisionRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_CollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption = { "TraceOption", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, TraceOption), Z_Construct_UEnum_AbilityFramework_EAFPRojectileSpawnTraceOption, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_OverrideGravityZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, OverrideGravityZ), METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_OverrideGravityZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_OverrideGravityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_EndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_EndLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityTask_SpawnProjectile, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_StartLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_Played,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_bFavorHighArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_CollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_TraceOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::NewProp_StartLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAbilityTask_SpawnProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::ClassParams = {
		&UAFAbilityTask_SpawnProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAbilityTask_SpawnProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAbilityTask_SpawnProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAbilityTask_SpawnProjectile, 3309245948);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAbilityTask_SpawnProjectile>()
	{
		return UAFAbilityTask_SpawnProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAbilityTask_SpawnProjectile(Z_Construct_UClass_UAFAbilityTask_SpawnProjectile, &UAFAbilityTask_SpawnProjectile::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAbilityTask_SpawnProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAbilityTask_SpawnProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
