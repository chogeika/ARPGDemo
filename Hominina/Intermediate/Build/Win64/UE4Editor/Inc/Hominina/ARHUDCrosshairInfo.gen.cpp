// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/HUD/ARHUDCrosshairInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHUDCrosshairInfo() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARHUDCrosshairInfo_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDCrosshairInfo();
	HOMININA_API UClass* Z_Construct_UClass_UARUMGWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARHUDCrosshairInfo::StaticRegisterNativesUARHUDCrosshairInfo()
	{
	}
	UClass* Z_Construct_UClass_UARHUDCrosshairInfo_NoRegister()
	{
		return UARHUDCrosshairInfo::StaticClass();
	}
	struct Z_Construct_UClass_UARHUDCrosshairInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARHUDCrosshairInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARUMGWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDCrosshairInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HUD/ARHUDCrosshairInfo.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDCrosshairInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARHUDCrosshairInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARHUDCrosshairInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARHUDCrosshairInfo_Statics::ClassParams = {
		&UARHUDCrosshairInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARHUDCrosshairInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARHUDCrosshairInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARHUDCrosshairInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARHUDCrosshairInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARHUDCrosshairInfo, 3162222125);
	template<> HOMININA_API UClass* StaticClass<UARHUDCrosshairInfo>()
	{
		return UARHUDCrosshairInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARHUDCrosshairInfo(Z_Construct_UClass_UARHUDCrosshairInfo, &UARHUDCrosshairInfo::StaticClass, TEXT("/Script/Hominina"), TEXT("UARHUDCrosshairInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARHUDCrosshairInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
