// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFrameworkUI/Public/IFItemContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFItemContainerWidget() {}
// Cross Module References
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemContainerWidget_NoRegister();
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemContainerWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventoryFrameworkUI();
	INVENTORYFRAMEWORKUI_API UFunction* Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemWidget_NoRegister();
// End Cross Module References
	static FName NAME_UIFItemContainerWidget_BP_OnInventoryCreated = FName(TEXT("BP_OnInventoryCreated"));
	void UIFItemContainerWidget::BP_OnInventoryCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIFItemContainerWidget_BP_OnInventoryCreated),NULL);
	}
	void UIFItemContainerWidget::StaticRegisterNativesUIFItemContainerWidget()
	{
	}
	struct Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Inventory Created" },
		{ "ModuleRelativePath", "Public/IFItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFItemContainerWidget, nullptr, "BP_OnInventoryCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIFItemContainerWidget_NoRegister()
	{
		return UIFItemContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIFItemContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryWidgets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFItemContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFrameworkUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIFItemContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIFItemContainerWidget_BP_OnInventoryCreated, "BP_OnInventoryCreated" }, // 3431882527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IFItemContainerWidget.h" },
		{ "ModuleRelativePath", "Public/IFItemContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/IFItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemContainerWidget, ItemClass), Z_Construct_UClass_UIFItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_ItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets_MetaData[] = {
		{ "Category", "InventoryFramework" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IFItemContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets = { "InventoryWidgets", nullptr, (EPropertyFlags)0x002008800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemContainerWidget, InventoryWidgets), METADATA_PARAMS(Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets_Inner = { "InventoryWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UIFItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIFItemContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemContainerWidget_Statics::NewProp_InventoryWidgets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFItemContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFItemContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFItemContainerWidget_Statics::ClassParams = {
		&UIFItemContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIFItemContainerWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UIFItemContainerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIFItemContainerWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIFItemContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFItemContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFItemContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFItemContainerWidget, 3198776505);
	template<> INVENTORYFRAMEWORKUI_API UClass* StaticClass<UIFItemContainerWidget>()
	{
		return UIFItemContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFItemContainerWidget(Z_Construct_UClass_UIFItemContainerWidget, &UIFItemContainerWidget::StaticClass, TEXT("/Script/InventoryFrameworkUI"), TEXT("UIFItemContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFItemContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
