// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/HUD/ARHUDPlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHUDPlayerInfo() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARHUDPlayerInfo_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDPlayerInfo();
	HOMININA_API UClass* Z_Construct_UClass_UARUMGWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UARHUDPlayerInfo::StaticRegisterNativesUARHUDPlayerInfo()
	{
	}
	UClass* Z_Construct_UClass_UARHUDPlayerInfo_NoRegister()
	{
		return UARHUDPlayerInfo::StaticClass();
	}
	struct Z_Construct_UClass_UARHUDPlayerInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARHUDPlayerInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARUMGWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDPlayerInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HUD/ARHUDPlayerInfo.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDPlayerInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerEnergy_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARHUDPlayerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerEnergy = { "PlayerEnergy", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARHUDPlayerInfo, PlayerEnergy), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerStamina_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARHUDPlayerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerStamina = { "PlayerStamina", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARHUDPlayerInfo, PlayerStamina), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerStamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARHUDPlayerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/ARHUDPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARHUDPlayerInfo, PlayerHealth), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARHUDPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARHUDPlayerInfo_Statics::NewProp_PlayerHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARHUDPlayerInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARHUDPlayerInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARHUDPlayerInfo_Statics::ClassParams = {
		&UARHUDPlayerInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARHUDPlayerInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARHUDPlayerInfo_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARHUDPlayerInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARHUDPlayerInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARHUDPlayerInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARHUDPlayerInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARHUDPlayerInfo, 25260345);
	template<> HOMININA_API UClass* StaticClass<UARHUDPlayerInfo>()
	{
		return UARHUDPlayerInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARHUDPlayerInfo(Z_Construct_UClass_UARHUDPlayerInfo, &UARHUDPlayerInfo::StaticClass, TEXT("/Script/Hominina"), TEXT("UARHUDPlayerInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARHUDPlayerInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
