// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAITest/Public/STestAxePickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTestAxePickup() {}
// Cross Module References
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestAxePickup_NoRegister();
	SPECTRAITEST_API UClass* Z_Construct_UClass_ASTestAxePickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpectrAITest();
// End Cross Module References
	void ASTestAxePickup::StaticRegisterNativesASTestAxePickup()
	{
	}
	UClass* Z_Construct_UClass_ASTestAxePickup_NoRegister()
	{
		return ASTestAxePickup::StaticClass();
	}
	struct Z_Construct_UClass_ASTestAxePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTestAxePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAITest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTestAxePickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STestAxePickup.h" },
		{ "ModuleRelativePath", "Public/STestAxePickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTestAxePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTestAxePickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTestAxePickup_Statics::ClassParams = {
		&ASTestAxePickup::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASTestAxePickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTestAxePickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTestAxePickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTestAxePickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTestAxePickup, 1381730522);
	template<> SPECTRAITEST_API UClass* StaticClass<ASTestAxePickup>()
	{
		return ASTestAxePickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTestAxePickup(Z_Construct_UClass_ASTestAxePickup, &ASTestAxePickup::StaticClass, TEXT("/Script/SpectrAITest"), TEXT("ASTestAxePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTestAxePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
