// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFrameworkUI/Public/IFItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFItemWidget() {}
// Cross Module References
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemWidget_NoRegister();
	INVENTORYFRAMEWORKUI_API UClass* Z_Construct_UClass_UIFItemWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventoryFrameworkUI();
	INVENTORYFRAMEWORKUI_API UFunction* Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase_NoRegister();
	INVENTORYFRAMEWORKUI_API UFunction* Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated();
	INVENTORYFRAMEWORKUI_API UFunction* Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	static FName NAME_UIFItemWidget_BP_OnItemChanged = FName(TEXT("BP_OnItemChanged"));
	void UIFItemWidget::BP_OnItemChanged(UIFItemBase* Item)
	{
		IFItemWidget_eventBP_OnItemChanged_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UIFItemWidget_BP_OnItemChanged),&Parms);
	}
	static FName NAME_UIFItemWidget_BP_OnItemCreated = FName(TEXT("BP_OnItemCreated"));
	void UIFItemWidget::BP_OnItemCreated(UIFItemBase* Item)
	{
		IFItemWidget_eventBP_OnItemCreated_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UIFItemWidget_BP_OnItemCreated),&Parms);
	}
	static FName NAME_UIFItemWidget_BP_OnItemRemoved = FName(TEXT("BP_OnItemRemoved"));
	void UIFItemWidget::BP_OnItemRemoved(UIFItemBase* Item)
	{
		IFItemWidget_eventBP_OnItemRemoved_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UIFItemWidget_BP_OnItemRemoved),&Parms);
	}
	void UIFItemWidget::StaticRegisterNativesUIFItemWidget()
	{
	}
	struct Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFItemWidget_eventBP_OnItemChanged_Parms, Item), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Item Changed" },
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFItemWidget, nullptr, "BP_OnItemChanged", nullptr, nullptr, sizeof(IFItemWidget_eventBP_OnItemChanged_Parms), Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFItemWidget_eventBP_OnItemCreated_Parms, Item), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Item Created" },
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFItemWidget, nullptr, "BP_OnItemCreated", nullptr, nullptr, sizeof(IFItemWidget_eventBP_OnItemCreated_Parms), Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IFItemWidget_eventBP_OnItemRemoved_Parms, Item), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Item Removed" },
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIFItemWidget, nullptr, "BP_OnItemRemoved", nullptr, nullptr, sizeof(IFItemWidget_eventBP_OnItemRemoved_Parms), Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIFItemWidget_NoRegister()
	{
		return UIFItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIFItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFrameworkUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIFItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIFItemWidget_BP_OnItemChanged, "BP_OnItemChanged" }, // 2922022268
		{ &Z_Construct_UFunction_UIFItemWidget_BP_OnItemCreated, "BP_OnItemCreated" }, // 2994062262
		{ &Z_Construct_UFunction_UIFItemWidget_BP_OnItemRemoved, "BP_OnItemRemoved" }, // 442795437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IFItemWidget.h" },
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemWidget_Statics::NewProp_DragVisual_MetaData[] = {
		{ "Category", "InventoryFramework" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIFItemWidget_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemWidget, DragVisual), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIFItemWidget_Statics::NewProp_DragVisual_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemWidget_Statics::NewProp_DragVisual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemWidget_Statics::NewProp_LocalIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFItemWidget_Statics::NewProp_LocalIndex = { "LocalIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemWidget, LocalIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFItemWidget_Statics::NewProp_LocalIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemWidget_Statics::NewProp_LocalIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemWidget_Statics::NewProp_NetIndex_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Those indexes correponds to the client copy of items;\n\x09*/" },
		{ "ModuleRelativePath", "Public/IFItemWidget.h" },
		{ "ToolTip", "Those indexes correponds to the client copy of items;" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFItemWidget_Statics::NewProp_NetIndex = { "NetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemWidget, NetIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFItemWidget_Statics::NewProp_NetIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemWidget_Statics::NewProp_NetIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIFItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemWidget_Statics::NewProp_DragVisual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemWidget_Statics::NewProp_LocalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemWidget_Statics::NewProp_NetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFItemWidget_Statics::ClassParams = {
		&UIFItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIFItemWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UIFItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIFItemWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIFItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFItemWidget, 228979617);
	template<> INVENTORYFRAMEWORKUI_API UClass* StaticClass<UIFItemWidget>()
	{
		return UIFItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFItemWidget(Z_Construct_UClass_UIFItemWidget, &UIFItemWidget::StaticClass, TEXT("/Script/InventoryFrameworkUI"), TEXT("UIFItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
