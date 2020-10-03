// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFBlueprintFunctionLibrary() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFBlueprintFunctionLibrary_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag();
// End Cross Module References
	void UAFBlueprintFunctionLibrary::StaticRegisterNativesUAFBlueprintFunctionLibrary()
	{
		UClass* Class = UAFBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerAbilityPressedByTag", &UAFBlueprintFunctionLibrary::execTriggerAbilityPressedByTag },
			{ "TriggerAbilityReleasedByTag", &UAFBlueprintFunctionLibrary::execTriggerAbilityReleasedByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics
	{
		struct AFBlueprintFunctionLibrary_eventTriggerAbilityPressedByTag_Parms
		{
			UObject* Target;
			FGameplayTag AbilityTag;
			FGameplayTag ActionTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBlueprintFunctionLibrary_eventTriggerAbilityPressedByTag_Parms, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBlueprintFunctionLibrary_eventTriggerAbilityPressedByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_AbilityTag_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_AbilityTag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBlueprintFunctionLibrary_eventTriggerAbilityPressedByTag_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_ActionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_AbilityTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Abilities" },
		{ "ModuleRelativePath", "Public/AFBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFBlueprintFunctionLibrary, nullptr, "TriggerAbilityPressedByTag", nullptr, nullptr, sizeof(AFBlueprintFunctionLibrary_eventTriggerAbilityPressedByTag_Parms), Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics
	{
		struct AFBlueprintFunctionLibrary_eventTriggerAbilityReleasedByTag_Parms
		{
			UObject* Target;
			FGameplayTag AbilityTag;
			FGameplayTag ActionTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBlueprintFunctionLibrary_eventTriggerAbilityReleasedByTag_Parms, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBlueprintFunctionLibrary_eventTriggerAbilityReleasedByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_AbilityTag_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_AbilityTag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFBlueprintFunctionLibrary_eventTriggerAbilityReleasedByTag_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_ActionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_AbilityTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Abilities" },
		{ "ModuleRelativePath", "Public/AFBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFBlueprintFunctionLibrary, nullptr, "TriggerAbilityReleasedByTag", nullptr, nullptr, sizeof(AFBlueprintFunctionLibrary_eventTriggerAbilityReleasedByTag_Parms), Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFBlueprintFunctionLibrary_NoRegister()
	{
		return UAFBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityPressedByTag, "TriggerAbilityPressedByTag" }, // 2155553847
		{ &Z_Construct_UFunction_UAFBlueprintFunctionLibrary_TriggerAbilityReleasedByTag, "TriggerAbilityReleasedByTag" }, // 4256791146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Some static helper functions, to interact with Attribute system.\n*/" },
		{ "IncludePath", "AFBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AFBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Some static helper functions, to interact with Attribute system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::ClassParams = {
		&UAFBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFBlueprintFunctionLibrary, 153362886);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFBlueprintFunctionLibrary>()
	{
		return UAFBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFBlueprintFunctionLibrary(Z_Construct_UClass_UAFBlueprintFunctionLibrary, &UAFBlueprintFunctionLibrary::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
