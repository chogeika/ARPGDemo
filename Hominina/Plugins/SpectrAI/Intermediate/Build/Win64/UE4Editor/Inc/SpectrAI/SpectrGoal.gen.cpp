// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrGoal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrGoal() {}
// Cross Module References
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrGoal_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrGoal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
	SPECTRAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpectrEvaluator();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrConsideration_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USpectrGoal::StaticRegisterNativesUSpectrGoal()
	{
	}
	UClass* Z_Construct_UClass_USpectrGoal_NoRegister()
	{
		return USpectrGoal::StaticClass();
	}
	struct Z_Construct_UClass_USpectrGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreEvaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreEvaluator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Considerations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Considerations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Considerations_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Considerations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FinishedState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinishedState_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FinishedState_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Goal_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectrGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrGoal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpectrGoal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpectrGoal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrGoal_Statics::NewProp_ScoreEvaluator_MetaData[] = {
		{ "Category", "SpectrGoal" },
		{ "ModuleRelativePath", "Public/SpectrGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_ScoreEvaluator = { "ScoreEvaluator", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrGoal, ScoreEvaluator), Z_Construct_UScriptStruct_FSpectrEvaluator, METADATA_PARAMS(Z_Construct_UClass_USpectrGoal_Statics::NewProp_ScoreEvaluator_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::NewProp_ScoreEvaluator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_MetaData[] = {
		{ "Category", "SpectrGoal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations = { "Considerations", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrGoal, Considerations), METADATA_PARAMS(Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_Inner_MetaData[] = {
		{ "Category", "SpectrGoal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_Inner = { "Considerations", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrConsideration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_MetaData[] = {
		{ "Category", "SpectrGoal" },
		{ "Comment", "//What to change in state if goal has been achieved ?\n" },
		{ "ModuleRelativePath", "Public/SpectrGoal.h" },
		{ "ToolTip", "What to change in state if goal has been achieved ?" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState = { "FinishedState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrGoal, FinishedState), METADATA_PARAMS(Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_Key_KeyProp = { "FinishedState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_ValueProp = { "FinishedState", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "SpectrGoal" },
		{ "ModuleRelativePath", "Public/SpectrGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrGoal, Goal), METADATA_PARAMS(Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_Key_KeyProp = { "Goal_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_ValueProp = { "Goal", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectrGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_ScoreEvaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_Considerations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_FinishedState_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrGoal_Statics::NewProp_Goal_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectrGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectrGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectrGoal_Statics::ClassParams = {
		&USpectrGoal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpectrGoal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpectrGoal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpectrGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectrGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectrGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectrGoal, 1782067281);
	template<> SPECTRAI_API UClass* StaticClass<USpectrGoal>()
	{
		return USpectrGoal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectrGoal(Z_Construct_UClass_USpectrGoal, &USpectrGoal::StaticClass, TEXT("/Script/SpectrAI"), TEXT("USpectrGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectrGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
