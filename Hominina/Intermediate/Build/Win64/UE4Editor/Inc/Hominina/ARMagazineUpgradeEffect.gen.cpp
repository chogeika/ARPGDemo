// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Weapons/ARMagazineUpgradeEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARMagazineUpgradeEffect() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARMagazineUpgradeEffect_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARMagazineUpgradeEffect();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectSpecBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARMagazineUpgradeEffect::StaticRegisterNativesUARMagazineUpgradeEffect()
	{
	}
	UClass* Z_Construct_UClass_UARMagazineUpgradeEffect_NoRegister()
	{
		return UARMagazineUpgradeEffect::StaticClass();
	}
	struct Z_Construct_UClass_UARMagazineUpgradeEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectSpecBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/ARMagazineUpgradeEffect.h" },
		{ "ModuleRelativePath", "Public/Weapons/ARMagazineUpgradeEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARMagazineUpgradeEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::ClassParams = {
		&UARMagazineUpgradeEffect::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARMagazineUpgradeEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARMagazineUpgradeEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARMagazineUpgradeEffect, 3656927588);
	template<> HOMININA_API UClass* StaticClass<UARMagazineUpgradeEffect>()
	{
		return UARMagazineUpgradeEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARMagazineUpgradeEffect(Z_Construct_UClass_UARMagazineUpgradeEffect, &UARMagazineUpgradeEffect::StaticClass, TEXT("/Script/Hominina"), TEXT("UARMagazineUpgradeEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARMagazineUpgradeEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
