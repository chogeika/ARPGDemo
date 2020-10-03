// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectCueSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectCueSequence() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectCueSequence_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectCueSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void UGAEffectCueSequence::StaticRegisterNativesUGAEffectCueSequence()
	{
		UClass* Class = UGAEffectCueSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndTime", &UGAEffectCueSequence::execGetEndTime },
			{ "GetStartTime", &UGAEffectCueSequence::execGetStartTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics
	{
		struct GAEffectCueSequence_eventGetEndTime_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAEffectCueSequence_eventGetEndTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Get the end time of this animation.\n\x09*\n\x09* @return End time in seconds.\n\x09* @see GetStartTime\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectCueSequence.h" },
		{ "ToolTip", "Get the end time of this animation.\n\n@return End time in seconds.\n@see GetStartTime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectCueSequence, nullptr, "GetEndTime", nullptr, nullptr, sizeof(GAEffectCueSequence_eventGetEndTime_Parms), Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics
	{
		struct GAEffectCueSequence_eventGetStartTime_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAEffectCueSequence_eventGetStartTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectCueSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectCueSequence, nullptr, "GetStartTime", nullptr, nullptr, sizeof(GAEffectCueSequence_eventGetStartTime_Parms), Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAEffectCueSequence_NoRegister()
	{
		return UGAEffectCueSequence::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectCueSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectCueSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAEffectCueSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAEffectCueSequence_GetEndTime, "GetEndTime" }, // 1401422408
		{ &Z_Construct_UFunction_UGAEffectCueSequence_GetStartTime, "GetStartTime" }, // 3330187710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectCueSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Effects/GAEffectCueSequence.h" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectCueSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectCueSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectCueSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAEffectCueSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectCueSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAEffectCueSequence_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectCueSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAEffectCueSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectCueSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectCueSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectCueSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectCueSequence_Statics::ClassParams = {
		&UGAEffectCueSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAEffectCueSequence_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAEffectCueSequence_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectCueSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectCueSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectCueSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectCueSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectCueSequence, 891114144);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAEffectCueSequence>()
	{
		return UGAEffectCueSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectCueSequence(Z_Construct_UClass_UGAEffectCueSequence, &UGAEffectCueSequence::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAEffectCueSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectCueSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
