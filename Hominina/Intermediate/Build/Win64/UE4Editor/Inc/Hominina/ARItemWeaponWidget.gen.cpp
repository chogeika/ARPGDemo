// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/Weapons/ARItemWeaponWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemWeaponWidget() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeaponWidget_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeaponWidget();
	HOMININA_API UClass* Z_Construct_UClass_UARItemView();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2();
	HOMININA_API UFunction* Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2();
	HOMININA_API UClass* Z_Construct_UClass_UARItemTooltipView_NoRegister();
// End Cross Module References
	void UARItemWeaponWidget::StaticRegisterNativesUARItemWeaponWidget()
	{
		UClass* Class = UARItemWeaponWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWeaponAdded2", &UARItemWeaponWidget::execOnWeaponAdded2 },
			{ "OnWeaponRemoved2", &UARItemWeaponWidget::execOnWeaponRemoved2 },
			{ "OnWeaponUpdated2", &UARItemWeaponWidget::execOnWeaponUpdated2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics
	{
		struct ARItemWeaponWidget_eventOnWeaponAdded2_Parms
		{
			uint8 InNetIndex;
			uint8 InLocalIndex;
			UIFItemBase* InItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLocalIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponAdded2_Parms, InItem), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::NewProp_InLocalIndex = { "InLocalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponAdded2_Parms, InLocalIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::NewProp_InNetIndex = { "InNetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponAdded2_Parms, InNetIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::NewProp_InItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::NewProp_InLocalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::NewProp_InNetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARItemWeaponWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARItemWeaponWidget, nullptr, "OnWeaponAdded2", nullptr, nullptr, sizeof(ARItemWeaponWidget_eventOnWeaponAdded2_Parms), Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics
	{
		struct ARItemWeaponWidget_eventOnWeaponRemoved2_Parms
		{
			uint8 InNetIndex;
			uint8 InLocalIndex;
			UIFItemBase* InItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLocalIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponRemoved2_Parms, InItem), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::NewProp_InLocalIndex = { "InLocalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponRemoved2_Parms, InLocalIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::NewProp_InNetIndex = { "InNetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponRemoved2_Parms, InNetIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::NewProp_InItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::NewProp_InLocalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::NewProp_InNetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARItemWeaponWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARItemWeaponWidget, nullptr, "OnWeaponRemoved2", nullptr, nullptr, sizeof(ARItemWeaponWidget_eventOnWeaponRemoved2_Parms), Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics
	{
		struct ARItemWeaponWidget_eventOnWeaponUpdated2_Parms
		{
			uint8 InNetIndex;
			uint8 InLocalIndex;
			UIFItemBase* InItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLocalIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponUpdated2_Parms, InItem), Z_Construct_UClass_UIFItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::NewProp_InLocalIndex = { "InLocalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponUpdated2_Parms, InLocalIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::NewProp_InNetIndex = { "InNetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemWeaponWidget_eventOnWeaponUpdated2_Parms, InNetIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::NewProp_InItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::NewProp_InLocalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::NewProp_InNetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARItemWeaponWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARItemWeaponWidget, nullptr, "OnWeaponUpdated2", nullptr, nullptr, sizeof(ARItemWeaponWidget_eventOnWeaponUpdated2_Parms), Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARItemWeaponWidget_NoRegister()
	{
		return UARItemWeaponWidget::StaticClass();
	}
	struct Z_Construct_UClass_UARItemWeaponWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemWeaponWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARItemView,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARItemWeaponWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponAdded2, "OnWeaponAdded2" }, // 1293855236
		{ &Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponRemoved2, "OnWeaponRemoved2" }, // 233991388
		{ &Z_Construct_UFunction_UARItemWeaponWidget_OnWeaponUpdated2, "OnWeaponUpdated2" }, // 1230447358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeaponWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/Weapons/ARItemWeaponWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARItemWeaponWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeaponWidget_Statics::NewProp_WeaponTooltip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARItemWeaponWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARItemWeaponWidget_Statics::NewProp_WeaponTooltip = { "WeaponTooltip", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeaponWidget, WeaponTooltip), Z_Construct_UClass_UARItemTooltipView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemWeaponWidget_Statics::NewProp_WeaponTooltip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeaponWidget_Statics::NewProp_WeaponTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARItemWeaponWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeaponWidget_Statics::NewProp_WeaponTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemWeaponWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemWeaponWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemWeaponWidget_Statics::ClassParams = {
		&UARItemWeaponWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARItemWeaponWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARItemWeaponWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARItemWeaponWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemWeaponWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemWeaponWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemWeaponWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemWeaponWidget, 1639830890);
	template<> HOMININA_API UClass* StaticClass<UARItemWeaponWidget>()
	{
		return UARItemWeaponWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemWeaponWidget(Z_Construct_UClass_UARItemWeaponWidget, &UARItemWeaponWidget::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemWeaponWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemWeaponWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
