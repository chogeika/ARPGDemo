// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectCueGlobals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectCueGlobals() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGACueContainer();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
// End Cross Module References
class UScriptStruct* FGACueContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FGACueContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGACueContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("GACueContainer"), sizeof(FGACueContainer), Get_Z_Construct_UScriptStruct_FGACueContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FGACueContainer>()
{
	return FGACueContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGACueContainer(FGACueContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("GACueContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFGACueContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFGACueContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GACueContainer")),new UScriptStruct::TCppStructOps<FGACueContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFGACueContainer;
	struct Z_Construct_UScriptStruct_FGACueContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGACueContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectCueGlobals.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGACueContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGACueContainer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGACueContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"GACueContainer",
		sizeof(FGACueContainer),
		alignof(FGACueContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGACueContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGACueContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGACueContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGACueContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GACueContainer"), sizeof(FGACueContainer), Get_Z_Construct_UScriptStruct_FGACueContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGACueContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGACueContainer_Hash() { return 2735229285U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
