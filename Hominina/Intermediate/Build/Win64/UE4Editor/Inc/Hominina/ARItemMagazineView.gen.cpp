// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/Weapons/Modifications/ARItemMagazineView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemMagazineView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARItemMagazineView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemMagazineView();
	HOMININA_API UClass* Z_Construct_UClass_UARItemView();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponUpgradeItem_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeapon_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved();
// End Cross Module References
	void UARItemMagazineView::StaticRegisterNativesUARItemMagazineView()
	{
		UClass* Class = UARItemMagazineView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMagazineUpgradeInstalled", &UARItemMagazineView::execOnMagazineUpgradeInstalled },
			{ "OnMagazineUpgradeRemoved", &UARItemMagazineView::execOnMagazineUpgradeRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics
	{
		struct ARItemMagazineView_eventOnMagazineUpgradeInstalled_Parms
		{
			UARItemWeapon* Weapon;
			UARWeaponUpgradeItem* Upgrade;
			int8 WeaponIndex;
		};
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Upgrade;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemMagazineView_eventOnMagazineUpgradeInstalled_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::NewProp_Upgrade = { "Upgrade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemMagazineView_eventOnMagazineUpgradeInstalled_Parms, Upgrade), Z_Construct_UClass_UARWeaponUpgradeItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemMagazineView_eventOnMagazineUpgradeInstalled_Parms, Weapon), Z_Construct_UClass_UARItemWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::NewProp_Upgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/Modifications/ARItemMagazineView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARItemMagazineView, nullptr, "OnMagazineUpgradeInstalled", nullptr, nullptr, sizeof(ARItemMagazineView_eventOnMagazineUpgradeInstalled_Parms), Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics
	{
		struct ARItemMagazineView_eventOnMagazineUpgradeRemoved_Parms
		{
			UARItemWeapon* Weapon;
			UARWeaponUpgradeItem* Upgrade;
			int8 WeaponIndex;
		};
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Upgrade;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemMagazineView_eventOnMagazineUpgradeRemoved_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::NewProp_Upgrade = { "Upgrade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemMagazineView_eventOnMagazineUpgradeRemoved_Parms, Upgrade), Z_Construct_UClass_UARWeaponUpgradeItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemMagazineView_eventOnMagazineUpgradeRemoved_Parms, Weapon), Z_Construct_UClass_UARItemWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::NewProp_Upgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/Modifications/ARItemMagazineView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARItemMagazineView, nullptr, "OnMagazineUpgradeRemoved", nullptr, nullptr, sizeof(ARItemMagazineView_eventOnMagazineUpgradeRemoved_Parms), Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARItemMagazineView_NoRegister()
	{
		return UARItemMagazineView::StaticClass();
	}
	struct Z_Construct_UClass_UARItemMagazineView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemMagazineView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARItemView,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARItemMagazineView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeInstalled, "OnMagazineUpgradeInstalled" }, // 886770245
		{ &Z_Construct_UFunction_UARItemMagazineView_OnMagazineUpgradeRemoved, "OnMagazineUpgradeRemoved" }, // 3641353663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemMagazineView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/Weapons/Modifications/ARItemMagazineView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/Weapons/Modifications/ARItemMagazineView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemMagazineView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemMagazineView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemMagazineView_Statics::ClassParams = {
		&UARItemMagazineView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARItemMagazineView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemMagazineView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemMagazineView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemMagazineView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemMagazineView, 3194024522);
	template<> HOMININA_API UClass* StaticClass<UARItemMagazineView>()
	{
		return UARItemMagazineView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemMagazineView(Z_Construct_UClass_UARItemMagazineView, &UARItemMagazineView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemMagazineView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemMagazineView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
