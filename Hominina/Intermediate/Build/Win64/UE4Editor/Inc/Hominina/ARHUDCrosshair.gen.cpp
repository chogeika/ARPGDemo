// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/HUD/ARHUDCrosshair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHUDCrosshair() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARHUDCrosshair_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDCrosshair();
	HOMININA_API UClass* Z_Construct_UClass_UARUMGWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARHUDCrosshair::StaticRegisterNativesUARHUDCrosshair()
	{
	}
	UClass* Z_Construct_UClass_UARHUDCrosshair_NoRegister()
	{
		return UARHUDCrosshair::StaticClass();
	}
	struct Z_Construct_UClass_UARHUDCrosshair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARHUDCrosshair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARUMGWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDCrosshair_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HUD/ARHUDCrosshair.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDCrosshair.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARHUDCrosshair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARHUDCrosshair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARHUDCrosshair_Statics::ClassParams = {
		&UARHUDCrosshair::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARHUDCrosshair_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARHUDCrosshair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARHUDCrosshair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARHUDCrosshair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARHUDCrosshair, 3450776191);
	template<> HOMININA_API UClass* StaticClass<UARHUDCrosshair>()
	{
		return UARHUDCrosshair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARHUDCrosshair(Z_Construct_UClass_UARHUDCrosshair, &UARHUDCrosshair::StaticClass, TEXT("/Script/Hominina"), TEXT("UARHUDCrosshair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARHUDCrosshair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
