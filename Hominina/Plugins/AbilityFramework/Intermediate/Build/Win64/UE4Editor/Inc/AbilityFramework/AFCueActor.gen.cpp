// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFCueActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFCueActor() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_AAFCueActor_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_AAFCueActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_AAFCueActor_BeginCue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_AAFCueActor_OnExecuted();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_AAFCueActor_OnExpired();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_AAFCueActor_OnRemoved();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectCueSequence_NoRegister();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FName NAME_AAFCueActor_BeginCue = FName(TEXT("BeginCue"));
	void AAFCueActor::BeginCue(AActor* InstigatorOut, AActor* TargetOut, UObject* Causer, FHitResult const& HitInfo)
	{
		AFCueActor_eventBeginCue_Parms Parms;
		Parms.InstigatorOut=InstigatorOut;
		Parms.TargetOut=TargetOut;
		Parms.Causer=Causer;
		Parms.HitInfo=HitInfo;
		ProcessEvent(FindFunctionChecked(NAME_AAFCueActor_BeginCue),&Parms);
	}
	static FName NAME_AAFCueActor_OnExecuted = FName(TEXT("OnExecuted"));
	void AAFCueActor::OnExecuted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAFCueActor_OnExecuted),NULL);
	}
	static FName NAME_AAFCueActor_OnExpired = FName(TEXT("OnExpired"));
	void AAFCueActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAFCueActor_OnExpired),NULL);
	}
	static FName NAME_AAFCueActor_OnRemoved = FName(TEXT("OnRemoved"));
	void AAFCueActor::OnRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAFCueActor_OnRemoved),NULL);
	}
	void AAFCueActor::StaticRegisterNativesAAFCueActor()
	{
	}
	struct Z_Construct_UFunction_AAFCueActor_BeginCue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetOut;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueActor_eventBeginCue_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_HitInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_HitInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueActor_eventBeginCue_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_TargetOut = { "TargetOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueActor_eventBeginCue_Parms, TargetOut), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_InstigatorOut = { "InstigatorOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueActor_eventBeginCue_Parms, InstigatorOut), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_TargetOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::NewProp_InstigatorOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFCueActor, nullptr, "BeginCue", nullptr, nullptr, sizeof(AFCueActor_eventBeginCue_Parms), Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFCueActor_BeginCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFCueActor_BeginCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFCueActor_OnExecuted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFCueActor_OnExecuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFCueActor_OnExecuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFCueActor, nullptr, "OnExecuted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFCueActor_OnExecuted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAFCueActor_OnExecuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFCueActor_OnExecuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFCueActor_OnExecuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFCueActor_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFCueActor_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFCueActor_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFCueActor, nullptr, "OnExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFCueActor_OnExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAFCueActor_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFCueActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFCueActor_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAFCueActor_OnRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFCueActor_OnRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFCueActor_OnRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFCueActor, nullptr, "OnRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFCueActor_OnRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAFCueActor_OnRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFCueActor_OnRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFCueActor_OnRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAFCueActor_NoRegister()
	{
		return AAFCueActor::StaticClass();
	}
	struct Z_Construct_UClass_AAFCueActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetBundleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectCueTagSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectCueTagSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFCueActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAFCueActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAFCueActor_BeginCue, "BeginCue" }, // 2030560019
		{ &Z_Construct_UFunction_AAFCueActor_OnExecuted, "OnExecuted" }, // 4180852377
		{ &Z_Construct_UFunction_AAFCueActor_OnExpired, "OnExpired" }, // 3610357479
		{ &Z_Construct_UFunction_AAFCueActor_OnRemoved, "OnRemoved" }, // 3094176550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effects/AFCueActor.h" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_PlaybackSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, SequencePlayer), Z_Construct_UClass_UActorSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_SequencePlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Animation being played */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
		{ "ToolTip", "Animation being played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, Sequence), Z_Construct_UClass_UGAEffectCueSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, EndTime), METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_EndTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, StartTime), METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_Period_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, Period), METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, Duration), METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_AssetBundleData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_AssetBundleData = { "AssetBundleData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, AssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_AssetBundleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_AssetBundleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_EffectCueTagSearch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_EffectCueTagSearch = { "EffectCueTagSearch", nullptr, (EPropertyFlags)0x0020090000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, EffectCueTagSearch), METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_EffectCueTagSearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_EffectCueTagSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFCueActor_Statics::NewProp_CueTag_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Effects/AFCueActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAFCueActor_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFCueActor, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::NewProp_CueTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::NewProp_CueTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFCueActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_PlaybackSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_AssetBundleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_EffectCueTagSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFCueActor_Statics::NewProp_CueTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFCueActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFCueActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAFCueActor_Statics::ClassParams = {
		&AAFCueActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAFCueActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAFCueActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAFCueActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAFCueActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAFCueActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAFCueActor, 613878778);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<AAFCueActor>()
	{
		return AAFCueActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAFCueActor(Z_Construct_UClass_AAFCueActor, &AAFCueActor::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("AAFCueActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFCueActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AAFCueActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
