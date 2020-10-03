// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFrameworkEditor/Public/GAGlobalTypesEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAGlobalTypesEditor() {}
// Cross Module References
	ABILITYFRAMEWORKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeNode();
	UPackage* Z_Construct_UPackage__Script_AbilityFrameworkEditor();
// End Cross Module References
class UScriptStruct* FGAAttributeNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FGAAttributeNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGAAttributeNode, Z_Construct_UPackage__Script_AbilityFrameworkEditor(), TEXT("GAAttributeNode"), sizeof(FGAAttributeNode), Get_Z_Construct_UScriptStruct_FGAAttributeNode_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORKEDITOR_API UScriptStruct* StaticStruct<FGAAttributeNode>()
{
	return FGAAttributeNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGAAttributeNode(FGAAttributeNode::StaticStruct, TEXT("/Script/AbilityFrameworkEditor"), TEXT("GAAttributeNode"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFrameworkEditor_StaticRegisterNativesFGAAttributeNode
{
	FScriptStruct_AbilityFrameworkEditor_StaticRegisterNativesFGAAttributeNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GAAttributeNode")),new UScriptStruct::TCppStructOps<FGAAttributeNode>);
	}
} ScriptStruct_AbilityFrameworkEditor_StaticRegisterNativesFGAAttributeNode;
	struct Z_Construct_UScriptStruct_FGAAttributeNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGAAttributeNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAGlobalTypesEditor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGAAttributeNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGAAttributeNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGAAttributeNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFrameworkEditor,
		nullptr,
		&NewStructOps,
		"GAAttributeNode",
		sizeof(FGAAttributeNode),
		alignof(FGAAttributeNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGAAttributeNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGAAttributeNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGAAttributeNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGAAttributeNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFrameworkEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GAAttributeNode"), sizeof(FGAAttributeNode), Get_Z_Construct_UScriptStruct_FGAAttributeNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGAAttributeNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGAAttributeNode_Hash() { return 670821551U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
