// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFCueManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFCueManager() {}
// Cross Module References
	ABILITYFRAMEWORK_API UEnum* Z_Construct_UEnum_AbilityFramework_EAFCueEvent();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFCueData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueManager_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFCueManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
// End Cross Module References
	static UEnum* EAFCueEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AbilityFramework_EAFCueEvent, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("EAFCueEvent"));
		}
		return Singleton;
	}
	template<> ABILITYFRAMEWORK_API UEnum* StaticEnum<EAFCueEvent>()
	{
		return EAFCueEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAFCueEvent(EAFCueEvent_StaticEnum, TEXT("/Script/AbilityFramework"), TEXT("EAFCueEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AbilityFramework_EAFCueEvent_Hash() { return 377631456U; }
	UEnum* Z_Construct_UEnum_AbilityFramework_EAFCueEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAFCueEvent"), 0, Get_Z_Construct_UEnum_AbilityFramework_EAFCueEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Activated", (int64)Activated },
				{ "Executed", (int64)Executed },
				{ "Expire", (int64)Expire },
				{ "Removed", (int64)Removed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Activated.Name", "Activated" },
				{ "Executed.Name", "Executed" },
				{ "Expire.Name", "Expire" },
				{ "ModuleRelativePath", "Public/AFCueManager.h" },
				{ "Removed.Name", "Removed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework,
				nullptr,
				"EAFCueEvent",
				"EAFCueEvent",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAFCueData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFCueData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFCueData, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFCueData"), sizeof(FAFCueData), Get_Z_Construct_UScriptStruct_FAFCueData_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFCueData>()
{
	return FAFCueData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFCueData(FAFCueData::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFCueData"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueData
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFCueData")),new UScriptStruct::TCppStructOps<FAFCueData>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFCueData;
	struct Z_Construct_UScriptStruct_FAFCueData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CueClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFCueManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFCueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFCueData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFCueManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueClass = { "CueClass", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFCueData, CueClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_AssetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFCueManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFCueData, AssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_AssetId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_AssetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFCueManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFCueData, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFCueData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_AssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFCueData_Statics::NewProp_CueTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFCueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFCueData",
		sizeof(FAFCueData),
		alignof(FAFCueData),
		Z_Construct_UScriptStruct_FAFCueData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFCueData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFCueData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFCueData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFCueData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFCueData"), sizeof(FAFCueData), Get_Z_Construct_UScriptStruct_FAFCueData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFCueData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFCueData_Hash() { return 600957621U; }
	void UAFCueManager::StaticRegisterNativesUAFCueManager()
	{
	}
	UClass* Z_Construct_UClass_UAFCueManager_NoRegister()
	{
		return UAFCueManager::StaticClass();
	}
	struct Z_Construct_UClass_UAFCueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticCues_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticCues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFCueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AFCueManager.h" },
		{ "ModuleRelativePath", "Public/AFCueManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFCueManager_Statics::NewProp_StaticCues_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFCueManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFCueManager_Statics::NewProp_StaticCues = { "StaticCues", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFCueManager, StaticCues), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFCueManager_Statics::NewProp_StaticCues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFCueManager_Statics::NewProp_StaticCues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFCueManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFCueManager_Statics::NewProp_StaticCues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFCueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFCueManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFCueManager_Statics::ClassParams = {
		&UAFCueManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAFCueManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAFCueManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFCueManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFCueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFCueManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFCueManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFCueManager, 1218739226);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFCueManager>()
	{
		return UAFCueManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFCueManager(Z_Construct_UClass_UAFCueManager, &UAFCueManager::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFCueManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFCueManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
