// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/ARListItemView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARListItemView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARListItemView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARListItemView();
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemWidget();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_UARItemTooltipView_NoRegister();
// End Cross Module References
	void UARListItemView::StaticRegisterNativesUARListItemView()
	{
	}
	UClass* Z_Construct_UClass_UARListItemView_NoRegister()
	{
		return UARListItemView::StaticClass();
	}
	struct Z_Construct_UClass_UARListItemView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARListItemView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIFItemWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARListItemView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/ARListItemView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARListItemView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARListItemView_Statics::NewProp_ItemTooltip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARListItemView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARListItemView_Statics::NewProp_ItemTooltip = { "ItemTooltip", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARListItemView, ItemTooltip), Z_Construct_UClass_UARItemTooltipView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARListItemView_Statics::NewProp_ItemTooltip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARListItemView_Statics::NewProp_ItemTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARListItemView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARListItemView_Statics::NewProp_ItemTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARListItemView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARListItemView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARListItemView_Statics::ClassParams = {
		&UARListItemView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARListItemView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARListItemView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARListItemView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARListItemView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARListItemView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARListItemView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARListItemView, 1348505325);
	template<> HOMININA_API UClass* StaticClass<UARListItemView>()
	{
		return UARListItemView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARListItemView(Z_Construct_UClass_UARListItemView, &UARListItemView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARListItemView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARListItemView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
