// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARItemPickupBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemPickupBase() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARItemPickupBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARItemPickupBase();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_AIFItemActorBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_AARItemSpawnerBase_NoRegister();
// End Cross Module References
	void AARItemPickupBase::StaticRegisterNativesAARItemPickupBase()
	{
	}
	UClass* Z_Construct_UClass_AARItemPickupBase_NoRegister()
	{
		return AARItemPickupBase::StaticClass();
	}
	struct Z_Construct_UClass_AARItemPickupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARItemPickupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIFItemActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemPickupBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARItemPickupBase.h" },
		{ "ModuleRelativePath", "Public/ARItemPickupBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARItemPickupBase_Statics::NewProp_SpawnedBy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARItemPickupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARItemPickupBase_Statics::NewProp_SpawnedBy = { "SpawnedBy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARItemPickupBase, SpawnedBy), Z_Construct_UClass_AARItemSpawnerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARItemPickupBase_Statics::NewProp_SpawnedBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARItemPickupBase_Statics::NewProp_SpawnedBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARItemPickupBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARItemPickupBase_Statics::NewProp_SpawnedBy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARItemPickupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARItemPickupBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARItemPickupBase_Statics::ClassParams = {
		&AARItemPickupBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AARItemPickupBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AARItemPickupBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARItemPickupBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARItemPickupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARItemPickupBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARItemPickupBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARItemPickupBase, 2464015092);
	template<> HOMININA_API UClass* StaticClass<AARItemPickupBase>()
	{
		return AARItemPickupBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARItemPickupBase(Z_Construct_UClass_AARItemPickupBase, &AARItemPickupBase::StaticClass, TEXT("/Script/Hominina"), TEXT("AARItemPickupBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARItemPickupBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
