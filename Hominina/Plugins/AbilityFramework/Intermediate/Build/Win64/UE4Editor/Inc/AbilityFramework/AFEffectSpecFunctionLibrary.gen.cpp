// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/AFEffectSpecFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectSpecFunctionLibrary() {}
// Cross Module References
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFTagCompare();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFTagContainerCompare();
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectSpecFunctionLibrary_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectSpecFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpecHandle();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags();
// End Cross Module References
	static UEnum* EAFTagCompare_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFTagCompare, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFTagCompare"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFTagCompare>()
	{
		return EAFTagCompare_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFTagCompare(EAFTagCompare_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFTagCompare"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFTagCompare_Hash() { return 3595771420U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFTagCompare()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFTagCompare"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFTagCompare_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAFTagCompare::HasTag", (int64)EAFTagCompare::HasTag },
				{ "EAFTagCompare::HasTagExact", (int64)EAFTagCompare::HasTagExact },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HasTag.Name", "EAFTagCompare::HasTag" },
				{ "HasTagExact.Name", "EAFTagCompare::HasTagExact" },
				{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFTagCompare",
				"EAFTagCompare",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAFTagContainerCompare_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFTagContainerCompare, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFTagContainerCompare"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFTagContainerCompare>()
	{
		return EAFTagContainerCompare_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFTagContainerCompare(EAFTagContainerCompare_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFTagContainerCompare"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFTagContainerCompare_Hash() { return 2333944682U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFTagContainerCompare()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFTagContainerCompare"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFTagContainerCompare_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAFTagContainerCompare::HasAny", (int64)EAFTagContainerCompare::HasAny },
				{ "EAFTagContainerCompare::HasAnyExact", (int64)EAFTagContainerCompare::HasAnyExact },
				{ "EAFTagContainerCompare::HasAll", (int64)EAFTagContainerCompare::HasAll },
				{ "EAFTagContainerCompare::HasAllExact", (int64)EAFTagContainerCompare::HasAllExact },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HasAll.Name", "EAFTagContainerCompare::HasAll" },
				{ "HasAllExact.Name", "EAFTagContainerCompare::HasAllExact" },
				{ "HasAny.Name", "EAFTagContainerCompare::HasAny" },
				{ "HasAnyExact.Name", "EAFTagContainerCompare::HasAnyExact" },
				{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFTagContainerCompare",
				"EAFTagContainerCompare",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAFTagCompareResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFTagCompareResult"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFTagCompareResult>()
	{
		return EAFTagCompareResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFTagCompareResult(EAFTagCompareResult_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFTagCompareResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult_Hash() { return 4146622166U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFTagCompareResult"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAFTagCompareResult::Match", (int64)EAFTagCompareResult::Match },
				{ "EAFTagCompareResult::NoMatch", (int64)EAFTagCompareResult::NoMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Match.Name", "EAFTagCompareResult::Match" },
				{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
				{ "NoMatch.Name", "EAFTagCompareResult::NoMatch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFTagCompareResult",
				"EAFTagCompareResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAFEffectSpecFunctionLibrary::StaticRegisterNativesUAFEffectSpecFunctionLibrary()
	{
		UClass* Class = UAFEffectSpecFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendOwnedTags", &UAFEffectSpecFunctionLibrary::execAppendOwnedTags },
			{ "CompareOwnedTag", &UAFEffectSpecFunctionLibrary::execCompareOwnedTag },
			{ "CompareOwnedTags", &UAFEffectSpecFunctionLibrary::execCompareOwnedTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics
	{
		struct AFEffectSpecFunctionLibrary_eventAppendOwnedTags_Parms
		{
			FAFEffectSpecHandle Spec;
			FGameplayTagContainer InTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_InTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventAppendOwnedTags_Parms, InTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_InTags_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_InTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventAppendOwnedTags_Parms, Spec), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_InTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::NewProp_Spec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects|Spec" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectSpecFunctionLibrary, nullptr, "AppendOwnedTags", nullptr, nullptr, sizeof(AFEffectSpecFunctionLibrary_eventAppendOwnedTags_Parms), Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics
	{
		struct AFEffectSpecFunctionLibrary_eventCompareOwnedTag_Parms
		{
			FAFEffectSpecHandle Spec;
			EAFTagCompare Mode;
			FGameplayTag InTag;
			EAFTagCompareResult Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTag_Parms, Result), Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTag_Parms, Mode), Z_Construct_UEnum_AbilityFramework_EAFTagCompare, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTag_Parms, Spec), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::NewProp_Spec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects|Spec" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectSpecFunctionLibrary, nullptr, "CompareOwnedTag", nullptr, nullptr, sizeof(AFEffectSpecFunctionLibrary_eventCompareOwnedTag_Parms), Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics
	{
		struct AFEffectSpecFunctionLibrary_eventCompareOwnedTags_Parms
		{
			FAFEffectSpecHandle Spec;
			EAFTagContainerCompare Mode;
			FGameplayTagContainer InTags;
			EAFTagCompareResult Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTags_Parms, Result), Z_Construct_UEnum_AbilityFramework_EAFTagCompareResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_InTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTags_Parms, InTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_InTags_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_InTags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTags_Parms, Mode), Z_Construct_UEnum_AbilityFramework_EAFTagContainerCompare, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectSpecFunctionLibrary_eventCompareOwnedTags_Parms, Spec), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_InTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::NewProp_Spec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Effects|Spec" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectSpecFunctionLibrary, nullptr, "CompareOwnedTags", nullptr, nullptr, sizeof(AFEffectSpecFunctionLibrary_eventCompareOwnedTags_Parms), Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFEffectSpecFunctionLibrary_NoRegister()
	{
		return UAFEffectSpecFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_AppendOwnedTags, "AppendOwnedTags" }, // 1808214832
		{ &Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTag, "CompareOwnedTag" }, // 430835690
		{ &Z_Construct_UFunction_UAFEffectSpecFunctionLibrary_CompareOwnedTags, "CompareOwnedTags" }, // 3038520869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effects/AFEffectSpecFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Effects/AFEffectSpecFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectSpecFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::ClassParams = {
		&UAFEffectSpecFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectSpecFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectSpecFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectSpecFunctionLibrary, 661817344);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectSpecFunctionLibrary>()
	{
		return UAFEffectSpecFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectSpecFunctionLibrary(Z_Construct_UClass_UAFEffectSpecFunctionLibrary, &UAFEffectSpecFunctionLibrary::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectSpecFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectSpecFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
