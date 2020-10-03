// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFCueInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFCueInterface() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueInterface_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFCueInterface::StaticRegisterNativesUAFCueInterface()
	{
	}
	UClass* Z_Construct_UClass_UAFCueInterface_NoRegister()
	{
		return UAFCueInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAFCueInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFCueInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFCueInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFCueInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAFCueInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFCueInterface_Statics::ClassParams = {
		&UAFCueInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAFCueInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFCueInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFCueInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFCueInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFCueInterface, 3201447147);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFCueInterface>()
	{
		return UAFCueInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFCueInterface(Z_Construct_UClass_UAFCueInterface, &UAFCueInterface::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFCueInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFCueInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
