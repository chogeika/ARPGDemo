// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Attributes/ARHealthExtension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHealthExtension() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARHealthExtension_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARHealthExtension();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributeExtension();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void UARHealthExtension::StaticRegisterNativesUARHealthExtension()
	{
	}
	UClass* Z_Construct_UClass_UARHealthExtension_NoRegister()
	{
		return UARHealthExtension::StaticClass();
	}
	struct Z_Construct_UClass_UARHealthExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARHealthExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAttributeExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARHealthExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Attributes/ARHealthExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Attributes/ARHealthExtension.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARHealthExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARHealthExtension>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARHealthExtension_Statics::ClassParams = {
		&UARHealthExtension::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARHealthExtension_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARHealthExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARHealthExtension()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARHealthExtension_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARHealthExtension, 1535788729);
	template<> HOMININA_API UClass* StaticClass<UARHealthExtension>()
	{
		return UARHealthExtension::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARHealthExtension(Z_Construct_UClass_UARHealthExtension, &UARHealthExtension::StaticClass, TEXT("/Script/Hominina"), TEXT("UARHealthExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARHealthExtension);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
