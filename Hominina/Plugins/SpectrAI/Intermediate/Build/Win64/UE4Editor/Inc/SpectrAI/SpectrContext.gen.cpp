// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrContext() {}
// Cross Module References
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrContext_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
// End Cross Module References
	void USpectrContext::StaticRegisterNativesUSpectrContext()
	{
	}
	UClass* Z_Construct_UClass_USpectrContext_NoRegister()
	{
		return USpectrContext::StaticClass();
	}
	struct Z_Construct_UClass_USpectrContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectrContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpectrContext.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpectrContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectrContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectrContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectrContext_Statics::ClassParams = {
		&USpectrContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpectrContext_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpectrContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectrContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectrContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectrContext, 1873535752);
	template<> SPECTRAI_API UClass* StaticClass<USpectrContext>()
	{
		return USpectrContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectrContext(Z_Construct_UClass_USpectrContext, &USpectrContext::StaticClass, TEXT("/Script/SpectrAI"), TEXT("USpectrContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectrContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
