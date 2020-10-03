// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/GAUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAUIData() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAUIData_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAUIData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UGAUIData::StaticRegisterNativesUGAUIData()
	{
	}
	UClass* Z_Construct_UClass_UGAUIData_NoRegister()
	{
		return UGAUIData::StaticClass();
	}
	struct Z_Construct_UClass_UGAUIData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAUIData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAUIData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for UI data for effect.\n * Do not instance it. Just use CDO, to get data from it.\n */" },
		{ "IncludePath", "GAUIData.h" },
		{ "ModuleRelativePath", "Public/GAUIData.h" },
		{ "ToolTip", "Base class for UI data for effect.\nDo not instance it. Just use CDO, to get data from it." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAUIData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAUIData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAUIData_Statics::ClassParams = {
		&UGAUIData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAUIData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAUIData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAUIData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAUIData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAUIData, 2552560494);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAUIData>()
	{
		return UGAUIData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAUIData(Z_Construct_UClass_UGAUIData, &UGAUIData::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAUIData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAUIData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
