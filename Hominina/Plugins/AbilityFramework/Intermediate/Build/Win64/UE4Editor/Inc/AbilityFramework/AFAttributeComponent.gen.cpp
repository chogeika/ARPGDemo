// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFAttributeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAttributeComponent() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeComponent_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAttributeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UAFAttributeComponent::StaticRegisterNativesUAFAttributeComponent()
	{
	}
	UClass* Z_Construct_UClass_UAFAttributeComponent_NoRegister()
	{
		return UAFAttributeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAFAttributeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAttributeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAttributeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AFAttributeComponent.h" },
		{ "ModuleRelativePath", "Public/AFAttributeComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAttributeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAttributeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAttributeComponent_Statics::ClassParams = {
		&UAFAttributeComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFAttributeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAttributeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAttributeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAttributeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAttributeComponent, 2938547004);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAttributeComponent>()
	{
		return UAFAttributeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAttributeComponent(Z_Construct_UClass_UAFAttributeComponent, &UAFAttributeComponent::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAttributeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAttributeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
