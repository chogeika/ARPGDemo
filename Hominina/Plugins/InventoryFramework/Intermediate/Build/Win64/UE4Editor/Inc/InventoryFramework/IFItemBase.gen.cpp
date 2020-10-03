// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryFramework/Public/IFItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFItemBase() {}
// Cross Module References
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase_NoRegister();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFItemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InventoryFramework();
// End Cross Module References
	void UIFItemBase::StaticRegisterNativesUIFItemBase()
	{
	}
	UClass* Z_Construct_UClass_UIFItemBase_NoRegister()
	{
		return UIFItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UIFItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IFItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IFItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemBase_Statics::NewProp_NetIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/IFItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFItemBase_Statics::NewProp_NetIndex = { "NetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemBase, NetIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFItemBase_Statics::NewProp_NetIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemBase_Statics::NewProp_NetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFItemBase_Statics::NewProp_LocalIndex_MetaData[] = {
		{ "Comment", "//Possibly just one index, if we are going to bypass unreal replication\n//and just send items as json from server and then decode them and insert in map.\n" },
		{ "ModuleRelativePath", "Public/IFItemBase.h" },
		{ "ToolTip", "Possibly just one index, if we are going to bypass unreal replication\nand just send items as json from server and then decode them and insert in map." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIFItemBase_Statics::NewProp_LocalIndex = { "LocalIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIFItemBase, LocalIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIFItemBase_Statics::NewProp_LocalIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIFItemBase_Statics::NewProp_LocalIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIFItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemBase_Statics::NewProp_NetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIFItemBase_Statics::NewProp_LocalIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFItemBase_Statics::ClassParams = {
		&UIFItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIFItemBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UIFItemBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIFItemBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIFItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFItemBase, 1325969076);
	template<> INVENTORYFRAMEWORK_API UClass* StaticClass<UIFItemBase>()
	{
		return UIFItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFItemBase(Z_Construct_UClass_UIFItemBase, &UIFItemBase::StaticClass, TEXT("/Script/InventoryFramework"), TEXT("UIFItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
