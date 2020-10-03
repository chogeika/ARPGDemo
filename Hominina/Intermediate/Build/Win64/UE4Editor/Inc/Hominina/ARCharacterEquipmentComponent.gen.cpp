// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Equipment/ARCharacterEquipmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCharacterEquipmentComponent() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARCharacterEquipmentComponent_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARCharacterEquipmentComponent();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFEquipmentComponent();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARCharacterEquipmentComponent::StaticRegisterNativesUARCharacterEquipmentComponent()
	{
	}
	UClass* Z_Construct_UClass_UARCharacterEquipmentComponent_NoRegister()
	{
		return UARCharacterEquipmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARCharacterEquipmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIFEquipmentComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Equipment/ARCharacterEquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/Equipment/ARCharacterEquipmentComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCharacterEquipmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::ClassParams = {
		&UARCharacterEquipmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCharacterEquipmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARCharacterEquipmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARCharacterEquipmentComponent, 2041840797);
	template<> HOMININA_API UClass* StaticClass<UARCharacterEquipmentComponent>()
	{
		return UARCharacterEquipmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARCharacterEquipmentComponent(Z_Construct_UClass_UARCharacterEquipmentComponent, &UARCharacterEquipmentComponent::StaticClass, TEXT("/Script/Hominina"), TEXT("UARCharacterEquipmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCharacterEquipmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
