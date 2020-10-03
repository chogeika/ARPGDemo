// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFramework/Public/IFInventoryInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFInventoryInterface() {}
// Cross Module References
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryInterface_NoRegister();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_InventoryFramework();
// End Cross Module References
	void UIFInventoryInterface::StaticRegisterNativesUIFInventoryInterface()
	{
	}
	UClass* Z_Construct_UClass_UIFInventoryInterface_NoRegister()
	{
		return UIFInventoryInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIFInventoryInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFInventoryInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFInventoryInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFInventoryInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFInventoryInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIFInventoryInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFInventoryInterface_Statics::ClassParams = {
		&UIFInventoryInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIFInventoryInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIFInventoryInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFInventoryInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFInventoryInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFInventoryInterface, 1354328620);
	template<> INVENTORYFRAMEWORK_API UClass* StaticClass<UIFInventoryInterface>()
	{
		return UIFInventoryInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFInventoryInterface(Z_Construct_UClass_UIFInventoryInterface, &UIFInventoryInterface::StaticClass, TEXT("/Script/InventoryFramework"), TEXT("UIFInventoryInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFInventoryInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
