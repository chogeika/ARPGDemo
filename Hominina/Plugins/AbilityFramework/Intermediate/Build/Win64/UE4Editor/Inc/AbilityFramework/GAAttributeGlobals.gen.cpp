// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Attributes/GAAttributeGlobals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAttributeGlobals() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDumbStruct();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
class UScriptStruct* FDumbStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FDumbStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDumbStruct, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("DumbStruct"), sizeof(FDumbStruct), Get_Z_Construct_UScriptStruct_FDumbStruct_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FDumbStruct>()
{
	return FDumbStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDumbStruct(FDumbStruct::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("DumbStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFDumbStruct
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFDumbStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DumbStruct")),new UScriptStruct::TCppStructOps<FDumbStruct>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFDumbStruct;
	struct Z_Construct_UScriptStruct_FDumbStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDumbStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributeGlobals.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDumbStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDumbStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDumbStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"DumbStruct",
		sizeof(FDumbStruct),
		alignof(FDumbStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDumbStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDumbStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDumbStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDumbStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DumbStruct"), sizeof(FDumbStruct), Get_Z_Construct_UScriptStruct_FDumbStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDumbStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDumbStruct_Hash() { return 1316492705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
