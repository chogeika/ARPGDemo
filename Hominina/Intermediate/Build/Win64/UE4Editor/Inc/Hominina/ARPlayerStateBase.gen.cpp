// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARPlayerStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPlayerStateBase() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARPlayerStateBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARPlayerStateBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void AARPlayerStateBase::StaticRegisterNativesAARPlayerStateBase()
	{
	}
	UClass* Z_Construct_UClass_AARPlayerStateBase_NoRegister()
	{
		return AARPlayerStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AARPlayerStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPlayerStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARPlayerStateBase.h" },
		{ "ModuleRelativePath", "Public/ARPlayerStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPlayerStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPlayerStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPlayerStateBase_Statics::ClassParams = {
		&AARPlayerStateBase::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARPlayerStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARPlayerStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPlayerStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPlayerStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPlayerStateBase, 3324628677);
	template<> HOMININA_API UClass* StaticClass<AARPlayerStateBase>()
	{
		return AARPlayerStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPlayerStateBase(Z_Construct_UClass_AARPlayerStateBase, &AARPlayerStateBase::StaticClass, TEXT("/Script/Hominina"), TEXT("AARPlayerStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPlayerStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
