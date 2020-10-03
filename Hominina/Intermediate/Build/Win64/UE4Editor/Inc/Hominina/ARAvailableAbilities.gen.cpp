// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Abilities/ARAvailableAbilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARAvailableAbilities() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARAvailableAbilities_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARAvailableAbilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UARAvailableAbilities::StaticRegisterNativesUARAvailableAbilities()
	{
	}
	UClass* Z_Construct_UClass_UARAvailableAbilities_NoRegister()
	{
		return UARAvailableAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UARAvailableAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARAvailableAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAvailableAbilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/ARAvailableAbilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/ARAvailableAbilities.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "ARAvailableAbilities" },
		{ "ModuleRelativePath", "Public/Abilities/ARAvailableAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARAvailableAbilities, Abilities), METADATA_PARAMS(Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARAvailableAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARAvailableAbilities_Statics::NewProp_Abilities_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARAvailableAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARAvailableAbilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARAvailableAbilities_Statics::ClassParams = {
		&UARAvailableAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARAvailableAbilities_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARAvailableAbilities_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARAvailableAbilities_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARAvailableAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARAvailableAbilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARAvailableAbilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARAvailableAbilities, 2187987293);
	template<> HOMININA_API UClass* StaticClass<UARAvailableAbilities>()
	{
		return UARAvailableAbilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARAvailableAbilities(Z_Construct_UClass_UARAvailableAbilities, &UARAvailableAbilities::StaticClass, TEXT("/Script/Hominina"), TEXT("UARAvailableAbilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARAvailableAbilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
