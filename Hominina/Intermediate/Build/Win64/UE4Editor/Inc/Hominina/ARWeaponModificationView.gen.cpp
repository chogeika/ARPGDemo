// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/Weapons/ARWeaponModificationView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARWeaponModificationView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponModificationView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponModificationView();
	HOMININA_API UClass* Z_Construct_UClass_UARUMGWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemMagazineView_NoRegister();
// End Cross Module References
	void UARWeaponModificationView::StaticRegisterNativesUARWeaponModificationView()
	{
		UClass* Class = UARWeaponModificationView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseModificationView", &UARWeaponModificationView::execCloseModificationView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARWeaponModificationView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponModificationView, nullptr, "CloseModificationView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARWeaponModificationView_NoRegister()
	{
		return UARWeaponModificationView::StaticClass();
	}
	struct Z_Construct_UClass_UARWeaponModificationView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpgradeList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseUpgradeView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseUpgradeView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineUpgrade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineUpgrade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARWeaponModificationView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARUMGWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARWeaponModificationView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARWeaponModificationView_CloseModificationView, "CloseModificationView" }, // 533472896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponModificationView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/Weapons/ARWeaponModificationView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARWeaponModificationView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_UpgradeList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARWeaponModificationView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_UpgradeList = { "UpgradeList", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponModificationView, UpgradeList), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_UpgradeList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_UpgradeList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_CloseUpgradeView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARWeaponModificationView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_CloseUpgradeView = { "CloseUpgradeView", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponModificationView, CloseUpgradeView), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_CloseUpgradeView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_CloseUpgradeView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_MagazineUpgrade_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/ARWeaponModificationView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_MagazineUpgrade = { "MagazineUpgrade", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponModificationView, MagazineUpgrade), Z_Construct_UClass_UARItemMagazineView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_MagazineUpgrade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_MagazineUpgrade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARWeaponModificationView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_UpgradeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_CloseUpgradeView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponModificationView_Statics::NewProp_MagazineUpgrade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARWeaponModificationView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARWeaponModificationView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARWeaponModificationView_Statics::ClassParams = {
		&UARWeaponModificationView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARWeaponModificationView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARWeaponModificationView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARWeaponModificationView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARWeaponModificationView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARWeaponModificationView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARWeaponModificationView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARWeaponModificationView, 3176284911);
	template<> HOMININA_API UClass* StaticClass<UARWeaponModificationView>()
	{
		return UARWeaponModificationView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARWeaponModificationView(Z_Construct_UClass_UARWeaponModificationView, &UARWeaponModificationView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARWeaponModificationView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARWeaponModificationView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
