// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DraggableWindow/Public/DWTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDWTypes() {}
// Cross Module References
	DRAGGABLEWINDOW_API UScriptStruct* Z_Construct_UScriptStruct_FDWWWindowHandle();
	UPackage* Z_Construct_UPackage__Script_DraggableWindow();
// End Cross Module References
class UScriptStruct* FDWWWindowHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRAGGABLEWINDOW_API uint32 Get_Z_Construct_UScriptStruct_FDWWWindowHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDWWWindowHandle, Z_Construct_UPackage__Script_DraggableWindow(), TEXT("DWWWindowHandle"), sizeof(FDWWWindowHandle), Get_Z_Construct_UScriptStruct_FDWWWindowHandle_Hash());
	}
	return Singleton;
}
template<> DRAGGABLEWINDOW_API UScriptStruct* StaticStruct<FDWWWindowHandle>()
{
	return FDWWWindowHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDWWWindowHandle(FDWWWindowHandle::StaticStruct, TEXT("/Script/DraggableWindow"), TEXT("DWWWindowHandle"), false, nullptr, nullptr);
static struct FScriptStruct_DraggableWindow_StaticRegisterNativesFDWWWindowHandle
{
	FScriptStruct_DraggableWindow_StaticRegisterNativesFDWWWindowHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DWWWindowHandle")),new UScriptStruct::TCppStructOps<FDWWWindowHandle>);
	}
} ScriptStruct_DraggableWindow_StaticRegisterNativesFDWWWindowHandle;
	struct Z_Construct_UScriptStruct_FDWWWindowHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWWWindowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DWTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDWWWindowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDWWWindowHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDWWWindowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DraggableWindow,
		nullptr,
		&NewStructOps,
		"DWWWindowHandle",
		sizeof(FDWWWindowHandle),
		alignof(FDWWWindowHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDWWWindowHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDWWWindowHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDWWWindowHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDWWWindowHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DraggableWindow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DWWWindowHandle"), sizeof(FDWWWindowHandle), Get_Z_Construct_UScriptStruct_FDWWWindowHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDWWWindowHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDWWWindowHandle_Hash() { return 1734662799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
