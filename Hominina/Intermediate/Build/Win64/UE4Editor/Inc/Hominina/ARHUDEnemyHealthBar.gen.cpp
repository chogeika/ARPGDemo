// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/HUD/ARHUDEnemyHealthBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHUDEnemyHealthBar() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARHUDEnemyHealthBar_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDEnemyHealthBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UARHUDEnemyHealthBar::StaticRegisterNativesUARHUDEnemyHealthBar()
	{
	}
	UClass* Z_Construct_UClass_UARHUDEnemyHealthBar_NoRegister()
	{
		return UARHUDEnemyHealthBar::StaticClass();
	}
	struct Z_Construct_UClass_UARHUDEnemyHealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HUD/ARHUDEnemyHealthBar.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDEnemyHealthBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARHUDEnemyHealthBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDEnemyHealthBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARHUDEnemyHealthBar, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::NewProp_HealthBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::NewProp_HealthBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::NewProp_HealthBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARHUDEnemyHealthBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::ClassParams = {
		&UARHUDEnemyHealthBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARHUDEnemyHealthBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARHUDEnemyHealthBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARHUDEnemyHealthBar, 3887234090);
	template<> HOMININA_API UClass* StaticClass<UARHUDEnemyHealthBar>()
	{
		return UARHUDEnemyHealthBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARHUDEnemyHealthBar(Z_Construct_UClass_UARHUDEnemyHealthBar, &UARHUDEnemyHealthBar::StaticClass, TEXT("/Script/Hominina"), TEXT("UARHUDEnemyHealthBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARHUDEnemyHealthBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
