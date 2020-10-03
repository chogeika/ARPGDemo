// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARGameMode() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARGameMode_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void AARGameMode::StaticRegisterNativesAARGameMode()
	{
	}
	UClass* Z_Construct_UClass_AARGameMode_NoRegister()
	{
		return AARGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AARGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARGameMode.h" },
		{ "ModuleRelativePath", "Public/ARGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARGameMode_Statics::ClassParams = {
		&AARGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AARGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARGameMode, 3843207371);
	template<> HOMININA_API UClass* StaticClass<AARGameMode>()
	{
		return AARGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARGameMode(Z_Construct_UClass_AARGameMode, &AARGameMode::StaticClass, TEXT("/Script/Hominina"), TEXT("AARGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
