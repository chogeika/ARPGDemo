// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/EffectTasks/AFEffectTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectTask() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFTaskBase();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExtension_NoRegister();
// End Cross Module References
	void UAFEffectTask::StaticRegisterNativesUAFEffectTask()
	{
	}
	UClass* Z_Construct_UClass_UAFEffectTask_NoRegister()
	{
		return UAFEffectTask::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ExposedAsyncProxy", "true" },
		{ "IncludePath", "Effects/EffectTasks/AFEffectTask.h" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_Statics::NewProp_EffectsComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFEffectTask_Statics::NewProp_EffectsComponent = { "EffectsComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectTask, EffectsComponent), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_Statics::NewProp_EffectsComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_Statics::NewProp_EffectsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_Statics::NewProp_Effect_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFEffectTask_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectTask, Effect), Z_Construct_UClass_UGAEffectExtension_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_Statics::NewProp_Effect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_Statics::NewProp_Effect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFEffectTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectTask_Statics::NewProp_EffectsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectTask_Statics::NewProp_Effect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectTask_Statics::ClassParams = {
		&UAFEffectTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFEffectTask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectTask, 2253555815);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectTask>()
	{
		return UAFEffectTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectTask(Z_Construct_UClass_UAFEffectTask, &UAFEffectTask::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
