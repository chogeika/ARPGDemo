// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Menu/ARMainMenuView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARMainMenuView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARMainMenuView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARMainMenuView();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARMainMenuView::StaticRegisterNativesUARMainMenuView()
	{
	}
	UClass* Z_Construct_UClass_UARMainMenuView_NoRegister()
	{
		return UARMainMenuView::StaticClass();
	}
	struct Z_Construct_UClass_UARMainMenuView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARMainMenuView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMainMenuView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Menu/ARMainMenuView.h" },
		{ "ModuleRelativePath", "Public/Menu/ARMainMenuView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARMainMenuView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARMainMenuView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARMainMenuView_Statics::ClassParams = {
		&UARMainMenuView::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARMainMenuView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARMainMenuView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARMainMenuView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARMainMenuView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARMainMenuView, 2441774732);
	template<> HOMININA_API UClass* StaticClass<UARMainMenuView>()
	{
		return UARMainMenuView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARMainMenuView(Z_Construct_UClass_UARMainMenuView, &UARMainMenuView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARMainMenuView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARMainMenuView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
