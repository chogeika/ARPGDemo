// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/ARUIInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARUIInventoryComponent() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARUIInventoryComponent_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARUIInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponModificationView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARInventoryScreenWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMININA_API UClass* Z_Construct_UClass_UARItemTooltipView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARListItemMagazineView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARListItemWeaponWidget_NoRegister();
// End Cross Module References
	void UARUIInventoryComponent::StaticRegisterNativesUARUIInventoryComponent()
	{
	}
	UClass* Z_Construct_UClass_UARUIInventoryComponent_NoRegister()
	{
		return UARUIInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARUIInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponModificationView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponModificationView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponItemTooltipViewClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponItemTooltipViewClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponModificationViewClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponModificationViewClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListItemMagazinelass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListItemMagazinelass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListItemWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListItemWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryViewClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryViewClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARUIInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UI/Inventory/ARUIInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_SelectedWeapon_MetaData[] = {
		{ "Category", "ActionRPGGame|UI|Inventory" },
		{ "Comment", "/* NetIndex of selected Weapon. */" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
		{ "ToolTip", "NetIndex of selected Weapon." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_SelectedWeapon = { "SelectedWeapon", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, SelectedWeapon), nullptr, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_SelectedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_SelectedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationView_MetaData[] = {
		{ "Category", "ActionRPGGame|UI|Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationView = { "WeaponModificationView", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, WeaponModificationView), Z_Construct_UClass_UARWeaponModificationView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryView_MetaData[] = {
		{ "Category", "ActionRPGGame|UI|Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryView = { "InventoryView", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, InventoryView), Z_Construct_UClass_UARInventoryScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponItemTooltipViewClass_MetaData[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponItemTooltipViewClass = { "WeaponItemTooltipViewClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, WeaponItemTooltipViewClass), Z_Construct_UClass_UARItemTooltipView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponItemTooltipViewClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponItemTooltipViewClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationViewClass_MetaData[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationViewClass = { "WeaponModificationViewClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, WeaponModificationViewClass), Z_Construct_UClass_UARWeaponModificationView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationViewClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationViewClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemMagazinelass_MetaData[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemMagazinelass = { "ListItemMagazinelass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, ListItemMagazinelass), Z_Construct_UClass_UARListItemMagazineView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemMagazinelass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemMagazinelass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemWeaponClass_MetaData[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemWeaponClass = { "ListItemWeaponClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, ListItemWeaponClass), Z_Construct_UClass_UARListItemWeaponWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemWeaponClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryViewClass_MetaData[] = {
		{ "Category", "Views" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARUIInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryViewClass = { "InventoryViewClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARUIInventoryComponent, InventoryViewClass), Z_Construct_UClass_UARInventoryScreenWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryViewClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryViewClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARUIInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_SelectedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponItemTooltipViewClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_WeaponModificationViewClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemMagazinelass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_ListItemWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARUIInventoryComponent_Statics::NewProp_InventoryViewClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARUIInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARUIInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARUIInventoryComponent_Statics::ClassParams = {
		&UARUIInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARUIInventoryComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARUIInventoryComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARUIInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARUIInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARUIInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARUIInventoryComponent, 2323680080);
	template<> HOMININA_API UClass* StaticClass<UARUIInventoryComponent>()
	{
		return UARUIInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARUIInventoryComponent(Z_Construct_UClass_UARUIInventoryComponent, &UARUIInventoryComponent::StaticClass, TEXT("/Script/Hominina"), TEXT("UARUIInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARUIInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
