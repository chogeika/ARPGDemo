// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Calculations/ARAmmoReloadCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARAmmoReloadCalculation() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARAmmoReloadCalculation_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARAmmoReloadCalculation();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGACustomCalculation();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARAmmoReloadCalculation::StaticRegisterNativesUARAmmoReloadCalculation()
	{
	}
	UClass* Z_Construct_UClass_UARAmmoReloadCalculation_NoRegister()
	{
		return UARAmmoReloadCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UARAmmoReloadCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARAmmoReloadCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGACustomCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAmmoReloadCalculation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Calculations/ARAmmoReloadCalculation.h" },
		{ "ModuleRelativePath", "Public/Calculations/ARAmmoReloadCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARAmmoReloadCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARAmmoReloadCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARAmmoReloadCalculation_Statics::ClassParams = {
		&UARAmmoReloadCalculation::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARAmmoReloadCalculation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARAmmoReloadCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARAmmoReloadCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARAmmoReloadCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARAmmoReloadCalculation, 1875272371);
	template<> HOMININA_API UClass* StaticClass<UARAmmoReloadCalculation>()
	{
		return UARAmmoReloadCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARAmmoReloadCalculation(Z_Construct_UClass_UARAmmoReloadCalculation, &UARAmmoReloadCalculation::StaticClass, TEXT("/Script/Hominina"), TEXT("UARAmmoReloadCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARAmmoReloadCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
