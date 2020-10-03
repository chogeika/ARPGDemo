// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/ARInventoryScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARInventoryScreenWidget() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARInventoryScreenWidget_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARInventoryScreenWidget();
	HOMININA_API UClass* Z_Construct_UClass_UARUMGWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemMagazineView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeaponWidget_NoRegister();
// End Cross Module References
	void UARInventoryScreenWidget::StaticRegisterNativesUARInventoryScreenWidget()
	{
		UClass* Class = UARInventoryScreenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnModifyWeaponClicked", &UARInventoryScreenWidget::execOnModifyWeaponClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARInventoryScreenWidget, nullptr, "OnModifyWeaponClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARInventoryScreenWidget_NoRegister()
	{
		return UARInventoryScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UARInventoryScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponModificationContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponModificationContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedItemsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedItemsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineUpgrade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineUpgrade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifySelectedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifySelectedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomBackWeaponWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomBackWeaponWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideWeaponWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideWeaponWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWeaponWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWeaponWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeaponWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWeaponWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARInventoryScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARUMGWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARInventoryScreenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARInventoryScreenWidget_OnModifyWeaponClicked, "OnModifyWeaponClicked" }, // 1381094076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/ARInventoryScreenWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedWeapon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARInventoryScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedWeapon = { "SelectedWeapon", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, SelectedWeapon), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_WeaponModificationContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARInventoryScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_WeaponModificationContainer = { "WeaponModificationContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, WeaponModificationContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_WeaponModificationContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_WeaponModificationContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedItemsContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARInventoryScreenWidget" },
		{ "Comment", "/*\n\x09\x09""Contains list of items compatibile with selected slot.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
		{ "ToolTip", "Contains list of items compatibile with selected slot." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedItemsContainer = { "SelectedItemsContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, SelectedItemsContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedItemsContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedItemsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_MagazineUpgrade_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_MagazineUpgrade = { "MagazineUpgrade", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, MagazineUpgrade), Z_Construct_UClass_UARItemMagazineView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_MagazineUpgrade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_MagazineUpgrade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_ModifySelectedWeapon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_ModifySelectedWeapon = { "ModifySelectedWeapon", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, ModifySelectedWeapon), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_ModifySelectedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_ModifySelectedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_BottomBackWeaponWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_BottomBackWeaponWidget = { "BottomBackWeaponWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, BottomBackWeaponWidget), Z_Construct_UClass_UARItemWeaponWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_BottomBackWeaponWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_BottomBackWeaponWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SideWeaponWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SideWeaponWidget = { "SideWeaponWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, SideWeaponWidget), Z_Construct_UClass_UARItemWeaponWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SideWeaponWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SideWeaponWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_LeftWeaponWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_LeftWeaponWidget = { "LeftWeaponWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, LeftWeaponWidget), Z_Construct_UClass_UARItemWeaponWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_LeftWeaponWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_LeftWeaponWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_RightWeaponWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARInventoryScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_RightWeaponWidget = { "RightWeaponWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARInventoryScreenWidget, RightWeaponWidget), Z_Construct_UClass_UARItemWeaponWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_RightWeaponWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_RightWeaponWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARInventoryScreenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_WeaponModificationContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SelectedItemsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_MagazineUpgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_ModifySelectedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_BottomBackWeaponWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_SideWeaponWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_LeftWeaponWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARInventoryScreenWidget_Statics::NewProp_RightWeaponWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARInventoryScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARInventoryScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARInventoryScreenWidget_Statics::ClassParams = {
		&UARInventoryScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARInventoryScreenWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARInventoryScreenWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARInventoryScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARInventoryScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARInventoryScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARInventoryScreenWidget, 983027838);
	template<> HOMININA_API UClass* StaticClass<UARInventoryScreenWidget>()
	{
		return UARInventoryScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARInventoryScreenWidget(Z_Construct_UClass_UARInventoryScreenWidget, &UARInventoryScreenWidget::StaticClass, TEXT("/Script/Hominina"), TEXT("UARInventoryScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARInventoryScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
