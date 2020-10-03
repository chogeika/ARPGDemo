// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Abilities/Tasks/GAAbilityTask.h"
#include "AbilityFramework/Public/Abilities/GAAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAbilityTask() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityTask();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFTaskBase();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
	void UGAAbilityTask::StaticRegisterNativesUGAAbilityTask()
	{
	}
	UClass* Z_Construct_UClass_UGAAbilityTask_NoRegister()
	{
		return UGAAbilityTask::StaticClass();
	}
	struct Z_Construct_UClass_UGAAbilityTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAbilityTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAbilityTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09""AbilityActions are generic (preferably C++) defined actions, which then can be added to ability and\n\x09the should be activated from ability. \n\x09Then can perform tasks, like spawn tagetting helpers (splines, circles), spawn actors, \n\x09gather targeting data etc.\n\n\x09Should they be activated automatically after ability is initialized, (it'e ability enterted in\n\x09""active state, which means it's ready to be fired and display helpers, but did not yet received input,\n\x09or should designer in blueprint decide when to launch actions ?).\n*/" },
		{ "IncludePath", "Abilities/Tasks/GAAbilityTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GAAbilityTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AbilityActions are generic (preferably C++) defined actions, which then can be added to ability and\nthe should be activated from ability.\nThen can perform tasks, like spawn tagetting helpers (splines, circles), spawn actors,\ngather targeting data etc.\n\nShould they be activated automatically after ability is initialized, (it'e ability enterted in\nactive state, which means it's ready to be fired and display helpers, but did not yet received input,\nor should designer in blueprint decide when to launch actions ?)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAbilityTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAbilityTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAbilityTask_Statics::ClassParams = {
		&UGAAbilityTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAAbilityTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAbilityTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAbilityTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAbilityTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAbilityTask, 2531485947);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAbilityTask>()
	{
		return UGAAbilityTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAbilityTask(Z_Construct_UClass_UGAAbilityTask, &UGAAbilityTask::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAbilityTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAbilityTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
