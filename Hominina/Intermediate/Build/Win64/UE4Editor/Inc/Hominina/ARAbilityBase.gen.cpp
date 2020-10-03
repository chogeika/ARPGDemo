// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Abilities/ARAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARAbilityBase() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARAbilityBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARAbilityBase();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_UARAbilityUIData_NoRegister();
// End Cross Module References
	void UARAbilityBase::StaticRegisterNativesUARAbilityBase()
	{
	}
	UClass* Z_Construct_UClass_UARAbilityBase_NoRegister()
	{
		return UARAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UARAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/ARAbilityBase.h" },
		{ "ModuleRelativePath", "Public/Abilities/ARAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAbilityBase_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "UI Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/ARAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARAbilityBase_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x001200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARAbilityBase, UIData), Z_Construct_UClass_UARAbilityUIData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARAbilityBase_Statics::NewProp_UIData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARAbilityBase_Statics::NewProp_UIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARAbilityBase_Statics::NewProp_UIData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARAbilityBase_Statics::ClassParams = {
		&UARAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARAbilityBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARAbilityBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARAbilityBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARAbilityBase, 3857016157);
	template<> HOMININA_API UClass* StaticClass<UARAbilityBase>()
	{
		return UARAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARAbilityBase(Z_Construct_UClass_UARAbilityBase, &UARAbilityBase::StaticClass, TEXT("/Script/Hominina"), TEXT("UARAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
