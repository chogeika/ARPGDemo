// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/GAPhysicalMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAPhysicalMaterial() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAPhysicalMaterial_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAPhysicalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
// End Cross Module References
	void UGAPhysicalMaterial::StaticRegisterNativesUGAPhysicalMaterial()
	{
	}
	UClass* Z_Construct_UClass_UGAPhysicalMaterial_NoRegister()
	{
		return UGAPhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UGAPhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceHitFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceHitFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAPhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAPhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GAPhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GAPhysicalMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAPhysicalMaterial_Statics::NewProp_SurfaceHitFX_MetaData[] = {
		{ "Category", "Fx" },
		{ "ModuleRelativePath", "Public/GAPhysicalMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAPhysicalMaterial_Statics::NewProp_SurfaceHitFX = { "SurfaceHitFX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAPhysicalMaterial, SurfaceHitFX), Z_Construct_UClass_UParticleEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAPhysicalMaterial_Statics::NewProp_SurfaceHitFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAPhysicalMaterial_Statics::NewProp_SurfaceHitFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAPhysicalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAPhysicalMaterial_Statics::NewProp_SurfaceHitFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAPhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAPhysicalMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAPhysicalMaterial_Statics::ClassParams = {
		&UGAPhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAPhysicalMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGAPhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAPhysicalMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAPhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAPhysicalMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAPhysicalMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAPhysicalMaterial, 370981584);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAPhysicalMaterial>()
	{
		return UGAPhysicalMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAPhysicalMaterial(Z_Construct_UClass_UGAPhysicalMaterial, &UGAPhysicalMaterial::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAPhysicalMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAPhysicalMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
