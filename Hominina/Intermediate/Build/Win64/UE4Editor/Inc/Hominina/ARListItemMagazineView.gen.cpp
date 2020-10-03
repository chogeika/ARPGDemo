// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/Weapons/Modifications/ARListItemMagazineView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARListItemMagazineView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARListItemMagazineView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARListItemMagazineView();
	HOMININA_API UClass* Z_Construct_UClass_UARListItemView();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARListItemMagazineView::StaticRegisterNativesUARListItemMagazineView()
	{
	}
	UClass* Z_Construct_UClass_UARListItemMagazineView_NoRegister()
	{
		return UARListItemMagazineView::StaticClass();
	}
	struct Z_Construct_UClass_UARListItemMagazineView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARListItemMagazineView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARListItemView,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARListItemMagazineView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/Weapons/Modifications/ARListItemMagazineView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/Modifications/ARListItemMagazineView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARListItemMagazineView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARListItemMagazineView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARListItemMagazineView_Statics::ClassParams = {
		&UARListItemMagazineView::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARListItemMagazineView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARListItemMagazineView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARListItemMagazineView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARListItemMagazineView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARListItemMagazineView, 320271789);
	template<> HOMININA_API UClass* StaticClass<UARListItemMagazineView>()
	{
		return UARListItemMagazineView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARListItemMagazineView(Z_Construct_UClass_UARListItemMagazineView, &UARListItemMagazineView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARListItemMagazineView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARListItemMagazineView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
