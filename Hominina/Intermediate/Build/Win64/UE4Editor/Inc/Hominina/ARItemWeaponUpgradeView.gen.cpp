// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/Weapons/Modifications/ARItemWeaponUpgradeView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemWeaponUpgradeView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeaponUpgradeView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeaponUpgradeView();
	HOMININA_API UClass* Z_Construct_UClass_UARItemView();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARItemWeaponUpgradeView::StaticRegisterNativesUARItemWeaponUpgradeView()
	{
	}
	UClass* Z_Construct_UClass_UARItemWeaponUpgradeView_NoRegister()
	{
		return UARItemWeaponUpgradeView::StaticClass();
	}
	struct Z_Construct_UClass_UARItemWeaponUpgradeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARItemView,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/Weapons/Modifications/ARItemWeaponUpgradeView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/Modifications/ARItemWeaponUpgradeView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemWeaponUpgradeView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::ClassParams = {
		&UARItemWeaponUpgradeView::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemWeaponUpgradeView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemWeaponUpgradeView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemWeaponUpgradeView, 2798334099);
	template<> HOMININA_API UClass* StaticClass<UARItemWeaponUpgradeView>()
	{
		return UARItemWeaponUpgradeView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemWeaponUpgradeView(Z_Construct_UClass_UARItemWeaponUpgradeView, &UARItemWeaponUpgradeView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemWeaponUpgradeView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemWeaponUpgradeView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
