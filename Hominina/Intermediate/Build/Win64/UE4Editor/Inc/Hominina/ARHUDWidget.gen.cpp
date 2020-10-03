// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/ARHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHUDWidget() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARHUDWidget_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDPlayerInfo_NoRegister();
// End Cross Module References
	void UARHUDWidget::StaticRegisterNativesUARHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UARHUDWidget_NoRegister()
	{
		return UARHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UARHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ARHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ARHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDWidget_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ARHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARHUDWidget_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARHUDWidget, PlayerInfo), Z_Construct_UClass_UARHUDPlayerInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARHUDWidget_Statics::NewProp_PlayerInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARHUDWidget_Statics::NewProp_PlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARHUDWidget_Statics::NewProp_PlayerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARHUDWidget_Statics::ClassParams = {
		&UARHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARHUDWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARHUDWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARHUDWidget, 1016562753);
	template<> HOMININA_API UClass* StaticClass<UARHUDWidget>()
	{
		return UARHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARHUDWidget(Z_Construct_UClass_UARHUDWidget, &UARHUDWidget::StaticClass, TEXT("/Script/Hominina"), TEXT("UARHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
