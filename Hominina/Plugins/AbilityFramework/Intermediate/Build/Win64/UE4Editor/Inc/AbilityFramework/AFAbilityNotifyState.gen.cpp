// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AnimNotify/AFAbilityNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAbilityNotifyState() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityNotifyState_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UAFAbilityNotifyState::StaticRegisterNativesUAFAbilityNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UAFAbilityNotifyState_NoRegister()
	{
		return UAFAbilityNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UAFAbilityNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAbilitiesComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedAbilitiesComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAbilityNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Ability Notify State" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AFAbilityNotifyState.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAbilityNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_CachedAbilitiesComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAbilityNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_CachedAbilitiesComp = { "CachedAbilitiesComp", nullptr, (EPropertyFlags)0x0020080000080018, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityNotifyState, CachedAbilitiesComp), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_CachedAbilitiesComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_CachedAbilitiesComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AFAbilityNotifyState" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAbilityNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityNotifyState, Name), METADATA_PARAMS(Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "AFAbilityNotifyState" },
		{ "ModuleRelativePath", "Public/AnimNotify/AFAbilityNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFAbilityNotifyState, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFAbilityNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_CachedAbilitiesComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFAbilityNotifyState_Statics::NewProp_Tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAbilityNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFAbilityNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAbilityNotifyState_Statics::ClassParams = {
		&UAFAbilityNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFAbilityNotifyState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAFAbilityNotifyState_Statics::PropPointers),
		0,
		0x009130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFAbilityNotifyState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAbilityNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAbilityNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAbilityNotifyState, 2925546400);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAbilityNotifyState>()
	{
		return UAFAbilityNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAbilityNotifyState(Z_Construct_UClass_UAFAbilityNotifyState, &UAFAbilityNotifyState::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAbilityNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAbilityNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
