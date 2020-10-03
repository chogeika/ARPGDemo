// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFCueStatic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFCueStatic() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueStatic_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueStatic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFCueStatic_OnActivate();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectCueParams();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFCueStatic_OnExecuted();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFCueStatic_OnExpire();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFCueStatic_OnRemoved();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FName NAME_UAFCueStatic_OnActivate = FName(TEXT("OnActivate"));
	void UAFCueStatic::OnActivate(FGAEffectCueParams const& Hit) const
	{
		AFCueStatic_eventOnActivate_Parms Parms;
		Parms.Hit=Hit;
		const_cast<UAFCueStatic*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAFCueStatic_OnActivate),&Parms);
	}
	static FName NAME_UAFCueStatic_OnExecuted = FName(TEXT("OnExecuted"));
	bool UAFCueStatic::OnExecuted(FGAEffectCueParams const& Hit)
	{
		AFCueStatic_eventOnExecuted_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_UAFCueStatic_OnExecuted),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAFCueStatic_OnExpire = FName(TEXT("OnExpire"));
	void UAFCueStatic::OnExpire(FGAEffectCueParams const& Hit) const
	{
		AFCueStatic_eventOnExpire_Parms Parms;
		Parms.Hit=Hit;
		const_cast<UAFCueStatic*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAFCueStatic_OnExpire),&Parms);
	}
	static FName NAME_UAFCueStatic_OnRemoved = FName(TEXT("OnRemoved"));
	void UAFCueStatic::OnRemoved(FGAEffectCueParams const& Hit) const
	{
		AFCueStatic_eventOnRemoved_Parms Parms;
		Parms.Hit=Hit;
		const_cast<UAFCueStatic*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAFCueStatic_OnRemoved),&Parms);
	}
	void UAFCueStatic::StaticRegisterNativesUAFCueStatic()
	{
		UClass* Class = UAFCueStatic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActivate", &UAFCueStatic::execOnActivate },
			{ "OnExecuted", &UAFCueStatic::execOnExecuted },
			{ "OnExpire", &UAFCueStatic::execOnExpire },
			{ "OnRemoved", &UAFCueStatic::execOnRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueStatic_eventOnActivate_Parms, Hit), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Framework|Cues" },
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFCueStatic, nullptr, "OnActivate", nullptr, nullptr, sizeof(AFCueStatic_eventOnActivate_Parms), Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFCueStatic_OnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFCueStatic_OnActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AFCueStatic_eventOnExecuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFCueStatic_eventOnExecuted_Parms), &Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueStatic_eventOnExecuted_Parms, Hit), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Framework|Cues" },
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFCueStatic, nullptr, "OnExecuted", nullptr, nullptr, sizeof(AFCueStatic_eventOnExecuted_Parms), Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFCueStatic_OnExecuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFCueStatic_OnExecuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueStatic_eventOnExpire_Parms, Hit), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Framework|Cues" },
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFCueStatic, nullptr, "OnExpire", nullptr, nullptr, sizeof(AFCueStatic_eventOnExpire_Parms), Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFCueStatic_OnExpire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFCueStatic_OnExpire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCueStatic_eventOnRemoved_Parms, Hit), Z_Construct_UScriptStruct_FGAEffectCueParams, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Framework|Cues" },
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFCueStatic, nullptr, "OnRemoved", nullptr, nullptr, sizeof(AFCueStatic_eventOnRemoved_Parms), Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFCueStatic_OnRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFCueStatic_OnRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFCueStatic_NoRegister()
	{
		return UAFCueStatic::StaticClass();
	}
	struct Z_Construct_UClass_UAFCueStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UAFCueStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFCueStatic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFCueStatic_OnActivate, "OnActivate" }, // 2402209532
		{ &Z_Construct_UFunction_UAFCueStatic_OnExecuted, "OnExecuted" }, // 1048561561
		{ &Z_Construct_UFunction_UAFCueStatic_OnExpire, "OnExpire" }, // 4021216182
		{ &Z_Construct_UFunction_UAFCueStatic_OnRemoved, "OnRemoved" }, // 3281583099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueStatic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An Non instanced Cue, where only CDO is used to execute it.\n * They cannot have state or modify any external state.\n */" },
		{ "IncludePath", "Effects/AFCueStatic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "An Non instanced Cue, where only CDO is used to execute it.\nThey cannot have state or modify any external state." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueStatic_Statics::NewProp_AssetBundleData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFCueStatic_Statics::NewProp_AssetBundleData = { "AssetBundleData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFCueStatic, AssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_UAFCueStatic_Statics::NewProp_AssetBundleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFCueStatic_Statics::NewProp_AssetBundleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueStatic_Statics::NewProp_EffectCueTagSearch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAFCueStatic_Statics::NewProp_EffectCueTagSearch = { "EffectCueTagSearch", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFCueStatic, EffectCueTagSearch), METADATA_PARAMS(Z_Construct_UClass_UAFCueStatic_Statics::NewProp_EffectCueTagSearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFCueStatic_Statics::NewProp_EffectCueTagSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueStatic_Statics::NewProp_CueTag_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Effects/AFCueStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAFCueStatic_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFCueStatic, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAFCueStatic_Statics::NewProp_CueTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFCueStatic_Statics::NewProp_CueTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFCueStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFCueStatic_Statics::NewProp_AssetBundleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFCueStatic_Statics::NewProp_EffectCueTagSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFCueStatic_Statics::NewProp_CueTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFCueStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFCueStatic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFCueStatic_Statics::ClassParams = {
		&UAFCueStatic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAFCueStatic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAFCueStatic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFCueStatic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFCueStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFCueStatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFCueStatic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFCueStatic, 3934877643);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFCueStatic>()
	{
		return UAFCueStatic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFCueStatic(Z_Construct_UClass_UAFCueStatic, &UAFCueStatic::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFCueStatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFCueStatic);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAFCueStatic)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
