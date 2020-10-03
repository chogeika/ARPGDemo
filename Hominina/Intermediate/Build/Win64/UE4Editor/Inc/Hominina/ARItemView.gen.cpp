// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/ARItemView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARItemView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemView();
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemWidget();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UARItemView::StaticRegisterNativesUARItemView()
	{
	}
	UClass* Z_Construct_UClass_UARItemView_NoRegister()
	{
		return UARItemView::StaticClass();
	}
	struct Z_Construct_UClass_UARItemView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIFItemWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/ARItemView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARItemView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemView_Statics::NewProp_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARItemView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARItemView_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemView, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemView_Statics::NewProp_Icon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemView_Statics::NewProp_Icon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARItemView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemView_Statics::NewProp_Icon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemView_Statics::ClassParams = {
		&UARItemView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARItemView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARItemView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARItemView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemView, 4221650832);
	template<> HOMININA_API UClass* StaticClass<UARItemView>()
	{
		return UARItemView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemView(Z_Construct_UClass_UARItemView, &UARItemView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
